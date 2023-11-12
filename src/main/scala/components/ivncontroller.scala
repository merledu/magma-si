package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class ivncontrol(DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5,row: Int = 5,col: Int = 5) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(row, Vec(col, UInt(DATA_TYPE.W))))
    val o_vn = Output(Vec(NUM_PES, UInt(LOG2_PES.W)))

  })


val i_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))

val random_values = Seq.fill(NUM_PES)(Random.nextInt(32).U(LOG2_PES.W))
val numRows = io.Stationary_matrix.length
val numCols = io.Stationary_matrix(0).length
val no_element = numRows * numCols
var nonZeroCount = 0
var noneachrow: Array[Int] = Array()


io.o_vn := i_vn




for (i <- 0 until io.Stationary_matrix.length){
  for (j <- 0 until io.Stationary_matrix(i).length) {
    if (io.Stationary_matrix(i)(j) != 0) {
      nonZeroCount += 1
    }
  }
}




// for (i <- 0 until io.Stationary_matrix.length) {
//     var noneachrowCount = 0
//     for (j <- 0 until io.Stationary_matrix(i).length) {
//       when (io.Stationary_matrix(i)(j) =/=0.U) {
//         noneachrow := noneachrow + 1.U
//       }
//     }
//   }
//     if (noneachrowCount > 0) {
//       noneachrow :+= noneachrowCount // Use :+= to append to the array
//     }
//   }

//  for (i <- 0 until 4) {
//     val noneachrowCount = Wire(UInt(8.W))
//     noneachrowCount := 0.U

//     for (j <- 0 until 4) {
//       when(io.Stationary_matrix(i)(j) =/= 0.U) {
//         noneachrowCount := noneachrowCount + 1.U
//       }
//     }

//     noneachrow := noneachrowCount
//   }

 // println(s"noneachrow(0): ${noneachrow(0)}")
for (i <- 0 until io.Stationary_matrix.length) {
    var noneachrowCount = 0
    for (j <- 0 until io.Stationary_matrix(i).length) {
      if (io.Stationary_matrix(i)(j) != 0.U) {
        noneachrowCount += 1
      }
    }
    if (noneachrowCount > 0) {
      noneachrow :+= noneachrowCount // Use :+= to append to the array
    }
  }

// Print the first element of noneachrow
println(s"noneachrow(0): ${noneachrow(0)}")


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
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3)) := "b00011".U
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



//python
// inputData = [
//     [0, 0, 0, 0],
//     [0, 0, 0, 0],
//     [0, 0, 0, 0],
//     [0, 1, 0, 1]
// ]

// # Initialize a list to store the number of non-zero elements in each row
// nonZeroCountsInEachRow = []

// for row in inputData:
//     nonZeroCountInRow = 0
//     for element in row:
//         if element != 0:
//             nonZeroCountInRow += 1
//     if nonZeroCountInRow > 0:
//         nonZeroCountsInEachRow.append(nonZeroCountInRow)

// print(nonZeroCountsInEachRow)


//  FOR EANDOM I VN IN PYTHON
// import random

// # Generate 32 random 5-bit values
// random_values = [random.randint(0, 31) for _ in range(32)]

// # Define a list of variable names
// variable_names = [f"i_vn({i})" for i in range(32)]

// # Create a dictionary to store the variable-value pairs
// variables = {}

// # Assign the values to the variables and store them in the dictionary
// for i, value in enumerate(random_values):
//     binary_value = format(value, '05b')  # Convert to 5-bit binary format
//     variable_name = variable_names[i]
//     variables[variable_name] = binary_value

// # Now you can access the values using the variable names
// for variable_name, value in variables.items():
//     print(f'{variable_name} = "b{value}".U')



// inputData = [
//     [1, 7, 2, 0],
//     [0, 0, 0, 0],
//     [0, 8, 9, 0]
// ]

// noneachrow = []

// for i in range(len(inputData)):
//     count_non_zero = 0
//     for j in range(len(inputData[i])):
//         if inputData[i][j] != 0:
//             count_non_zero += 1
//     if count_non_zero > 0:
//         noneachrow.append(count_non_zero)
// for j in range(noneachrow[1]):
//     print(j)
// # for x in range(noneachrow[1]):
// #     print(x + 2)
// # print(noneachrow)

// Stationary_matrix = [
//     [1, 7, 2, 0],
//     [0, 0, 0, 0],
//     [0, 8, 9, 0]
// ]
// noneachrow = []

// for i in range(len(Stationary_matrix)):
//     noneachrowCount = 0
//     for j in range(len(Stationary_matrix[i])):
//         if Stationary_matrix[i][j] != 0:
//             noneachrowCount += 1
//     if noneachrowCount > 0:
//         noneachrow.append(noneachrowCount)

// print(noneachrow)
