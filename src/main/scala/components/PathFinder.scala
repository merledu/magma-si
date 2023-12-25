package magmasi.components

import chisel3._
import chisel3.util._

class PathFinder(implicit val config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    val Streaming_matrix = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
    val i_mux_bus = Output(Vec(config.NUM_PES, Vec(config.NUM_PES, UInt(4.W))))
    val Source = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    val destination = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    val PF_Valid = Output(Bool())
    val NoDPE = Input(UInt(32.W))
    val DataValid = Input(Bool())
    val iteration = Output(UInt(32.W))
    val validIteration = Output(Bool())
  })

when (io.DataValid){
  val counterRegs1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
  val counterRegs2 = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))


  val delay = RegInit(0.U(32.W))
  val myMuxes = Module(new Muxes())

  // when(delay < (config.MaxRows).U) {
  //   delay := delay + 1.U
  // }

  val myCounter = Module(new SourceDestination())
  myCounter.io.start := RegNext(io.DataValid)
  myCounter.io.Stationary_matrix := io.Stationary_matrix
  myCounter.io.Streaming_matrix := io.Streaming_matrix

  val Distribution = Module(new Distribution)

  Distribution.io.valid := myCounter.io.valid
  Distribution.io.s := io.NoDPE
  io.iteration := Distribution.io.iteration
  io.validIteration := Distribution.io.validIteration
  Distribution.io.matrix := myCounter.io.counterMatrix1.bits
// }.otherwise{
//     Distribution.io.s := 0.U

//   Distribution.io.matrix := RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
// }


  // when((delay >= (config.MaxRows * config.MaxCols).U) && myCounter.io.counterMatrix1.valid && myCounter.io.counterMatrix2.valid) {
    when (Distribution.io.ProcessValid){
    myCounter.io.counterMatrix1.ready := 1.B
    myCounter.io.counterMatrix2.ready := 1.B
    myMuxes.io.mat1 := io.Stationary_matrix
   // myMuxes.io.start := 1.B//Distribution.io.ProcessValid
    myMuxes.io.mat2 := io.Streaming_matrix
    myMuxes.io.counterMatrix1 <> Distribution.io.out
    myMuxes.io.counterMatrix2 <> myCounter.io.counterMatrix2.bits
    
  }.otherwise{
    myCounter.io.counterMatrix1.ready := 0.B
   // myMuxes.io.start := 0.B
    myCounter.io.counterMatrix2.ready := 0.B
    myMuxes.io.mat1 := counterRegs1
    myMuxes.io.mat2 := counterRegs2
    myMuxes.io.counterMatrix1 := counterRegs1
    myMuxes.io.counterMatrix2 := counterRegs2
  
  }



  io.PF_Valid := myMuxes.io.valid
  io.i_mux_bus := myMuxes.io.i_mux_bus
  io.Source := myMuxes.io.Source
  io.destination := myMuxes.io.destination
}.otherwise{
  io.validIteration := 0.B
  io.iteration := 0.U
  io.PF_Valid := 0.B
  io.i_mux_bus := WireInit(VecInit(Seq.fill(config.NUM_PES)(VecInit(Seq.fill(config.NUM_PES)(0.U(4.W))))))
  io.Source := WireInit(VecInit(Seq.fill(config.MaxRows*config.MaxCols)(0.U(32.W))))
  io.destination := WireInit(VecInit(Seq.fill(config.MaxRows*config.MaxCols)(0.U(32.W))))
}
}