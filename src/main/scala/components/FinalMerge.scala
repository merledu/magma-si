package magmasi.components

import chisel3._
import chisel3.util._

class FinalMerge(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val PreMat = Input(Vec(config.MaxRows,Vec(config.MaxCols, UInt(32.W))))
        val lastMat = Input(Vec(config.MaxRows,Vec(config.MaxCols, UInt(32.W))))
        val valid = Input(Bool())
        val Ovalid = Output(Bool())
        val omat = Output(Vec(config.MaxRows,Vec(config.MaxCols, UInt(32.W)))) 
    })
    val mat = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    io.omat := mat
    io.Ovalid := 0.B

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))


    for (i <- 0 until config.MaxCols){
        mat(io.IDex)(i) := io.PreMat(io.IDex)(i)
    }

when (io.valid){
    when((i === 0.U) && (j === 0.U)){
  i := io.IDex + 1.U
    j := 0.U

  }.elsewhen(io.lastMat(i)(j) === 4.U) {
      i := i
      j := j
      io.Ovalid := 1.B

  }.elsewhen(i < (config.MaxRows - 1).U && j === (config.MaxCols - 1).U) {
      i := i + 1.U
      j := 0.U

  }.elsewhen((i === (config.MaxRows - 1).U) && (j < (config.MaxCols - 1).U)){
  
  i := i
    j := j + 1.U
  
  }.elsewhen((i === (config.MaxRows - 1).U) && (j === (config.MaxCols - 1).U)) {
      io.Ovalid := true.B
      // Add a condition to stop the counter when i = maxrows and j = maxcols
      i := i
      j := j
    }.elsewhen(i < (config.MaxRows - 1).U && j < (config.MaxCols - 1).U) {
      j := j + 1.U
    }
    // Update the register based on the updated counters
    mat(i)(j) := io.lastMat(i)(j)
  }
}


