/* These Modules are translated into CHISEL from https://github.com/georgia-tech-synergy-lab/SIGMA/blob/master/vmod/benes.v */
package magmasi.components

import chisel3._

// input_switch module
class InputSwitch(val width: Int) extends Module {
  val io = IO(new Bundle {
    val y = Output(UInt(width.W))
    val z = Output(UInt(width.W))
    val in = Input(UInt(width.W))
  })
  io.y := io.in
  io.z := io.in
}

// output_switch module
class OutputSwitch(val width: Int) extends Module {
  val io = IO(new Bundle {
    val y = Output(UInt(width.W))
    val in0 = Input(UInt(width.W))
    val in1 = Input(UInt(width.W))
    val sel = Input(Bool())
  })

  val mux0 = Module(new BenesMux(width))
  mux0.io.a := io.in0
  mux0.io.b := io.in1
  mux0.io.sel := io.sel
  io.y := mux0.io.o
}

// switch module
class Switch(val width: Int) extends Module {
  val io = IO(new Bundle {
    val y = Output(UInt(width.W))
    val z = Output(UInt(width.W))
    val in0 = Input(UInt(width.W))
    val in1 = Input(UInt(width.W))
    val sel0 = Input(Bool())
    val sel1 = Input(Bool())
  })

  val mux0 = Module(new BenesMux(width))
  val mux1 = Module(new BenesMux(width))
  mux0.io.a := io.in0
  mux0.io.b := io.in1
  mux0.io.sel := io.sel0
  mux1.io.a := io.in0
  mux1.io.b := io.in1
  mux1.io.sel := io.sel1
  io.y := mux0.io.o
  io.z := mux1.io.o
}

// benes_mux module is assumed to be available in the same scope
class BenesMux(W: Int) extends Module {
  val io = IO(new Bundle {
    val o = Output(UInt(W.W))
    val a = Input(UInt(W.W))
    val b = Input(UInt(W.W))
    val sel = Input(Bool())
  })

  io.o := Mux(io.sel, io.b, io.a)
}