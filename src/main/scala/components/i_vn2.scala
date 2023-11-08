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
when(noneachrow(0) === 2){
     
      // FOR EN ADDER 0

      i_vn(0) := "b10000".U
      i_vn(1) := "b10000".U

      
    }.elsewhen(noneachrow(0) === 4 ){
      // FOR ADDER 0,1,2 EN
        i_vn(2) := "b10000".U
        i_vn(3):= "b10000".U
  
      // FOR EN ADDER 0
      i_vn(0) := "b10000".U
      i_vn(1) := "b10000".U

   

    }.elsewhen(noneachrow(0) === 3){
      //for adder 0 en
    i_vn(0) := "b10000".U
    i_vn(1) := "b10000"
    //for adder 1 en
    i_vn(1) := "b11000".U
    i_vn(2) := "b11000".U
    // for adder 2 cmd right select
    i_vn(3) := "b11100".U
    i_vn(4) := "b11110".U
    }.elsewhen(noneachrow(0) === 5){
      // FOR ADDER 0,1,2,3EN
        i_vn(2) := "b10000".U
        i_vn(3):= "b10000".U
  
      // FOR EN ADDER 0
      i_vn(0) := "b10000".U
      i_vn(1) := "b10000".U

      // FOR CMD 4 RIGHT SELECT
      i_vn(4) := "b10000".U

      i_vn(0) := "b10001".U
      i_vn(1) := "b10011".U

      // SELECTION LOGIC LEFT OR RIGHT IS IMPLEMENTED IN ABOVE
    }.elsewhen(noneachrow(0) === 6){
      // FOR ADDER 0,1,2,3,4 EN
        i_vn(2) := "b10000".U
        i_vn(3):= "b10000".U
  
      // FOR EN ADDER 0
      i_vn(0) := "b10000".U
      i_vn(1) := "b10000".U

      // FOR CMD 4 RIGHT SELECT
      i_vn(4) := "b10000".U
      i_vn(5) := "b10000".U

      // SELECTION LOGIC LEFT OR RIGHT IS IMPLEMENTED IN ABOVE
      i_vn(0) := "b10001".U
      i_vn(1) := "b10011".U

    }.elsewhen(noneachrow(0) === 6){
      // FOR ADDER 0,1,2,3,4,5 EN
        i_vn(2) := "b10000".U
        i_vn(3):= "b10000".U

        i_vn(6) := "b10000".U
  
      // FOR EN ADDER 0
      i_vn(0) := "b10000".U
      i_vn(1) := "b10000".U

      // FOR CMD 6 RIGHT SELECT
      i_vn(4) := "b10000".U
      i_vn(5) := "b10000".U

      i_vn(6) := "b10000".U
      i_vn(7) := "b10000".U
    // SELECTION LOGIC LEFT OR RIGHT IS IMPLEMENTED IN ABOVE

      i_vn(0) := "b10001".U
      i_vn(1) := "b10011".U
    }
