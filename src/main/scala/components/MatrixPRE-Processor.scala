package magmasi.components

import chisel3._
import chisel3.util._

class Regor(rows:Int,cols:Int,DATA_TYPE:Int) extends Module{
        implicit val config = MagmasiConfig()

    val io = IO(new Bundle{
        val mat1 =Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val mat2 = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val compressedBitmap =  Output(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val valid = Output(Bool())
    })

    val matReg1 = RegInit(VecInit(Seq.fill(rows)(VecInit(Seq.fill(cols)(0.U(DATA_TYPE.W))))))
    io.compressedBitmap := matReg1



    val reg = RegInit(VecInit(Seq.fill(rows)(false.B)))
    dontTouch(reg(1))
    for (i <- 0 until rows) {
        reg(i) := io.mat1(i).map(_ =/= 0.U).reduce(_ || _)
    }
    dontTouch(reg)

    val delay = RegInit(0.U(1.W))

    when (delay < 1.U){
        delay := delay + 1.U
    }


    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    io.valid := RegNext((i === (config.MaxRows -1).U) && (j === (config.MaxCols-1).U))
    dontTouch(i)
    dontTouch(j)

    // when ((reg(i) =/= 0.U)){
    //     for (j <- 0 until config.MaxRows){
    //         matReg1(i)(j) := 0.U
    //     }
    // }


    when ((reg(j) === 0.U)){
            matReg1(i)(j) := 0.U//bitmap.io.bitmap1(i)(j)
        }.otherwise{
            matReg1(i)(j) := io.mat1(i)(j)
        }

        when (delay === 1.U){
    when ( i < (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        i := i + 1.U
    }

    when ( i <= (config.MaxRows-1).U && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        j := j
    }.otherwise{
        j := 0.U
    }}


    // when ((i === (config.MaxRows -1 ).U) && (j === (config.MaxCols-1).U)){
    //     i := i
    //     j := j 
    // }.elsewhen (i < cols.U) {
    //     when ((reg(j) === 0.U)){
    //         matReg1(i)(j) := 0.U//bitmap.io.bitmap1(i)(j)
    //     }.otherwise{
    //         matReg1(i)(j) := io.mat2(i)(j)
    //     }
    //     i := i + 1.U
    // }
    // when (i === (rows-1).U){
    //     j := j + 1.U
    // }
}