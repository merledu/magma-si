package magmasi.components

import chisel3._
import chisel3.util._

class Distribution(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
    val matrix = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val s = Input(UInt(32.W))
    val out = Output(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
    val ProcessValid = Output(Bool())
    val valid = Input(Bool())
    val iteration = Output(UInt(32.W))
    val validIteration = Output(Bool())
    })

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val count = RegInit(0.U(32.W))
    val Idex = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))
    val Jdex = RegInit(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))
    val mat = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    val iterationNo = RegInit(0.U(32.W))

    when ( io.valid){


    io.validIteration := (i === (config.MaxRows -1).U) && (j === (config.MaxCols -1).U)
    io.iteration := iterationNo
    dontTouch(iterationNo)

    when (io.matrix(i)(j) === 1.U){
      iterationNo := iterationNo + 1.U
    }

    mat := io.matrix
    dontTouch(i)
    dontTouch(j)
    dontTouch(count)
    dontTouch(Idex)
    dontTouch(Jdex)
    

    when ((io.matrix(i)(j) === 1.U) ){//&& (i =/= (config.MaxRows-1).U) && (j =/= (config.MaxCols-1).U)){
        count := count + 1.U
        Idex(count) := i
        Jdex(count) := j
    }.elsewhen((io.matrix(i)(j) === 1.U) && (i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U)){
        Idex(count) := i
        Jdex(count) := j
    }
val part2 = Module(new abc2)
part2.io.mat := io.matrix
    val c = RegNext(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U))
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
    val check = WireInit(0.B)
    when(part2.io.Ovalid){
        check := 0.B
    }.otherwise{
        check := 1.B
    }
    val e = ((i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U) && ((count-1.U) < io.s))
    dontTouch(e)
    when (~(part2.io.ProcessValid) && check){
    part3.io.merge := RegNext(c)
    part3.io.mat := io.matrix
    part3.io.i_valid := ~part2.io.ProcessValid
    part3.io.PreMat := part2.io.OutMat
    part3.io.mat := io.matrix
    part3.io.IDex := Idex(io.s)
    part3.io.JDex := Jdex(io.s)
    when ((i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U) && ((count-1.U) < io.s)){
        io.out := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    }.otherwise{
    io.out := part3.io.Omat }
    io.ProcessValid := part3.io.valid
    }.otherwise{ 
        part3.io.merge := 0.B
        part3.io.mat :=VecInit(Seq.fill((config.MaxRows))(VecInit(Seq.fill(config.MaxCols)(0.U(32.W)))))
        part3.io.i_valid := 0.B
    part3.io.PreMat := VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W)))))
    part3.io.IDex := 0.U
    part3.io.JDex := 0.U
    when ((i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U) && ((count-1.U) < io.s)){
        io.out := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    }.otherwise{
    io.out := part2.io.OutMat}
    io.ProcessValid := part2.io.Ovalid
    }
   




    when ( i < (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        i := i + 1.U
    }

    val ab = ( i <= (config.MaxRows-1).U && (j < (config.MaxCols-1).U))
    dontTouch(ab)
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
        io.iteration := 0.U
        io.validIteration := 0.B
    }
}

