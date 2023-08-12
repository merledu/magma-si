package magmasi.components

import chisel3._
import chisel3.util._
import scala.collection.mutable
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
  val newIndex = Mux(muxpin, Mux(index % 2.U === 0.U, index + 1.U, index - 1.U), index)
  newIndex
}
  def apply(number: UInt): Vec[Bool] = {
    val width = number.getWidth
    VecInit(Seq.tabulate(width)(i => number(i)))
  }
def routing2(index: UInt, muxpin: UInt): UInt = {

  // val boolArray: Vec[Bool] = VecInit(muxpin)
  // dontTouch(boolArray)
  val boolArray = apply(muxpin)
//     val condition = ((1.U % 4.U === 1.U) && (boolArray(1) === 1.B))
// dontTouch(condition)
  val newlevel = LEVELS - 3
  var intermediateIndex = WireInit(index)
  for (i <- 0 until newlevel) {
    val calculation = intermediateIndex % 4.U
      val nextIndex = MuxCase(intermediateIndex, Seq(
        ((calculation === 0.U) && (boolArray(i) === 0.B), intermediateIndex),
        ((calculation === 1.U) && (boolArray(i) === 0.B), intermediateIndex),
        ((calculation === 2.U) && (boolArray(i) === 0.B), intermediateIndex),
        ((calculation === 3.U) && (boolArray(i) === 0.B), intermediateIndex),
        ((calculation === 0.U) && (boolArray(i) === 1.B), intermediateIndex + 2.U),
        ((calculation === 1.U) && (boolArray(i) === 1.B), intermediateIndex + 3.U),
        ((calculation === 2.U) && (boolArray(i) === 1.B), intermediateIndex - 2.U),
        ((calculation === 3.U) && (boolArray(i) === 1.B), intermediateIndex - 2.U)
      ))
      intermediateIndex = nextIndex
  }
  intermediateIndex
}



val abc1 = Wire(Vec(NUM_PES, Valid(UInt(DATA_TYPE.W))))
for (i <- 0 until NUM_PES) {
  when(io.i_data_bus1(i) =/= 0.U) {
    abc1(i).valid := true.B
    abc1(i).bits := io.i_data_bus1(i)
  }.otherwise {
    abc1(i).valid := false.B
    abc1(i).bits := 0.U
  }
}

    



var abc = io.i_data_bus1.toArray.zipWithIndex
//val nonZeroElems = io.i_data_bus1.filter(_ === 0.U)  


  //val a12 = NUM_PES.U - count
  //val outa = Wire(Vec(a1, UInt(32.W)))

val Abc = abc.map { case (data, index) =>
  (data, index.U, false.B)
}

//val Abc = abc.map { case (element, index) => (element, index + 1) }

//val outarray := VecInit(Seq.fill(NUM_PES * DATA_TYPE)(0.U(DATA_TYPE.W)))
val outarray = WireInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
val outarray2 = outarray.map { case (index) =>
  (index, false.B)
}
  def abs(value: Int): Int = {
  if (value >= 0) value else value*(-1)
}
//print(io.i_data_bus1(2) == io.i_data_bus1(1))
// val condition = (abc(3)._1) === (abc(3-1)._1)//((abc(2)._1) === (abc(0)._1))//io.i_data_bus1(2) === io.i_data_bus1(1)
// dontTouch(condition)
for (i <- 1 until NUM_PES ) {
  when ((io.i_mux_bus(i))(0).orR){
    when((abc(i)._1) === (abc(i-1)._1)) {
        // when ((abc(i / DATA_TYPE)._2).U === 0.U){
        //     val a = routing(0.U, ((io.i_mux_bus(i / DATA_TYPE))(0) === 1.U))
        //     outarray(i / DATA_TYPE) := a
        // }.otherwise {
            val a = routing((abc(i)._2).U - 1.U, ((io.i_mux_bus(i))(0) === 1.U))
            outarray(i) := a
        
    }.otherwise{
        val a = routing((abc(i)._2).U, ((io.i_mux_bus(i))(0) === 1.U))
        outarray(i) := a
    }
  }.otherwise(
    outarray(i) := (abc(i)._2).U
  )

}
            val a1 = routing((abc(0)._2).U, ((io.i_mux_bus(0))(0) === 1.U))
            outarray(0) := a1

