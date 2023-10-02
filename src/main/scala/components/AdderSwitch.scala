package magmasi.components

import chisel3._
import chisel3.util._

class AdderSwitch(implicit val config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val i_valid = Input(Bool())
    val i_data_bus = Input(Vec(config.NUM_IN, UInt(config.DATA_TYPE.W)))
    val i_add_en = Input(UInt(3.W))
    val i_cmd = Input(UInt(3.W))
    val i_sel = Input(UInt(config.SEL_IN.W))
    val o_vn_valid = Output(UInt(config.NUM_OUT.W))
    val o_vn = Output(UInt((2 * config.DATA_TYPE).W))
    val o_adder = Output(Vec(config.NUM_OUT, UInt(config.DATA_TYPE.W)))
  })

  val clk = clock
  val rst = reset.asBool

  val reductionMux = Module(new ReductionMux(W = config.DATA_TYPE, NUM_IN = config.NUM_IN, SEL_IN = config.SEL_IN))
  reductionMux.io.i_data := io.i_data_bus
  reductionMux.io.i_sel := io.i_sel

  val adder32 = Module(new SimpleAdder)
  adder32.io.A := reductionMux.io.o_data(1)
  adder32.io.B := reductionMux.io.o_data(0)

  val r_adder = RegInit(0.U((2 * config.DATA_TYPE).W))
  val r_vn = RegInit(0.U((2 * config.DATA_TYPE).W))
  val r_vn_valid = RegInit(0.U(2.W))
  val r_add_en = RegNext(io.i_add_en, init = 0.U)

  when (rst) {
    r_adder := 0.U
    r_vn := 0.U
    r_vn_valid := 0.U
  } .elsewhen (io.i_valid) {
    switch (io.i_cmd) {
      is ("b001".U) {
        r_adder := Cat(reductionMux.io.o_data)
        r_vn_valid := 0.U
      }
      is ("b011".U) {
        r_adder := Cat(0.U((config.DATA_TYPE - 1).W), reductionMux.io.o_data(1))
        r_vn := io.i_data_bus(0)
        r_vn_valid := 1.U
      }
      is ("b100".U) {
        r_adder := Cat(reductionMux.io.o_data(0), 0.U((config.DATA_TYPE - 1).W))
        r_vn := io.i_data_bus(1)
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
    io.o_adder := VecInit(Seq.fill(2)(0.U(config.DATA_TYPE.W)))
    io.o_vn := 0.U
    io.o_vn_valid := 0.U
  } .otherwise {
    when (!r_add_en) {
      io.o_adder := VecInit(Seq(r_adder(config.DATA_TYPE - 1, 0), r_adder(2 * config.DATA_TYPE - 1, config.DATA_TYPE)))
    } .otherwise {
      io.o_adder := VecInit(Seq.fill(2)(adder32.io.O))
    }
    io.o_vn := r_vn
    io.o_vn_valid := r_vn_valid
  }
}
