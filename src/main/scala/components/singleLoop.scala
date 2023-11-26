package magmasi.components

import chisel3._
import chisel3.util._

class abc2 extends Module{
    val io = IO(new Bundle{
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val valid = Input(Bool())
        val mat = Input(Vec(4,Vec(4,UInt(32.W))))
        val OutMat = Output(Vec(4,Vec(4,UInt(32.W))))
        val Ovalid = Output(Bool())
        val ProcessValid = Output(Bool())
    })

    //val i = RegInit(io.IDex(32.W))\
    //val valid = RegInit(bool())
    val b = RegInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))
    io.OutMat := b
    val j = Reg(UInt(32.W))
    j := io.JDex
    val a = RegInit(0.U(32.W))
    when(io.valid && (a =/= 0.U)){
    b(io.IDex)(j) := io.mat(io.IDex)(j)}
    io.Ovalid := RegNext(io.mat(io.IDex)(3) === 4.U)
    io.ProcessValid := WireInit(j === 3.U)


    
    
    
    
    
    
    
    
    
    
    
    when (io.valid){
    a := a + 1.U}
    dontTouch(j)
    when (io.valid && (a =/= 0.U) && (j < 3.U)){
        j := j + 1.U
    }.elsewhen(j === 3.U){
        j := j
    }







}
