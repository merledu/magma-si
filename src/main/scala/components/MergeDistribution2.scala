package magmasi.components

import chisel3._
import chisel3.util._

class MergeDistribution2(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val PreMat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val mat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val i_valid = Input(Bool())
        val valid = Output(Bool())
        val Omat = Output(Vec(config.MaxRows,(Vec(config.MaxCols,UInt(32.W)))))
    })
    val b = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    io.Omat := b
    io.valid := 0.B
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    dontTouch(i)
    dontTouch(j)

    
    when (io.i_valid){
        b := io.PreMat
        b(i)(j) := io.mat(i)(j)
        i := io.IDex + 1.U

    when(io.mat(i)(j) === config.NUM_PES.U){
        i := i
        j := j
        io.valid := 1.B
    }.elsewhen ( i < (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        i := i + 1.U
        j := 0.U
    }.elsewhen ( i <= (config.MaxRows-1).U && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        j := j
    }
    }



}
