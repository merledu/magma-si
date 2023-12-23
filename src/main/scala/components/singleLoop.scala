package magmasi.components

import chisel3._
import chisel3.util._

class abc2(implicit val config : MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val valid = Input(Bool())
        val mat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val OutMat = Output(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val Ovalid = Output(Bool())
        val ProcessValid = Output(Bool())
    })

    //val i = RegInit(io.IDex(32.W))\
    //val valid = RegInit(bool())
    val b = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    io.OutMat := b
    val j = Reg(UInt(32.W))
    j := io.JDex
    val a = RegInit(0.U(32.W))
    when(io.valid && (a =/= 0.U)){
    b(io.IDex)(j) := io.mat(io.IDex)(j)}
    when (j === 1.U){
    io.Ovalid := RegNext(io.mat(io.IDex)(1) === config.NUM_PES.U)
    }.otherwise{
        io.Ovalid := 0.B
    }
    io.ProcessValid := WireInit(j === (config.MaxCols-1).U)


    
    
    
    
    
    
    
    
    
    
    
    when (io.valid){
    a := a + 1.U}
    dontTouch(j)
    when (io.valid && (a =/= 0.U) && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(j === (config.MaxCols-1).U){
        j := j
    }







}
