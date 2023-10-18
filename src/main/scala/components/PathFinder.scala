package magmasi.components

import chisel3._
import chisel3.util._

class PathFinder(implicit val config: MagmasiConfig) extends Module{

    val io = IO(new Bundle{
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val MuxBool = Output(Vec(2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES, Bool()))        
        val Source  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val destination  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    })

    val myCounter = Module(new SourceDestination())
    myCounter.io.Stationary_matrix := io.Stationary_matrix
    myCounter.io.Streaming_matrix := io.Streaming_matrix

    val myMuxes = Module(new Muxes())
    myMuxes.io.mat1 := io.Stationary_matrix
    myMuxes.io.mat2 := io.Streaming_matrix
    myMuxes.io.counterMatrix1 := myCounter.io.counterMatrix1
    myMuxes.io.counterMatrix2 := myCounter.io.counterMatrix2

    val myWrapper = Module(new BenesWrapper())
    myWrapper.io.i_mux_bus := myMuxes.io.i_mux_bus

    io.MuxBool := myWrapper.io.o_mux_bus
    io.Source := myMuxes.io.Source
    io.destination := myMuxes.io.destination

}
