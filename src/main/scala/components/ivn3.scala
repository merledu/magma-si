package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class ivncontrol(DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(4, Vec(5, UInt(DATA_TYPE.W))))
    val o_vn = Output(Vec(NUM_PES, UInt(LOG2_PES.W)))         //row: Int = 3,col: Int = 3
    val noneachrows = Input (Vec(5, UInt(DATA_TYPE.W)))
  })
  val counter =RegInit(0.U(3.W))
  printf("%d\n",io.noneachrows(counter))

val i_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))

val random_values = Seq.fill(NUM_PES)(Random.nextInt(32).U(LOG2_PES.W))
val numRows = io.Stationary_matrix.length
val numCols = io.Stationary_matrix(0).length
val no_element = numRows * numCols
var nonZeroCount = 0
var noneachrow: Array[Int] = Array()


io.o_vn := i_vn


// if (!noneachrow .isEmpty)
//  println(noneachrow)
// for (i <- 0 until io.Stationary_matrix.length){
//   for (j <- 0 until io.Stationary_matrix(i).length) {
//     if (io.Stationary_matrix(i)(j) != 0) {
//       nonZeroCount += 1
//     }
//   }
// }



//f (!noneachrow .isEmpty)
// println(io.Stationary_matrix.length)

println("numrows"+numRows)
println("numCols"+numCols)








for (i <- 0 until io.Stationary_matrix.length) {
    var noneachrowCount = 0
    for (j <- 0 until io.Stationary_matrix(i).length) {
      //printf("stationary matrix:%d\n",io.Stationary_matrix(i)(j))
      when (io.Stationary_matrix(i)(j) =/= 0.U) {
        // println(io.Stationary_matrix(i)(j))
        printf("%d\n",io.Stationary_matrix(i)(j))
        noneachrowCount += 1
        // println(noneachrowCount)
        // println()
      }
      
    }
 printf("\n")
   //
    //rintf("\n\n")
    if (noneachrowCount > 0) {
      println(noneachrowCount)
      noneachrow :+= noneachrowCount // Use :+= to append to the array
      //println(noneachrow(0))
    }

  }
  //println(noneachrow(0))
  
  // for (i <- 0 until noneachrow.length ){
  //    println(noneachrow(i))

  // }


// Print the first element of noneachrow
//println(s"noneachrow(0): ${noneachrow(0)}")


for (i <- 0 until NUM_PES) {
    i_vn(i) := Random.nextInt(32).U(LOG2_PES.W)
  }


var nonlength = noneachrow.length



when(nonlength.asUInt > 0.U) {
   val arrayLength = noneachrow.length
  if (arrayLength >= 1) {
  for (j <- 0 until noneachrow(0)) {
    i_vn(j) := "b00000".U
  }
}
}
when(nonlength.asUInt > 1.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 2) {
  for (j <- 0 until noneachrow(1)) {
      i_vn(j + noneachrow(0)) := "b00001".U
    }
}
}
when(nonlength.asUInt > 2.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 3) {
for (j <- 0 until noneachrow(2)) {
    i_vn(j +  noneachrow(0) + noneachrow(1)) := "b00010".U
  }
}
}
when(nonlength.asUInt > 3.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 4) {
for (j <- 0 until noneachrow(3)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2)) := "b00011".U
  }
}
}
when(nonlength.asUInt > 4.U) {
 val arrayLength = noneachrow.length
  if (arrayLength >= 5) {
for (j <- 0 until noneachrow(4)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3)) := "b00100".U
  }
}
}

when(nonlength.asUInt > 5.U){
  val arrayLength = noneachrow.length
  if (arrayLength >= 6) {
      for (j <- 0 until noneachrow(5)) {
          i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3) + noneachrow(4)) := "b00101".U
        }
}
}



when(nonlength.asUInt > 6.U){
    val arrayLength = noneachrow.length
  if (arrayLength >= 7) {
    for (j <- 0 until noneachrow(6)) {
        i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3) + noneachrow(4) + noneachrow(5)) := "b00110".U
      }
}
}
when(nonlength.asUInt > 7.U) {
  val arrayLength = noneachrow.length
  if (arrayLength >= 8) {
    for (j <- 0 until noneachrow(7)) {
      i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6)) := "b00111".U
    }

  }
}

