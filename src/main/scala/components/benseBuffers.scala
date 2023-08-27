package  magmasi.components

import chisel3._
import chisel3.util._

class benseBuffers(DATA_TYPE:Int,NUM_PES:Int) extends Module{
      val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1

    val io = IO(new Bundle{
        val i_data_bus2 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
        val i_data_bus1  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
        val i_mux_bus   = Input(Vec(NUM_PES, UInt((LEVELS-1).W)))
        val out = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    })
    val benes = Module(new MyBenes(8,4))
    benes.io.i_data_bus1 <> io.i_data_bus1
    benes.io.i_data_bus2 <> io.i_data_bus2
    benes.io.i_mux_bus <> io.i_mux_bus
    val buffer = Module(new buffer_multiplication(4,8))
    buffer.io.buffer1 <> benes.io.o_dist_bus1
    buffer.io.buffer2 <> benes.io.o_dist_bus2
    io.out := buffer.io.out
}
