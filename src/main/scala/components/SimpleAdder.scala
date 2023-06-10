package magmasi.components

import chisel3._
import chisel3.util._ 


class SimpleAdder extends Module{
    val io = IO(new Bundle{
        val A = Input(UInt(32.W))
        val B = Input(UInt(32.W))
        val O = Output(UInt(32.W))
    })

    io.O := io.A + io.B
}