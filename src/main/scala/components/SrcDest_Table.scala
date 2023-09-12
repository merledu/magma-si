package magmasi.components

import chisel3._
import chisel3.util._

class SrcDest_Table(rows:Int,cols:Int,DATA_TYPE:Int,LEVELS:Int) extends Module{
    //val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
    val io = IO(new Bundle{
        val KM_matrix = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val NK_matrix = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        //val source = Output(Vec(rows*cols , UInt(DATA_TYPE.W)))
        //val muxes = Output(Vec(rows*cols, SInt((LEVELS - 1).W)))
        val counterMatrix1 = Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
    val counterMatrix2 = Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))    
})

  val counterRegs1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
  val counterRegs2 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))

  val i1 = RegInit(0.U(log2Ceil(rows).W))
  val j1 = RegInit(0.U(log2Ceil(cols).W))
dontTouch(i1)
dontTouch(j1)
  val counter1 = RegInit(1.U(3.W))
  val counter2 = RegInit(1.U(3.W))

  val notContinue1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(false.B)))))
  val notContinue2 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(false.B)))))


when (j1 < 4.U) {
  when (io.KM_matrix(i1)(j1) =/= 0.U) {
    when (counter1 < 5.U) {
      when (notContinue1(i1)(j1) === 0.B){
      counterRegs1(i1)(j1) := counter1
      counter1 := counter1 + 1.U
      notContinue1(i1)(j1) := 1.B
      }
    }.otherwise {
      when (notContinue1(i1)(j1) === 0.B){
      counterRegs1(i1)(j1) := 1.U
      counter1 := 2.U
      notContinue1(i1)(j1) := 1.B
      }
    }
  }.otherwise {
    when (notContinue1(i1)(j1) === 0.B){
    counterRegs1(i1)(j1) := 0.U
    notContinue1(i1)(j1) := 1.B
    }
  }                                           // counter values for MK_matrix is done
  //---------------------------------------------------------------------------------
    when (io.NK_matrix(j1)(i1) =/= 0.U) {
    when (counter2 < 5.U) {
      when (notContinue2(j1)(i1) === 0.B){
      counterRegs2(j1)(i1) := counter2
      counter2 := counter2 + 1.U
      notContinue2(j1)(i1) := 1.B
      }
    }.otherwise {
      when (notContinue2(j1)(i1) === 0.B){
      counterRegs2(j1)(i1) := 1.U
      counter2 := 2.U
      notContinue2(j1)(i1) := 1.B
      }
    }
  }.otherwise {
    when (notContinue2(j1)(i1) === 0.B){
    counterRegs2(j1)(i1) := 0.U
    notContinue2(j1)(i1) := 1.B
    }
  }                                           // counter values for Nk_matrix is done
  //--------------------------------------------------------------------------------------
  j1 := j1 + 1.U
}
  when (j1 === 3.U){
    i1 := i1 + 1.U
    counter2 := 1.U
  }



  dontTouch(i1)
  dontTouch(j1)

  io.counterMatrix1 := counterRegs1
  io.counterMatrix2 := counterRegs2
}