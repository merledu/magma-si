package magmasi.components

import chisel3._
import chisel3.util._

class Mybenes(DATA_TYPE:Int,NUM_PES:Int) extends Module {
  val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {

    val i_data_bus  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_mux_bus   = Input(Vec(NUM_PES, UInt((LEVELS-1).W)))
    val o_dist_bus  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))

  })

def routing(index: Int, muxpin: Bool): UInt = {
  val newIndex = Mux(muxpin, Mux(index.U % 2.U === 0.U, index.U + 1.U, index.U - 1.U), index.U)
  newIndex
}

def routing2(index: UInt, muxpin: UInt): UInt = {
  val boolArray: Vec[Bool] = VecInit(muxpin.asBools)
  val newlevel = LEVELS - 2
  var intermediateIndex = WireInit(index)

  for (i <- 0 until newlevel) {
    val calculation = intermediateIndex % 4.U
    val nextIndex = MuxCase(intermediateIndex, Seq(
      (calculation === 0.U, intermediateIndex + 2.U),
      (calculation === 1.U, intermediateIndex + 2.U),
      (calculation === 2.U, intermediateIndex - 2.U),
      (calculation === 3.U, intermediateIndex - 2.U)
    ))
    intermediateIndex = nextIndex
  }

  intermediateIndex
}

val abc = io.i_data_bus.toArray.zipWithIndex
val outarray = Wire(Vec(NUM_PES, UInt(DATA_TYPE.W)))

for (i <- 0 until (NUM_PES * DATA_TYPE) by DATA_TYPE) {
  val a = routing(abc(i / DATA_TYPE)._2, ((io.i_mux_bus(i / DATA_TYPE))(0) === 1.U))
  outarray(i / DATA_TYPE) := a
}

val array1 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
for (i <- 0 until NUM_PES) {
  val a = routing2(outarray(i), (io.i_mux_bus(i))(LEVELS - 2, 1))
  array1(i) := a
}
dontTouch(array1)


val anyBitHigh = io.i_mux_bus(LEVELS - 2)(LEVELS - 2, 1).orR 
dontTouch(anyBitHigh)
for ( k <- 0 until NUM_PES) {
  when ((io.i_mux_bus(0))(0) === 1.U && anyBitHigh === 1.B) {
    io.o_dist_bus(k) := io.i_data_bus(array1(k))

  }.elsewhen ((io.i_mux_bus(0))(0) === 1.U && !(anyBitHigh === 1.B)) {
    io.o_dist_bus(k) := io.i_data_bus(outarray(k)) 
  }.otherwise {
    io.o_dist_bus(k)  := 0.U
  }
}
}