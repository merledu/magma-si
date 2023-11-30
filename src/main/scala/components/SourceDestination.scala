package magmasi.components

import chisel3._
import chisel3.util._

class SourceDestination(implicit val config: MagmasiConfig) extends Module {
    val io = IO(new Bundle{
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val counterMatrix1 = Decoupled(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val counterMatrix2 = Decoupled(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val valid = Output(Bool())
    })
  
    val prevStationary_matrix = RegNext(io.Stationary_matrix)
    val matricesAreEqual = Reg(Bool())
    matricesAreEqual := true.B

    for (i <- 0 until config.MaxRows) {
      for (j <- 0 until config.MaxCols) {
        when(io.Stationary_matrix(i)(j) =/= prevStationary_matrix(i)(j)) {
          matricesAreEqual := false.B
        }
      }
    }
    dontTouch(matricesAreEqual)


    val counterRegs1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    val counterRegs2 = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))

    val valid1 = RegInit(false.B)
    val jValid = Reg(Bool())
    jValid := 0.B
    val k = RegInit(0.U(32.W))

    val counter1 = RegInit(1.U(32.W))
    val counter2 = RegInit(1.U(32.W))
    dontTouch(counter2)

    when (io.Stationary_matrix(i)(j) =/= 0.U) {
      when (counter1 < (config.NUM_PES + 1).U) {
        counterRegs1(i)(j) := counter1
        when (~((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U))){
          counter1 := counter1 + 1.U
        }
      }.otherwise {
        counterRegs1(i)(j) := 1.U
        counter1 := 2.U
      }
    }.otherwise {
      counterRegs1(i)(j) := 0.U
    }

    when (io.Streaming_matrix(k) =/= 0.U) {
      counterRegs2(k) := counter2
      counter2 := counter2 + 1.U
    }
    val reg_i = RegNext(((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)), 1.B)
    valid1 := Mux(((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)) === reg_i,1.B,0.B)
    
    when (k >= 0.U){
        k := k + 1.U
    }
    when (jValid === 0.B){
      when(j < (config.MaxCols - 1).U) {    
        j := j + 1.U
      }.elsewhen((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)){
        jValid := 1.B
      }.otherwise {
        j := 0.U
        when(i < (config.MaxRows - 1).U) {  
          i := i + 1.U
        }
      }
    }.elsewhen ((jValid === 1.B) && (matricesAreEqual === 0.B)){
      i := 0.U
      j := 0.U
      k := 0.U
      counter1 := 1.U
      counter2 := 1.U
      for ( i <- 0 until config.MaxRows){
        for (j <- 0 until config.MaxCols){
          counterRegs1(i)(j) := 0.U
        }
        counterRegs2(i) := 0.U
      }
    }

    io.valid :=(i === 3.U) && (j === 3.U)//valid1

    when ((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)){
      io.counterMatrix1.valid := 1.B
      io.counterMatrix2.valid := 1.B
    }.otherwise{
      io.counterMatrix1.valid := 0.B
      io.counterMatrix2.valid := 0.B
    }
    
    io.counterMatrix1.bits <> counterRegs1
    io.counterMatrix2.bits <> counterRegs2

}