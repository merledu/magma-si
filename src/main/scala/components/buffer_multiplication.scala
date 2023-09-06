package  magmasi.components

import chisel3._
import  chisel3.util._

class buffer_multiplication(NUM_PES:Int,DATA_TYPE:Int) extends Module{
    val io = IO(new Bundle{
        val buffer1 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
        val buffer2 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
        val out = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    })
    val array1 = WireInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
    val array2 = WireInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
    for (i <- 0 until NUM_PES){
        array1(i) := io.buffer1(i)
        array2(i) := io.buffer2(i)
    }

    def multiply(vec1: Vec[UInt], vec2: Vec[UInt], index: Int = 0): Vec[UInt] = {
        if (index >= NUM_PES) {
            VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W)))
        } else {
            val elementMul = vec1(index) * vec2(index)
            val result = multiply(vec1, vec2, index + 1)
            result(index) := elementMul
            result
    }
  }

  io.out := multiply(array1, array2)
}
