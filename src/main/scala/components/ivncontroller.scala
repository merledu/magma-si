package magmasi.components

import random

import chisel3._
import chisel3.util._

class ivncontrol(DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
 

    val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))

    val o_vn = Output(Vec(NUM_PES, UInt(3=LOG2_PES.W)))

  })

val i_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))
val random_values = Seq.fill(NUM_PES)(Random.nextInt(32).U(LOG2_PES.W))
val numRows = Stationary_matrix.length
val numCols = Stationary_matrix(0).length
val no_element = numRows * numCols


for (i <- 0 until NUM_PES) {
  i_vn(i) := random_values(i)
}
when(no_element === 4){
    when(numCols===2){
        i_vn(3).poke("b11101".U)
        i_vn(4).poke("b11101".U)

        i_vn(7).poke("b10111".U)
        i_vn(8).poke("b10111".U)

        i_vn(11).poke("b01111".U)
        i_vn(12).poke("b01111".U)

        i_vn(15).poke("b11110".U)
        i_vn(16).poke("b11110".U)

        i_vn(23).poke("b11111".U)
        i_vn(24).poke("b11111".U)

        i_vn(18).poke("b11111".U)
        i_vn(13).poke("b11000".U)
    }.otherwise{
        i_vn(2).poke("b11101".U)
        i_vn(3).poke("b11101".U)
        i_vn(4).poke("b11101".U)

        i_vn(7).poke("b10111".U)
        i_vn(8).poke("b10111".U)

        i_vn(11).poke("b01111".U)
        i_vn(12).poke("b01111".U)

        i_vn(15).poke("b11110".U)
        i_vn(16).poke("b11110".U)

        i_vn(23).poke("b11111".U)
        i_vn(24).poke("b11111".U)

        i_vn(18).poke("b11111".U)
        i_vn(13).poke("b11000".U)

    }
}
}
