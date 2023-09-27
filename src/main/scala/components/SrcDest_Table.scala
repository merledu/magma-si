package magmasi.components

import chisel3._
import chisel3.util._

class SrcDest_Table(rows:Int,cols:Int,DATA_TYPE:Int,LEVELS:Int) extends Module{
    val io = IO(new Bundle{
        val KM_matrix = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val NK_matrix = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val counterMatrix1 = Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
    val counterMatrix2 = Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))    
})

  val counterRegs1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
  val counterRegs2 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))

  val i = RegInit(0.U(log2Ceil(rows).W))
  val j = RegInit(0.U(log2Ceil(cols).W))

  val counter1 = RegInit(1.U(3.W))
  val counter2 = RegInit(1.U(3.W))

  val notContinue1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(false.B)))))
  val notContinue2 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(false.B)))))


when (j < cols.U) {
  when (io.KM_matrix(i)(j) =/= 0.U) {
    when (counter1 < 5.U) {
      when (notContinue1(i)(j) === 0.B){
      counterRegs1(i)(j) := counter1
      counter1 := counter1 + 1.U
      notContinue1(i)(j) := 1.B
      }
    }.otherwise {
      when (notContinue1(i)(j) === 0.B){
      counterRegs1(i)(j) := 1.U
      counter1 := 2.U
      notContinue1(i)(j) := 1.B
      }
    }
  }.otherwise {
    when (notContinue1(i)(j) === 0.B){
    counterRegs1(i)(j) := 0.U
    notContinue1(i)(j) := 1.B
    }
  }                                           // counter values for MK_matrix is done
  //---------------------------------------------------------------------------------
    when (io.NK_matrix(j)(i) =/= 0.U) {
    when (counter2 < 5.U) {
      when (notContinue2(j)(i) === 0.B){
      counterRegs2(j)(i) := counter2
      counter2 := counter2 + 1.U
      notContinue2(j)(i) := 1.B
      }
    }.otherwise {
      when (notContinue2(j)(i) === 0.B){
      counterRegs2(j)(i) := 1.U
      counter2 := 2.U
      notContinue2(j)(i) := 1.B
      }
    }
  }.otherwise {
    when (notContinue2(j)(i) === 0.B){
    counterRegs2(j)(i) := 0.U
    notContinue2(j)(i) := 1.B
    }
  }                                           // counter values for Nk_matrix is done
  //--------------------------------------------------------------------------------------
  j := j + 1.U
}
  when (j === (cols-1).U){
    i := i + 1.U
    counter2 := 1.U
  }



  dontTouch(i)
  dontTouch(j)

  io.counterMatrix1 := counterRegs1
  io.counterMatrix2 := counterRegs2
}