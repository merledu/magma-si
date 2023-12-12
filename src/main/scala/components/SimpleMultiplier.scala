package magmasi.components

import chisel3._
import chisel3.util._ 


class SimpleMultiplier extends Module{
    val io = IO(new Bundle{
        val A = Input(UInt(16.W))
        val B = Input(UInt(16.W))
        val O = Output(UInt(16.W))
    })

    io.O := io.A * io.B
}