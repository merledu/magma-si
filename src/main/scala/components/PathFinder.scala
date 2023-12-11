package magmasi.components

import chisel3._
import chisel3.util._

class PathFinder(implicit val config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    val Streaming_matrix = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
    val i_mux_bus = Output(Vec(config.MaxRows * config.MaxCols, UInt((config.LEVELS - 1).W)))
    val Source = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    val destination = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    val PF_Valid = Output(Bool())
    val Ivalid = Input(Bool())
  })


  val counterRegs1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
  val counterRegs2 = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))

when (io.Ivalid){
  val delay = RegInit(0.U(32.W))
  val myMuxes = Module(new Muxes())

  when(delay < (config.MaxRows*config.MaxCols + config.MaxRows*config.MaxCols).U) {
    delay := delay + 1.U
  }

  val myCounter = Module(new SourceDestination())
  myCounter.io.Ivalid := io.Ivalid
  myCounter.io.Stationary_matrix := io.Stationary_matrix
  myCounter.io.Streaming_matrix := io.Streaming_matrix
  dontTouch(myCounter.io.valid)

  when((delay >= (config.MaxRows * config.MaxCols).U) && myCounter.io.counterMatrix1.valid && myCounter.io.counterMatrix2.valid) {
    
    myCounter.io.counterMatrix1.ready := 1.B
    myCounter.io.counterMatrix2.ready := 1.B
    myMuxes.io.valid := (myCounter.io.valid)
    myMuxes.io.mat1 := io.Stationary_matrix
    myMuxes.io.mat2 := io.Streaming_matrix
    myMuxes.io.counterMatrix1 <> myCounter.io.counterMatrix1.bits
    myMuxes.io.counterMatrix2 <> myCounter.io.counterMatrix2.bits
    io.PF_Valid := myMuxes.io.End
    
  }.otherwise{
    myCounter.io.counterMatrix1.ready := 0.B
    myCounter.io.counterMatrix2.ready := 0.B
    myMuxes.io.mat1 := counterRegs1
    myMuxes.io.mat2 := counterRegs2
    myMuxes.io.counterMatrix1 := counterRegs1
    myMuxes.io.counterMatrix2 := counterRegs2
    myMuxes.io.valid := 0.B
    io.PF_Valid := 0.B
  }

  dontTouch(myMuxes.io.End)
  io.i_mux_bus := myMuxes.io.i_mux_bus
  io.Source := myMuxes.io.Source
  io.destination := myMuxes.io.destination
}.otherwise{
  io.i_mux_bus := VecInit(0.U,0.U,0.U,0.U)
  io.Source := VecInit(0.U,0.U,0.U,0.U)
  io.destination := VecInit(0.U,0.U,0.U,0.U)
  io.PF_Valid := 0.B
}
}