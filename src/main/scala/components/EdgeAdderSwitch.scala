package magmasi.components

import chisel3._
import chisel3.util._

class EdgeAdderSwitch(DATA_TYPE: Int = 32, NUM_IN: Int = 4, SEL_IN: Int = 2) extends Module {
  val io = IO(new Bundle {
    // val clk = Input(Clock())
    // val rst = Input(Bool())
    val i_valid = Input(Bool())
    val i_data_bus = Input(Vec(NUM_IN, UInt(DATA_TYPE.W)))
    val i_add_en = Input(Bool())
    val i_cmd = Input(UInt(3.W))
    val i_sel = Input(UInt(SEL_IN.W))
    val o_vn = Output(UInt((2 * DATA_TYPE).W))
    val o_vn_valid = Output(UInt(2.W))
    val o_adder = Output(UInt(DATA_TYPE.W))
  })

  val clk = clock
  val rst = reset.asBool

  val reductionMux = Module(new ReductionMux(W = DATA_TYPE, NUM_IN = NUM_IN, SEL_IN = SEL_IN, NUM_OUT = 2))
  reductionMux.io.i_data := io.i_data_bus
  reductionMux.io.i_sel := io.i_sel

  val adder32 = Module(new SimpleAdder)
  adder32.io.clk := io.clk
  adder32.io.rst := io.rst
  adder32.io.A := reductionMux.io.o_data(1)
  adder32.io.B := reductionMux.io.o_data(0)

  val r_valid = RegNext(io.i_valid, init = false.B)
  val r_adder = RegInit(0.U(DATA_TYPE.W))
  val r_vn = RegInit(0.U((2 * DATA_TYPE).W))
  val r_vn_valid = RegInit(0.U(2.W))
  val r_add_en = RegNext(io.i_add_en, init = false.B)

  when (rst) {
    r_adder := 0.U
    r_vn := 0.U
    r_vn_valid := 0.U
  } .elsewhen (r_valid) {
    switch (io.i_cmd) {
      is ("b011".U) {
        r_adder := reductionMux.io.o_data(1)
        r_vn := Cat(io.i_data_bus(0), 0.U(DATA_TYPE.W))
        r_vn_valid := 1.U
      }
      is ("b100".U) {
        r_adder := reductionMux.io.o_data(0)
        r_vn := Cat(0.U(DATA_TYPE.W), io.i_data_bus(NUM_IN - 1))
        r_vn_valid := 2.U
      }
      is ("b101".U) {
        r_vn := Cat(reductionMux.io.o_data)
        r_vn_valid := 3.U
      }
      is (0.U) {
        r_vn_valid := 0.U
      }
    }
  }

  when (rst) {
    io.o_adder := 0.U
    io.o_vn := 0.U
    io.o_vn_valid := 0.U
  } .otherwise {
    when (!r_add_en) {
      io.o_adder := r_adder
    } .otherwise {
      io.o_adder := adder32.io.O
    }
    io.o_vn := r_vn
    io.o_vn_valid := r_vn_valid
  }
}
