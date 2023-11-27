package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class ivncontrol4(DATA_TYPE: Int = 32, NUM_PES: Int = 4, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(2, Vec(2, UInt(DATA_TYPE.W))))
    val o_vn = Output(Vec(NUM_PES, UInt(LOG2_PES.W)))         //row: Int = 3,col: Int = 3
   
  })

    val i_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))

    val random_values = Seq.fill(NUM_PES)(Random.nextInt(32).U(LOG2_PES.W))

    val rowcount = RegInit(VecInit(Seq.fill(2)(0.U(32.W))))

    var valid = WireDefault(false.B)

    var valid1 = WireDefault(false.B)

    val numRows = io.Stationary_matrix.length.U
    val numCols = io.Stationary_matrix(0).length.U 

    // dontTouch(numRows)
    // dontTouch(numCols)

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    
    //var valid = 0.U
    val mat = Reg(Vec(2, Vec(2,UInt(32.W))))

    dontTouch(mat)

    val count = Reg(Vec(2, UInt(32.W)))

    dontTouch(count) 


    mat(i)(j) := io.Stationary_matrix(i)(j)
    when(valid1=== false.B){
        when ( io.Stationary_matrix(i)(j) =/= 0.U){
            count(i) := count(i)+1.U
            dontTouch(count)
    }
    }
    

    when (count(1) >= 2.U) {
        valid1 := true.B 
    
    }
    dontTouch(valid1)

    when ( i === 1.U && (j === 1.U)){
    for ( i <- 0 until 2){
        rowcount(i) := count(i)  
    }}

    dontTouch(rowcount)

    when ((i < 1.U) && (j === 1.U)){
        i := i + 1.U
    }

    when ((j < 1.U)&&(i <= 1.U)){
        j := j + 1.U

    }.elsewhen(i === 1.U && (j === 1.U)){
        j := j

    }.otherwise{
        j := 0.U

    }
    dontTouch(j)
    dontTouch(i)


    io.o_vn := i_vn

    for (i <- 0 until NUM_PES) {
        i_vn(i) := Random.nextInt(32).U(LOG2_PES.W)
    }
    
    

   // println(rowcount(0))
    //  printf("Value of data: %d\n", rowcount(0))
    //  printf("Value of data: %d\n", rowcount(1))


    when ( i === 1.U && (j === 1.U)){
       valid := true.B
    }.otherwise{
       valid := false.B
    }
    dontTouch(valid)

    var rowlength = rowcount.length.U

  

    when(valid === true.B){
        when (rowlength === 2.U){
           when(rowcount(0) === 2.U ){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U 
                when(rowcount(1) === 2.U){
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }.otherwise{
                    i_vn(2) := "b00001".U

                }
            }.elsewhen(rowcount(0) === 1.U){
                i_vn(0) := "b00000".U
                when(rowcount(1) === 2.U){
                    i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U

                }.otherwise{
                    i_vn(1) := "b00001".U
                }
            }
        }.elsewhen(rowlength === 1.U){
            when(rowcount(0) === 2.U ){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U 

            }.otherwise{
                i_vn(0) := "b00000".U
            }

        }
    }
}
