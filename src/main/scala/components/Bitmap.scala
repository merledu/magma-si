package magmasi.components

import chisel3._
import chisel3.util._

class Bitmap(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle {
        val mat1 =Input(Vec(config.rowsA, Vec(config.colsA, UInt(config.DATA_TYPE.W))))
        val mat2 = Input(Vec(config.rowsB, Vec(config.colsB, UInt(config.DATA_TYPE.W))))
         val bitmap1 =Output(Vec(config.rowsA, Vec(config.colsA, UInt(config.DATA_TYPE.W))))
        val bitmap2 = Output(Vec(config.rowsB, Vec(config.colsB, UInt(config.DATA_TYPE.W))))
    })

    val matReg1 = RegInit(VecInit(Seq.fill(config.rowsA)(VecInit(Seq.fill(config.colsA)(0.U(config.DATA_TYPE.W))))))
    val matReg2 = RegInit(VecInit(Seq.fill(config.rowsB)(VecInit(Seq.fill(config.colsB)(0.U(config.DATA_TYPE.W))))))
    io.bitmap1 := matReg1
    io.bitmap2 := matReg2

    val i = RegInit(0.U(log2Ceil(config.rowsA).W))
    val j = RegInit(0.U(log2Ceil(config.colsB).W))

    when (j < config.colsB.U) {
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
  when (j === (config.colsB-1).U){
    i := i + 1.U
  }


}