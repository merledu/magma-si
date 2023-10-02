package  magmasi.components

import chisel3._
import chisel3.util._

class benseBuffers(implicit val config: MagmasiConfig) extends Module{
      val LEVELS   : Int = (2 * (math.log(config.NUM_PES) / math.log(2))).toInt + 1
    val io = IO(new Bundle{
        val i_data_bus2 = Input(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
        val i_data_bus1  = Input(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
        val i_mux_bus   = Input(Vec(config.NUM_PES, UInt((LEVELS-1).W)))
        val out = Output(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
    })

    
    
    val benes = Module(new Benes())
    benes.io.i_data_bus1 <> io.i_data_bus1
    benes.io.i_data_bus2 <> io.i_data_bus2
    benes.io.i_mux_bus <> io.i_mux_bus
    val buffer = Module(new buffer_multiplication(4,8))
    buffer.io.buffer1 <> benes.io.o_dist_bus1
    buffer.io.buffer2 <> benes.io.o_dist_bus2
    io.out := buffer.io.out
}