val array1 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))

dontTouch(array1)
val prac = WireInit(0.U)
// val a4 = routing2(outarray(2) - 1.U, (io.i_mux_bus(2))(LEVELS - 3, 1))
// prac := outarray(2)
// dontTouch(prac)

for (i <- 1 until NUM_PES) {
  when ((io.i_mux_bus(i))(LEVELS - 3, 1).orR){
      when((abc(i)._1) === (abc(i-1)._1)) {
          val a = routing2(outarray(i) - 1.U, (io.i_mux_bus(i))(LEVELS - 3, 1))
            val valueExists = array1.contains(a)
           array1(i) := a
      }.otherwise {
           val a = routing2(outarray(i), (io.i_mux_bus(i))(LEVELS - 3, 1))
             val valueExists = array1.contains(a)
             when (!valueExists && !(io.i_data_bus1(a) === 0.U)){
              array1(i) := a
             }

           
    }
  }.otherwise{
    array1(i) := outarray(i)
  }

  }
            val a2 = routing2(outarray(0.U), (io.i_mux_bus(0))(LEVELS - 3, 1))
          array1(0) := a2


val array2 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
for (i <- 1 until NUM_PES) {
  when ((io.i_mux_bus(i))(LEVELS - 2).orR){
  when((abc(i)._1) === (abc(i-1)._1)) {
      val a = routing(array1(i) - 1.U , (io.i_mux_bus(i))(LEVELS -2 ))
      array2(i) := a
  }.otherwise{
    val a = routing(array1(i), (io.i_mux_bus(i))(LEVELS - 2))
    array2(i) := a
  }
}.otherwise{
  array2(i) := array1(i)
}
}
      val a = routing(array1(0.U), (io.i_mux_bus(0))(LEVELS - 2))
      array2(0) := a

dontTouch(outarray)
// def remove(arr : Vec[UInt]) : Vec[UInt] ={
//   val result = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
//   for (i <- 0 until NUM_PES) {
//     for (j <- i + 1 until NUM_PES) {
//       when(arr(i) === arr(j)) {
//         result(i) := 0.U//io.o_dist_bus1(result.size+1)

//       }.otherwise{
//         result(i) := arr(i)
//       }
//     }
//   }
//   result
// }
// val array3 = WireInit(remove(array2))
// dontTouch(array3)
val array3 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
  for (k <- 0 until NUM_PES) {
      io.o_dist_bus1(k) := 0.U
  }
  
  //if (array2.forall(element => numberSet.contains(element))){
val overwriteChecker = Module(new DuplicateCheck)
overwriteChecker.io.input := array1
val condi = overwriteChecker.io.hasDuplicates === 1.B
dontTouch(condi)
//when (overwriteChecker.io.hasDuplicates){
    for ((element, index) <- array1.zipWithIndex) {
      when (io.i_data_bus1(element) === 0.U ){
        val abd = WireInit(0.U)
      }.otherwise{
        //io.o_dist_bus1(eleme) := io.i_data_bus1(element)  
      }
      //otherwise{
      
      //}
    }
}
    // io.o_dist_bus1(index) := io.i_data_bus1(element)
    // }
    // } .otherwise {
    //       for ((element, index) <- array1.zipWithIndex) {
    // io.o_dist_bus1(element) := io.i_data_bus1(element)
    // }
    // }
    //} vscode-file://vscode-app/usr/share/code/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html
//   } else {
//     for ((element, index) <- array2.zipWithIndex) {
//     io.o_dist_bus1(element) := io.i_data_bus1(element)
//   }

//     // for (l <- 0 until NUM_PES) {
//     //   io.o_dist_bus1(l) := io.i_data_bus1(array2(l))
//     // }


 

