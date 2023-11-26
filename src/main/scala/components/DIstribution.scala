package magmasi.components

import chisel3._
import chisel3.util._

class Distribution(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
    val matrix = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val s = Input(UInt(32.W))
    val out = Output(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val ProcessValid = Output(Bool())

    })
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val count = RegInit(0.U(32.W))
    val Idex = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))
    val Jdex = RegInit(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))
    dontTouch(i)
    dontTouch(j)
    dontTouch(count)
    dontTouch(Idex)
    dontTouch(Jdex)
    dontTouch(ValidDex)
    

    when (a && (i < (config.MaxRows-1).U) && (j < (config.MaxCols-1).U)){
        count := count + 1.U
        Idex(count) := i
        Jdex(count) := j
    }.elsewhen(a && (i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U)){
        Idex(count) := i
        Jdex(count) := j
    }
val part2 = Module(new abc2)
part2.io.mat := io.matrix
    val c = RegNext(i === (config.MaxRows-1).U && (j === (config.MaxCols).U))
    part2.io.valid := c
    when (c){
    part2.io.IDex := Idex(io.s)
    part2.io.JDex := Jdex(io.s)
    }.otherwise{
    part2.io.IDex := 0.U
    part2.io.JDex :=0.U
    }

    dontTouch(part2.io.IDex)

    val part3 = Module(new abc3)
    part3.io.merge := RegNext(c)
    part3.io.mat := io.matrix
    part3.io.i_valid := part2.io.ProcessValid
    //val d = part3.io.valid
    part3.io.PreMat := part2.io.OutMat
    when (part2.io.ProcessValid){
    
    part3.io.mat := io.matrix
    part3.io.IDex := Idex(io.s)
    part3.io.JDex := Jdex(io.s)
    io.out := part3.io.Omat 
    io.ProcessValid := part3.io.valid
    }.otherwise{
    part3.io.PreMat := VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W)))))
    part3.io.IDex := 0.U
    part3.io.JDex := 0.U
    io.out := part2.io.OutMat
    io.ProcessValid := part2.io.Ovalid
    }
   




    when ( i < 3.U && (j === 3.U)){
        i := i + 1.U
    }

    when ( i <= 3.U && (j < 3.U)){
        j := j + 1.U
    }.elsewhen(i === 3.U && (j === 3.U)){
        j := j
    }.otherwise{
        j := 0.U
    }





}

