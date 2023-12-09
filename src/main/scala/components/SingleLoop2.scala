package magmasi.components

import chisel3._
import chisel3.util._

class SingleLoop2(implicit val config : MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val valid = Input(Bool())
        val mat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val OutMat = Output(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val Ovalid = Output(Bool())
        val ProcessValid = Output(Bool())
    })

    val b = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    io.OutMat := b
    val j = Reg(UInt(32.W))
    j := io.JDex

    when(io.valid){
    b(io.IDex)(j) := io.mat(io.IDex)(j)
    }

    when((io.mat(io.IDex)(j) === config.NUM_PES.U)) {
        j := j
        io.Ovalid := RegNext(1.B)
        io.ProcessValid := 1.B
    }.elsewhen(j === (config.MaxCols-1).U && (io.mat(io.IDex)(j) === config.NUM_PES.U)){
        io.Ovalid := RegNext(1.B)
        io.ProcessValid := 1.B
    }.otherwise{
        io.Ovalid := 0.B
    }
    io.ProcessValid := WireInit(j === (config.MaxCols-1).U)


    when (io.valid && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(j === (config.MaxCols-1).U){
        j := j
    }

}
