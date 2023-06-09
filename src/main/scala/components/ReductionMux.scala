package magmasi.components

import chisel3._
import chisel3.util._

class ReductionMux(val W: Int = 32, val NUM_IN: Int = 4, val SEL_IN: Int = 2) extends Module {
  require(NUM_IN >= 2 && NUM_IN % 2 == 0, "NUM_IN has to be >= 2 and divisible by 2")
  require(SEL_IN % 2 == 0, "SEL_IN has to be divisible by 2")
  
  val SEL_IN_LEFT_END = SEL_IN / 2 - 1
  val SEL_IN_RIGHT_START = SEL_IN / 2
  
  val io = IO(new Bundle {
    val i_data = Input(Vec(NUM_IN, UInt(W.W)))
    val i_sel = Input(UInt(SEL_IN.W))
    val o_data = Output(Vec(2, UInt(W.W)))
  })

  val w_data_left = io.i_data.take(NUM_IN / 2)
  val w_data_right = io.i_data.drop(NUM_IN / 2)

  val w_sel_in_left = io.i_sel(SEL_IN_LEFT_END, 0)
  val w_sel_in_right = io.i_sel(SEL_IN - 1, SEL_IN_RIGHT_START)

  io.o_data(0) := Mux(w_sel_in_left < (NUM_IN / 2).U, w_data_left(w_sel_in_left), 0.U)
  io.o_data(1) := Mux(w_sel_in_right < (NUM_IN / 2).U, w_data_right(w_sel_in_right), 0.U)
}
