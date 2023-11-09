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

for (j <- 0 until noneachrow(0)) {
    i_vn(j) := "b00111".U
  }
for (j <- 0 until noneachrow(1)) {
    i_vn(j + noneachrow(0)) := "b11001".U
  }
for (j <- 0 until noneachrow(2)) {
    i_vn(j +  noneachrow(0) + noneachrow(1)) := "b00010".U
  }
for (j <- 0 until noneachrow(3)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2)) := "b10111".U
  }
for (j <- 0 until noneachrow(4)) {
    i_vn(j + noneachrow(0) +noneachrow(1) + noneachrow(2) + noneachrow(3)) := "b10000".U
  }
for (j <- 0 until noneachrow(5)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3) + noneachrow(4)) := "b10101".U
  }
for (j <- 0 until noneachrow(6)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) +noneachrow(3) + noneachrow(4) + noneachrow(5)) := "b10100".U
  }
for (j <- 0 until noneachrow(7)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) +  noneachrow(6)) := "b01110".U
  }
for (j <- 0 until noneachrow(8)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7)) := "b01000".U
  }
for (j <- 0 until noneachrow(9)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8)) := "b10000".U
  }
for (j <- 0 until noneachrow(10)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)) := "b11111".U
  }
for (j <- 0 until noneachrow(11)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)) := "b11110".U
  }
for (j <- 0 until noneachrow(12)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)) := "b00001".U
  }
for (j <- 0 until noneachrow(13)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12)) := "b01000".U
  }
for (j <- 0 until noneachrow(14)) {
    i_vn(j +noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)) := "b01101".U
  }
for (j <- 0 until noneachrow(15)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)) := "b01110".U
  }
for (j <- 0 until noneachrow(16)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)) := "b10010".U
  }
for (j <- 0 until noneachrow(17)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)) := "b11110".U
  }
for (j <- 0 until noneachrow(18)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17)) := "b01011".U
  }
for (j <- 0 until noneachrow(19)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)) := "b10100".U
  }
for (j <- 0 until noneachrow(20)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)) := "b00100".U
  }
for (j <- 0 until noneachrow(21)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19) +noneachrow(20)) := "b00010".U

  }
for (j <- 0 until noneachrow(22)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)) := "b01101".U
 
  }
for (j <- 0 until noneachrow(23)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)) := "b10000".U
   
  }
for (j <- 0 until noneachrow(24)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)) := "b11010".U
   
  }
for (j <- 0 until noneachrow(25)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)) := "b11010".U
   
  }
for (j <- 0 until noneachrow(26)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)) := "b00111".U
    
  }
for (j <- 0 until noneachrow(27)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)) := "b00010".U

  }
for (j <- 0 until noneachrow(28)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)) := "b01100".U
    
  }
for (j <- 0 until noneachrow(29)) {
    i_vn(j +  noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)+noneachrow(28)) := "b11100".U
  }
for (j <- 0 until noneachrow(30)) {
    i_vn(j + noneachrow(0) + noneachrow(1) + noneachrow(2) + noneachrow(3) + noneachrow(4) + noneachrow(5) + noneachrow(6) + noneachrow(7) + noneachrow(8) + noneachrow(9)+noneachrow(10)+ noneachrow(11)+ noneachrow(12) + noneachrow(13)+noneachrow(14)noneachrow(15)+noneachrow(16)+noneachrow(17) + noneachrow(18)+noneachrow(19)+noneachrow(20)+noneachrow(21)+noneachrow(22)+noneachrow(23)+noneachrow(24)+noneachrow(25)+noneachrow(26)+noneachrow(27)+noneachrow(28)+noneachrow(29)) := "b00001".U
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

