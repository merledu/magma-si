package magmasi.components

import chisel3._
import chisel3.util._

class Bitmap(rows:Int,cols:Int,DATA_TYPE:Int) extends Module{
    val io = IO(new Bundle {
        val mat1 =Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val mat2 = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
         val bitmap1 =Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val bitmap2 = Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
    })

    val matReg1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
    val matReg2 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
    io.bitmap1 := matReg1
    io.bitmap2 := matReg2

    val i = RegInit(0.U(log2Ceil(rows).W))
    val j = RegInit(0.U(log2Ceil(cols).W))

    when (j < cols.U) {
                    when (io.mat1(i)(j) =/= 0.U){
                matReg1(i)(j) := 1.U
            }.otherwise{
                matReg1(i)(j) := 0.U
            }
            when (io.mat2(i)(j) =/= 0.U){
                matReg2(i)(j) := 1.U
            }.otherwise{
                matReg2(i)(j) := 0.U
            }
         j := j + 1.U
}
  when (j === (cols-1).U){
    i := i + 1.U
  }


}