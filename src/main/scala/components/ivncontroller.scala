package magmasi.components

import random

import chisel3._
import chisel3.util._

class ivncontrol(DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
 

    val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))

    val o_vn = Output(Vec(NUM_PES, UInt(LOG2_PES.W)))

  })

val i_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))
val random_values = Seq.fill(NUM_PES)(Random.nextInt(32).U(LOG2_PES.W))
val numRows = Stationary_matrix.length
val numCols = Stationary_matrix(0).length
val no_element = numRows * numCols
var nonZeroCount = 0
var noneachrow: Array[Int] = Array()

for (i <- 0 until inputData.length)
 {
  for (j <- 0 until inputData(i).length) {
    if (inputData(i)(j) != 0) {
      nonZeroCount += 1
    }
  }
}



for (i <- 0 until inputData.length) {
  var noneachrow = 0
  for (j <- 0 until inputData(i).length) {
    if (inputData(i)(j) != 0) {
      noneachrow += 1
    }
  }
  if (noneachrow > 0) {
    noneachrow = noneachrow :+ noneachrow
  }
}

for (i <- 0 until NUM_PES) {
  i_vn(i) := random_values(i)
}
when(nonZeroCount === 4){
    when(noneachrow(0) === 2 ){
        // i_vn(3):= "b11101".U
        // i_vn(4):= "b11101".U

        // i_vn(7) := "b10111".U
        // i_vn(8):= "b10111".U
 
        // i_vn(11) := "b01111".U
        // i_vn(12) := "b01111".U

        i_vn(15) := "b11110".U
        i_vn(16) := "b11110".U

        // i_vn(23) := "b11111".U
        // i_vn(24) := "b11111".U

        // i_vn(18) := "b11111".U
        // i_vn(13) := "b11000".U
    }.elsewhen(noneachrow(0) === 4 ){
        i_vn(2) := "b01111".U
        i_vn(3):= "b01111".U
        // i_vn(4):= "b11101".U

        i_vn(7) := "b10111".U
        i_vn(8):= "b10111".U

        // i_vn(11) := "b01111".U
        // i_vn(12) := "b01111".U

        i_vn(15) := "b11011".U
        i_vn(16) := "b11011".U

        // i_vn(23) := "b11111".U
        // i_vn(24) := "b11111".U

        // i_vn(18) := "b11111".U
        // i_vn(13) := "b11000".U

    }.elsewhen(noneachrow(0) === 3){
      i_vn(15) := "b11011".U
      i_vn(16) := "b11011".U

      i_vn(11) := "b11101".U
      i_vn(12) := "b11101".U

      i_vn(7) := "b10111".U
    }
    when (noneachrow(1) === 2 ){
      i_vn(7) := "b10111".U
      i_vn(8):= "b10111".U

      i_vn(16) := "b11011".


    }.elsewhen(noneachrow(1) === 3){
        i_vn(7) := "b10111".U
        i_vn(8):= "b10111".U

    }
}.elsewhen(nonZeroCount === 2){
  when(noneachrow(0) === 2){
    i_vn(15) := "b11011".U
    i_vn(16) := "b11011".U
  }
    
}.elsewhen(nonZeroCount === 3){
  when(noneachrow(0) === 2){
    i_vn(15) := "b11011".U
    i_vn(16) := "b11011".U
  }.elsewhen(noneachrow(0) === 3){
    i_vn(15) := "b11011".U
    i_vn(16) := "b11011".U

    i_vn(11) := "b11101".U
    i_vn(12) := "b11101".U

    i_vn(7) := "b10111".U
  }
  when(noneachrow(1) === 2){
    i_vn(2) := "b01111".U
    i_vn(3):= "b01111".U

    i_vn(7) := "b10111".U
    i_vn(8):= "b10111".U

    i_vn(16) := "b11011".U

    i_vn(11) := "b11101".U
    i_vn(12) := "b11101".U


  }

}
}
