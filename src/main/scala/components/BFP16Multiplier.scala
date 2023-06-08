/* These Modules are translated into CHISEL from https://github.com/georgia-tech-synergy-lab/SIGMA/blob/master/vmod/bfp16_mult.v */
package magmasi.components

import chisel3._
import chisel3.util._

class BFP16Multiplier extends Module {
  val io = IO(new Bundle {
    val A = Input(UInt(16.W))
    val B = Input(UInt(16.W))
    val O = Output(UInt(16.W))
    // val clk = Input(Clock())
  })

  val a_sign = io.A(15)
  val a_exponent = io.A(14,7)
  val a_mantissa = Cat(1.U(1.W), io.A(6,0))
  val b_sign = io.B(15)
  val b_exponent = io.B(14,7)
  val b_mantissa = Cat(1.U(1.W), io.B(6,0))

  val multiplier_a_in = RegNext(io.A)
  val multiplier_b_in = RegNext(io.B)

  val multiplier = Module(new GMultiplier)
  multiplier.io.a := multiplier_a_in
  multiplier.io.b := multiplier_b_in
  val multiplier_out = multiplier.io.out

  val o_sign = Reg(Bool())
  val o_exponent = Reg(UInt(8.W))
  val o_mantissa = Reg(UInt(9.W))

  io.O := Cat(o_sign, o_exponent, o_mantissa(6,0))

  val clk = clock
  withClock(clk) {
    when(a_exponent === 255.U && a_mantissa =/= 0.U) {
      o_sign := a_sign
      o_exponent := 255.U
      o_mantissa := a_mantissa
    }.elsewhen(b_exponent === 255.U && b_mantissa =/= 0.U) {
      o_sign := b_sign
      o_exponent := 255.U
      o_mantissa := b_mantissa
    }.elsewhen((a_exponent === 0.U && a_mantissa === 0.U) || (b_exponent === 0.U && b_mantissa === 0.U)) {
      o_sign := a_sign ^ b_sign
      o_exponent := 0.U
      o_mantissa := 0.U
    }.elsewhen(a_exponent === 255.U || b_exponent === 255.U) {
      o_sign := a_sign
      o_exponent := 255.U
      o_mantissa := 0.U
    }.elsewhen(io.A === 0.U && io.B === 0.U) {
      o_sign := 0.U
      o_exponent := 0.U
      o_mantissa := 0.U
    }.otherwise {
      o_sign := multiplier_out(15)
      o_exponent := multiplier_out(14,7)
      o_mantissa := multiplier_out(6,0)
    }
  }
}


class GMultiplier extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(16.W))
    val b = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  val a_sign = io.a(15)
  val b_sign = io.b(15)
  val o_sign = a_sign ^ b_sign


//   val (a_exponent, a_mantissa) = WireDefault(if(io.a(14,7) === 0.U) (1.U(8.W), Cat(0.U(1.W), io.a(6,0))) else (io.a(14,7), Cat(1.U(1.W), io.a(6,0))))
//   val (b_exponent, b_mantissa) = WireDefault(if(io.b(14,7) === 0.U) (1.U(8.W), Cat(0.U(1.W), io.b(6,0))) else (io.b(14,7), Cat(1.U(1.W), io.b(6,0))))

    val a_exponent = Wire(UInt(8.W))
    val a_mantissa = Wire(UInt(8.W))
    when(io.a(14,7) === 0.U) {
        a_exponent := 1.U
        a_mantissa := Cat(0.U(1.W), io.a(6,0))
    }.otherwise {
        a_exponent := io.a(14,7)
        a_mantissa := Cat(1.U(1.W), io.a(6,0))
    }

    val b_exponent = Wire(UInt(8.W))
    val b_mantissa = Wire(UInt(8.W))
    when(io.b(14,7) === 0.U) {
        b_exponent := 1.U
        b_mantissa := Cat(0.U(1.W), io.b(6,0))
    }.otherwise {
        b_exponent := io.b(14,7)
        b_mantissa := Cat(1.U(1.W), io.b(6,0))
    }


  val o_exponent = Wire(UInt(8.W))
  val product = Wire(UInt(16.W))
  o_exponent := a_exponent + b_exponent - 127.U
  product := a_mantissa * b_mantissa

  val i_e = Wire(UInt(8.W))
  val i_m = Wire(UInt(16.W))
  val o_m = Wire(UInt(16.W))

  val norm1 = Module(new MultiplicationNormaliser)
  norm1.io.in_e := i_e
  norm1.io.in_m := i_m
  o_m := norm1.io.out_m

  when(product(15) === 1.U) {
    o_exponent := o_exponent + 1.U
    product := product >> 1
  }.elsewhen(product(14) =/= 1.U && o_exponent =/= 0.U) {
    i_e := o_exponent
    i_m := product
    o_exponent := norm1.io.out_e
    product := o_m
  }

  val o_mantissa = product(14,7)
  io.out := Cat(o_sign, o_exponent, o_mantissa)
}


class MultiplicationNormaliser extends Module {
  val io = IO(new Bundle {
    val in_e = Input(UInt(8.W))
    val in_m = Input(UInt(16.W))
    val out_e = Output(UInt(8.W))
    val out_m = Output(UInt(16.W))
  })

  when(io.in_m(14,9) === "b000001".U) {
    io.out_e := io.in_e - 5.U
    io.out_m := io.in_m << 5
  }.elsewhen(io.in_m(14,10) === "b00001".U) {
    io.out_e := io.in_e - 4.U
    io.out_m := io.in_m << 4
  }.elsewhen(io.in_m(14,11) === "b0001".U) {
    io.out_e := io.in_e - 3.U
    io.out_m := io.in_m << 3
  }.elsewhen(io.in_m(14,12) === "b001".U) {
    io.out_e := io.in_e - 2.U
    io.out_m := io.in_m << 2
  }.elsewhen(io.in_m(14,13) === "b01".U) {
    io.out_e := io.in_e - 1.U
    io.out_m := io.in_m << 1
  }.otherwise {
    io.out_e := io.in_e
    io.out_m := io.in_m
  }
}
