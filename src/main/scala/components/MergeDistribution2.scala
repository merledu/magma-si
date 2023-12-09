package magmasi.components

import chisel3._
import chisel3.util._

class MergeDistribution2(implicit val config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val IDex   = Input(UInt(32.W))
    val JDex   = Input(UInt(32.W))
    val mat    = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(32.W))))
    val i_valid = Input(Bool())
    val valid  = Output(Bool())
    val Omat   = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(32.W))))
  })

  val b = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
  io.Omat := b
  io.valid:=0.B
  

  val i = RegInit(0.U(32.W))
  val j = RegInit(0.U(32.W))



  when(io.i_valid) {

    // Update the counter based on your logic
when(io.i_valid && (i === 0.U) && (j === 0.U)){
  i := io.IDex + 1.U
    j := 0.U
    io.valid := false.B

  }.elsewhen(io.mat(i)(j) === 4.U) {
      i := i
      j := j
      io.valid := true.B

  }.elsewhen(i < (config.MaxRows - 1).U && j === (config.MaxCols - 1).U) {
      i := i + 1.U
      j := 0.U
      io.valid := false.B

  }.elsewhen((i === (config.MaxRows - 1).U) && (j < (config.MaxCols - 1).U)){
  
  i := i
    j := j + 1.U
    io.valid := false.B
  
  }.elsewhen((i === (config.MaxRows - 1).U) && (j === (config.MaxCols - 1).U)) {
      io.valid := true.B
      // Add a condition to stop the counter when i = maxrows and j = maxcols
      i := i
      j := j
    }.elsewhen(i < (config.MaxRows - 1).U && j < (config.MaxCols - 1).U) {
      j := j + 1.U
      io.valid := false.B
    }
    // Update the register based on the updated counters
    b(i)(j) := io.mat(i)(j)
  }.otherwise{
    io.valid := 0.B
  }
}
