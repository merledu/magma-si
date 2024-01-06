package magmasi.components

import chisel3._
import chisel3.util._

class Muxes(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val mat1 =Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val mat2 = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val counterMatrix1 = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val counterMatrix2 = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val i_mux_bus = Output(Vec(config.NUM_PES, Vec(config.NUM_PES, UInt(4.W))))
        val Source  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val destination  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val valid = Output(Bool())  
        //val start = Input(Bool())
    })

    val prevStationary_matrix = RegNext(io.mat1)
    val prevStreaming_matrix = RegNext(io.mat2)
    val matricesAreEqual = Reg(Bool())
    matricesAreEqual := true.B



    dontTouch(matricesAreEqual)
    val jValid = RegInit(false.B)
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val k = RegInit(0.U(32.W))
    val counter = RegInit(0.U(32.W))
    val indexcounter = RegInit(0.U(32.W))
    dontTouch(indexcounter)
    val muxes = RegInit(VecInit(Seq.fill(config.NUM_PES)(VecInit(Seq.fill(config.NUM_PES)(0.U(4.W))))))
    val src = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.DATA_TYPE).W))))
    val dest = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.DATA_TYPE).W))))
    dontTouch(muxes)
    io.i_mux_bus := muxes
    io.Source := src
    io.destination := dest
    dontTouch(src)
    dontTouch(dest)
    dontTouch(k)
    //when (io.start){
        for (i <- 0 until config.MaxRows) {
      for (j <- 0 until config.MaxCols) {
        when(io.mat1(i)(j) =/= prevStationary_matrix(i)(j)) {
          matricesAreEqual := false.B
        }
      }
      when(io.mat2(i) =/= prevStreaming_matrix(i)){
        matricesAreEqual := false.B
      }
    }

    when (~jValid && (io.counterMatrix1(j)(i) =/= 0.U) && (io.mat2(i) =/= 0.U)) {
        
        when(io.counterMatrix1(j)(i) <= io.counterMatrix2(i)){
          muxes(counter)(indexcounter) := (io.counterMatrix2(i) - 1.U) - (io.counterMatrix1(j)(i) - 1.U)
          src(counter) := io.mat2(i)
          dest(counter) := io.mat1(j)(i)
        }.otherwise{
          muxes(counter)(indexcounter) := (io.counterMatrix1(j)(i) - 1.U) - (io.counterMatrix2(i) - 1.U)
          src(counter) := io.mat2(i)      
          dest(counter) := io.mat1(j)(i)
        }
        
        // when (j === (config.MaxCols-1).U) {

        //   when (~((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U))){
        //   counter := counter + 1.U
        //   indexcounter := 0.U
        //   }

        // }.elsewhen (~jValid && (j < (config.MaxCols-1).U)){
        //   indexcounter := indexcounter + 1.U
        // }
    }

    // when ( ~jValid && (counter === (config.MaxCols - 1).U)){
    //   counter := counter
   
    // }.else
    //   when ( ~jValid && (io.counterMatrix1(0.U)(i+1.U) =/= 0.U) && (io.mat2(i+1.U) =/= 0.U) && (j === (config.MaxCols -1 ).U)){
    //   counter := counter + 1.U
    //   indexcounter := 0.U
    // }.else
      when ( ~jValid && (io.counterMatrix1(j + 1.U)(i) =/= 0.U) && (io.mat2(i) =/= 0.U) && (j < (config.MaxCols -1 ).U)) {
      indexcounter := indexcounter + 1.U
    }


    when ((jValid === 0.B) ){
      
      when(j < (config.MaxCols - 1).U) {
        j := j + 1.U
      }.elsewhen((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)){
        jValid := 1.B
      }.otherwise {
        j := 0.U
        when(i < (config.MaxRows - 1).U) {
          i := i + 1.U
          counter := counter + 1.U
          indexcounter := 0.U
        }
      }
    }.elsewhen ((jValid === 1.B) && (matricesAreEqual === 0.B)){
      
      i := 0.U
      j := 0.U
      jValid := 0.B
      counter := 0.U
      indexcounter := 0.U
        
      for ( i <- 0 until (config.NUM_PES)){  
        src(i) := 0.U
        dest(i) := 0.U
        for (j <- 0 until 4){
          muxes(i)(j) := 0.U
        }    
      }
    }
    //val valid = RegInit(0.U(1.W))

    //valid := 0.B
    val jNext = RegInit(0.U)
    jNext := j
    dontTouch(jNext)
    when ((k =/= 0.U)&& (j === (config.MaxCols-1).U) && (i === (config.MaxRows-1).U) && (jNext === (config.MaxCols-2).U)){
      io.valid := 1.B
    }.otherwise{
      io.valid := 0.B
    }
    when ((i === (config.MaxRows -1 ).U) && (j === (config.MaxCols -1 ).U)){
      k := k + 1.U
    }
    
    dontTouch(i)
    dontTouch(j)
    dontTouch(counter)
// }.otherwise{
//   io.valid := 0.B
// }
}