when(nonlength.asUInt > 8.U){
    val arrayLength = noneachrow.length
  if (arrayLength >= 9) {
for (j <- 0 until noneachrow(8)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7)) := "b01000".U
  }
}
}

when(nonlength.asUInt > 9.U){
  val arrayLength = noneachrow.length
  if (arrayLength >= 10) {
  for (j <- 0 until noneachrow(9)) {
      i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8)) := "b01001".U
  }
}
}
when(nonlength.asUInt > 10.U){
  val arrayLength = noneachrow.length
  if (arrayLength >= 11) {
    for (j <- 0 until noneachrow(10)) {
      i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)) := "b01010".U
  }
}
}
when(nonlength.asUInt > 11.U){
  val arrayLength = noneachrow.length
  if (arrayLength >= 12) {
for (j <- 0 until noneachrow(11)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)) := "b01011".U
  }
}
}
when(nonlength.asUInt > 12.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 13) {
for (j <- 0 until noneachrow(12)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)) := "b01100".U
  }
}
}
when(nonlength.asUInt > 13.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 14) {
for (j <- 0 until noneachrow(13)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12)) := "b01101".U
  }
}
}
when(nonlength.asUInt > 14.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 15) {
for (j <- 0 until noneachrow(14)) {
    i_vn(j +noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)) := "b01110".U
  }
}
}
when(nonlength.asUInt > 15.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 16) {
for (j <- 0 until noneachrow(15)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)) := "b01111".U
  }
}
}
when(nonlength.asUInt > 16.U){
   val arrayLength = noneachrow.length
  if (arrayLength >= 17) {
for (j <- 0 until noneachrow(16)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)) := "b10000".U
  }
}
}
when(nonlength.asUInt > 17.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 18) {
for (j <- 0 until noneachrow(17)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)) := "b10001".U
  }
}
}
when(nonlength.asUInt > 18.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 19) {
for (j <- 0 until noneachrow(18)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17)) := "b10010".U
  }
}
}
when(nonlength.asUInt > 19.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 20) {
for (j <- 0 until noneachrow(19)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)) := "b10011".U
  }
}
}
when(nonlength.asUInt > 20.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 21) {
for (j <- 0 until noneachrow(20)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)) := "b10100".U
  }
}
}
when(nonlength.asUInt > 21.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 22) {
for (j <- 0 until noneachrow(21)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19) +noneachrow(20)) := "b10101".U

  }
}
}
when(nonlength.asUInt > 22.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 23) {
for (j <- 0 until noneachrow(22)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)) := "b10110".U
 
  }
  
}
}
when(nonlength.asUInt > 23.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 24) {
for (j <- 0 until noneachrow(23)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)) := "b10111".U
   
  }
}
}
when(nonlength.asUInt > 24.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 25) {
for (j <- 0 until noneachrow(24)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)) := "b11000".U
   
  }
}
}
when(nonlength.asUInt > 25.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 26) {
for (j <- 0 until noneachrow(25)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)) := "b11001".U
   
  }
}
}
when(nonlength.asUInt > 26.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 27) {
for (j <- 0 until noneachrow(26)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)) := "b11010".U
    
  }
}
}
when(nonlength.asUInt > 27.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 28) {
for (j <- 0 until noneachrow(27)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)) := "b11011".U

  }
}
}
when(nonlength.asUInt > 28.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 29) {
for (j <- 0 until noneachrow(28)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)) := "b11100".U
    
  }
}
}
when(nonlength.asUInt > 29.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 30) {
for (j <- 0 until noneachrow(29)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)+noneachrow(28)) := "b11101".U
  }
}
}
when(nonlength.asUInt > 30.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 31) {
for (j <- 0 until noneachrow(30)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)+noneachrow(28)+noneachrow(29)) := "b11110".U
  }
}
}
when(nonlength.asUInt > 31.U){
 val arrayLength = noneachrow.length
  if (arrayLength >= 32) {
for (j <- 0 until noneachrow(31)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)+noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)+noneachrow(28)+noneachrow(29)+noneachrow(30)) := "b11111".U
  }
}
}

}
