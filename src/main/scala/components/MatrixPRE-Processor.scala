package magmasi.components

import chisel3._
import chisel3.util._

class Regor(rows:Int,cols:Int,DATA_TYPE:Int) extends Module{
        implicit val config = MagmasiConfig()

    val io = IO(new Bundle{
        val mat1 =Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val mat2 = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val compressedBitmap =  Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
    })
    val matReg1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
    io.compressedBitmap := matReg1

    val bitmap = Module(new Bitmap())
    bitmap.io.mat1 := io.mat1
    bitmap.io.mat2 := io.mat2

    val reg = RegInit(VecInit(Seq.fill(rows)(false.B)))
    for (i <- 0 until rows) {
        reg(i) := io.mat2(i).map(_ =/= 0.U).reduce(_ || _)
    }
    dontTouch(reg)


    val i = RegInit(0.U(log2Ceil(rows).W))
    val j = RegInit(0.U(log2Ceil(cols).W))
    dontTouch(i)
    dontTouch(j)


    when (i < cols.U) {
        when ((reg(j) === 0.U) && (bitmap.io.bitmap1(i)(j) === 1.U)){
            matReg1(i)(j) := 0.U//bitmap.io.bitmap1(i)(j)
        }.otherwise{
            matReg1(i)(j) := bitmap.io.bitmap1(i)(j)
        }
        i := i + 1.U
    }
    when (i === (rows-1).U){
        j := j + 1.U
    }
}