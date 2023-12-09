package magmasi.components

import chisel3._
import chisel3.util._

class Distribution2(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
    val matrix = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val s = Input(UInt(32.W))
    val out = Output(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val ProcessValid = Output(Bool())
    val valid = Input(Bool())
    // val iteration = Output(UInt(32.W))
    // val validIteration = Output(Bool())


    })

                io.out := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
        io.ProcessValid := 0.B
    dontTouch(io.valid)

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val count = RegInit(0.U(32.W))
    val Idex = RegInit(VecInit(Seq.fill(config.MaxRows * 2)(0.U(32.W))))
    val Jdex = RegInit(VecInit(Seq.fill(config.MaxCols * 2)(0.U(32.W))))
    val mat = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    val iterationNo = RegInit(0.U(32.W))

    when ( io.valid){
    when (io.matrix(i)(j) === 1.U){
      iterationNo := iterationNo + 1.U
    }

    mat := io.matrix
    dontTouch(i)
    dontTouch(j)
    dontTouch(count)
    dontTouch(Idex)
    dontTouch(Jdex)

    when ((io.matrix(i)(j) === 1.U) && ((i =/= (config.MaxRows-1).U) || (j =/= (config.MaxCols-1).U))){
        count := count + 1.U
        Idex(count) := i
        Jdex(count) := j
    }.elsewhen((io.matrix(i)(j) === 1.U) && (i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U)){
        Idex(count) := i
        Jdex(count) := j
    }

// -------------------------------------------------------------
    
    
    
    val part2 = Module(new SingleLoop2)
    part2.io.mat := io.matrix

    val complete = RegNext(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U))

    part2.io.valid := complete
    
    when (complete){
        part2.io.IDex := Idex(io.s)
        part2.io.JDex := Jdex(io.s)
    }.otherwise{
        part2.io.IDex := 0.U
        part2.io.JDex :=0.U
    }

    val part3 = Module(new MergeDistribution2)
    part3.io.PreMat := part2.io.OutMat
    part3.io.IDex := Idex(io.s)
    part3.io.JDex := Jdex(io.s)
    part3.io.mat := io.matrix
    part3.io.i_valid := part2.io.ProcessValid

    val continue = part2.io.Ovalid
    dontTouch(continue)

    // val check = WireInit(0.B)
    // when (part2.io.Ovalid){
    //     check := 0.B
    // }.otherwise{
    //     check := 1.B
    // }
    
    when(part2.io.Ovalid){
        io.ProcessValid := part2.io.ProcessValid
        io.out := part2.io.OutMat    
    }.elsewhen(part3.io.valid){
        io.ProcessValid := part3.io.valid
        io.out := part3.io.Omat
    }

    dontTouch(part3.io.Omat)
    dontTouch(part2.io.ProcessValid)
    
    
    
    
    
    
    
    
    
    
    
    
    // --------------------------------------------------------------























    when ( i < (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        i := i + 1.U
    }
    when ( i <= (config.MaxRows-1).U && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        j := j
    }.otherwise{
        j := 0.U
    }


    }.otherwise{
        io.out := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
        io.ProcessValid := 0.B
        // io.iteration := 0.U
        // io.validIteration := 0.B
    }

}
