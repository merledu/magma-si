/* These Modules are translated into CHISEL from https://github.com/georgia-tech-synergy-lab/SIGMA/blob/master/vmod/bfp32_adder.v */
package magmasi.components

import chisel3._
import chisel3.util._

class BFP32Adder extends Module {
  val io = IO(new Bundle {
    val A = Input(UInt(32.W))
    val B = Input(UInt(32.W))
    // val clk = Input(Clock())
    // val rst = Input(Bool())
    val O = Output(UInt(32.W))
  })

  val aSign = io.A(31)
  val aExponent = io.A(30, 23)
  val aMantissa = Cat(1.U, io.A(22, 0))

  val bSign = io.B(31)
  val bExponent = io.B(30, 23)
  val bMantissa = Cat(1.U, io.B(22, 0))

  val oSign = Wire(Bool())
  val oExponent = Wire(UInt(8.W))
  val oMantissa = Wire(UInt(24.W))

  val adderAIn = io.A
  val adderBIn = io.B

  val gAdder = Module(new GeneralAdder)
  gAdder.io.a := adderAIn
  gAdder.io.b := adderBIn
  val adderOut = gAdder.io.out

  val clk = clock
  val rst = reset.asBool

  withClockAndReset(clk, rst) {
    when(rst) {
      io.O := 0.U
    } .otherwise {
      when((aExponent === 255.U && aMantissa(22, 0) =/= 0.U) || (bExponent === 0.U && bMantissa(22, 0) === 0.U)) {
        oSign := aSign
        oExponent := aExponent
        oMantissa := aMantissa
        io.O := Cat(oSign, oExponent, oMantissa(22, 0))
      } .elsewhen((bExponent === 255.U && bMantissa(22, 0) =/= 0.U) || (aExponent === 0.U && aMantissa(22, 0) === 0.U)) {
        oSign := bSign
        oExponent := bExponent
        oMantissa := bMantissa
        io.O := Cat(oSign, oExponent, oMantissa(22, 0))
      } .elsewhen(aExponent === 255.U || bExponent === 255.U) {
        oSign := aSign ^ bSign
        oExponent := 255.U
        oMantissa := 0.U
        io.O := Cat(oSign, oExponent, oMantissa(22, 0))
      } .otherwise {
        oSign := adderOut(31)
        oExponent := adderOut(30, 23)
        oMantissa := adderOut(22, 0)
        io.O := Cat(oSign, oExponent, oMantissa(22, 0))
      }
    }
  }
}


class GeneralAdder extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val out = Output(UInt(32.W))
  })

  val aSign = Wire(Bool())
  val aExponent = Wire(UInt(8.W))
  val aMantissa = Wire(UInt(24.W))

  val bSign = Wire(Bool())
  val bExponent = Wire(UInt(8.W))
  val bMantissa = Wire(UInt(24.W))

  val oSign = Wire(Bool())
  val oExponent = Wire(UInt(8.W))
  val oMantissa = Wire(UInt(25.W))

  val diff = Wire(UInt(8.W))
  val tmpMantissa = Wire(UInt(24.W))

  val norm1 = Module(new AdditionNormaliser)
  norm1.io.in_e := oExponent
  norm1.io.in_m := oMantissa
  oExponent := norm1.io.out_e
  oMantissa := norm1.io.out_m

  aSign := io.a(31)
  bSign := io.b(31)

  when (io.a(30, 23) === 0.U) {
    aExponent := 1.U
    aMantissa := Cat(0.U, io.a(22, 0))
  } .otherwise {
    aExponent := io.a(30, 23)
    aMantissa := Cat(1.U, io.a(22, 0))
  }

  when (io.b(30, 23) === 0.U) {
    bExponent := 1.U
    bMantissa := Cat(0.U, io.b(22, 0))
  } .otherwise {
    bExponent := io.b(30, 23)
    bMantissa := Cat(1.U, io.b(22, 0))
  }

  when (aExponent === bExponent) {
    oExponent := aExponent
    when (aSign === bSign) {
      oMantissa := aMantissa + bMantissa
      oSign := aSign
    } .otherwise {
      when (aMantissa > bMantissa) {
        oMantissa := aMantissa - bMantissa
        oSign := aSign
      } .otherwise {
        oMantissa := bMantissa - aMantissa
        oSign := bSign
      }
    }
  } .elsewhen (aExponent > bExponent) {
    oExponent := aExponent
    oSign := aSign
    diff := aExponent - bExponent
    tmpMantissa := bMantissa >> diff
    when (aSign === bSign) {
      oMantissa := aMantissa + tmpMantissa
    } .otherwise {
      oMantissa := aMantissa - tmpMantissa
    }
  } .otherwise {
    oExponent := bExponent
    oSign := bSign
    diff := bExponent - aExponent
    tmpMantissa := aMantissa >> diff
    when (aSign === bSign) {
      oMantissa := bMantissa + tmpMantissa
    } .otherwise {
      oMantissa := bMantissa - tmpMantissa
    }
  }

  when (oMantissa(24) === 1.U) {
    oExponent := oExponent + 1.U
    oMantissa := oMantissa >> 1
  } .elsewhen ((oMantissa(23) =/= 1.U) && (oExponent =/= 0.U)) {
    norm1.io.in_e := oExponent
    norm1.io.in_m := oMantissa
    oExponent := norm1.io.out_e
    oMantissa := norm1.io.out_m
  }

  io.out := Cat(oSign, oExponent, oMantissa(22, 0))
}



class AdditionNormaliser extends Module {
  val io = IO(new Bundle {
    val in_e = Input(UInt(8.W))
    val in_m = Input(UInt(25.W))
    val out_e = Output(UInt(8.W))
    val out_m = Output(UInt(25.W))
  })

  for (i <- 2 to 22) {
    when (io.in_m(23, 23 - i) === ("b" + "0" * i + "1").U) {
      io.out_e := io.in_e - (23 - i).U
      io.out_m := io.in_m << (23 - i).U
    }
  }
}
