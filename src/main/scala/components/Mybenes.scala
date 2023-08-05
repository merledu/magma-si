package magmasi.components

import chisel3._
import chisel3.util._

class Mybenes(DATA_TYPE:Int,NUM_PES:Int) extends Module {
  val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {
    val i_data_bus2 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_data_bus1  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_mux_bus   = Input(Vec(NUM_PES, UInt((LEVELS-1).W)))
    val o_dist_bus1  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val o_dist_bus2  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))

  })
  io.o_dist_bus2 <> io.i_data_bus2

def routing(index: UInt, muxpin: Bool): UInt = {
    var outarray2 = RegInit(index)
  val newIndex = Mux(muxpin, Mux(index % 2.U === 0.U, index + 1.U, index - 1.U), index)
  dontTouch(outarray2)
  newIndex
}

def routing2(index: UInt, muxpin: UInt): UInt = {
  val boolArray: Vec[Bool] = VecInit(muxpin.asBools)
  val newlevel = LEVELS - 3
  var intermediateIndex = WireInit(index)

  for (i <- 0 until newlevel) {
    val calculation = intermediateIndex % 4.U
      val nextIndex = MuxCase(intermediateIndex, Seq(
        (calculation === 0.U && (boolArray(i) === 0.B), intermediateIndex),
        (calculation === 1.U && (boolArray(i) === 0.B), intermediateIndex),
        (calculation === 2.U && (boolArray(i) === 0.B), intermediateIndex),
        (calculation === 3.U && (boolArray(i) === 0.B), intermediateIndex),
        ((calculation === 0.U) && (boolArray(i) === 1.B), intermediateIndex + 2.U),
        ((calculation === 1.U) && (boolArray(i) === 1.B), intermediateIndex + 2.U),
        ((calculation === 2.U) && (boolArray(i) === 1.B), intermediateIndex - 2.U),
        ((calculation === 3.U) && (boolArray(i) === 1.B), intermediateIndex - 2.U)

      ))
      intermediateIndex = nextIndex
  }
  intermediateIndex
}

val abc = io.i_data_bus1.toArray.zipWithIndex
val outarray = Wire(Vec(NUM_PES, UInt(DATA_TYPE.W)))
def abs(value: Int): Int = {
  if (value >= 0) value else value*(-1)
}
print(io.i_data_bus1(2) == io.i_data_bus1(1))
val condition = ((abc(2)._1) === (abc(0)._1))//io.i_data_bus1(2) === io.i_data_bus1(1)
dontTouch(condition)
for (i <- 0 until (NUM_PES * DATA_TYPE) by DATA_TYPE) {
    when((abc(i / DATA_TYPE)._1) === (abc((i-1) / DATA_TYPE)._1)) {
        when ((abc(i / DATA_TYPE)._2).U === 0.U){
            val a = routing(0.U, ((io.i_mux_bus(i / DATA_TYPE))(0) === 1.U))
            outarray(i / DATA_TYPE) := a
        }.otherwise {
            val a = routing((abc(2)._2).U - 1.U, ((io.i_mux_bus(i / DATA_TYPE))(0) === 1.U))
            outarray(i / DATA_TYPE) := a
        }
    }.otherwise{
        val a = routing((abc(i / DATA_TYPE)._2).U, ((io.i_mux_bus(i / DATA_TYPE))(0) === 1.U))
        outarray(i / DATA_TYPE) := a
    }
    
}

val array1 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
for (i <- 0 until NUM_PES) {
  val a = routing2(outarray(i), (io.i_mux_bus(i))(LEVELS - 2, 1))
  array1(i) := a
}

val array2 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
for (i <- 0 until NUM_PES) {
  val a = routing(array1(i), (io.i_mux_bus(i))(LEVELS - 2))
  array2(i) := a
}
dontTouch(array2)


for ( k <- 0 until NUM_PES) {
io.o_dist_bus1(k) := io.i_data_bus1(array2(k)) 
}


}
