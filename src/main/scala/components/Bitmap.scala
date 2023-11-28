package magmasi.components

import chisel3._
import chisel3.util._

class Bitmap(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle {
        val mat1 =Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val mat2 = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
         val bitmap1 =Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val bitmap2 = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    })

    val matReg1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    val matReg2 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    io.bitmap1 := matReg1
    io.bitmap2 := matReg2

    val i = RegInit(0.U(log2Ceil(config.MaxRows).W))
    val j = RegInit(0.U(log2Ceil(config.MaxCols).W))

    when (j < config.MaxCols.U) {
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
  when (j === (config.MaxCols-1).U){
    i := i + 1.U
  }


}
