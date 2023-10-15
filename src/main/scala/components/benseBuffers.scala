package  magmasi.components

import chisel3._
import chisel3.util._

class benseBuffers(implicit val config: MagmasiConfig) extends Module{
    
    val io = IO(new Bundle{
        val i_data_bus2 = Input(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
        val i_data_bus1  = Input(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
        val i_mux_bus   = Input(Vec(config.NUM_PES, UInt((config.LEVELS-1).W)))
        val out = Output(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
    })

    // benes routing calling here to reach it's destination into the buffer1 and buffer2
    val benes = Module(new Benes()) 
    benes.io.i_data_bus1 <> io.i_data_bus1
    benes.io.i_data_bus2 <> io.i_data_bus2
    benes.io.i_mux_bus <> io.i_mux_bus

    //which buffer have get reaches their destination they will both get multiplication over here
    val buffer = Module(new buffer_multiplication())
    buffer.io.buffer1 <> benes.io.o_dist_bus1
    buffer.io.buffer2 <> benes.io.o_dist_bus2
    io.out := buffer.io.out
}
