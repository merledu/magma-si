package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class ivncontrol4(implicit val Config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_vn = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))         //row: Int = 3,col: Int = 3
   
  })

    val i_vn = RegInit(VecInit(Seq.fill(Config.NUM_PES)(0.U(Config.LOG2_PES.W))))

    val random_values = Seq.fill(Config.NUM_PES)(Random.nextInt(32).U(Config.LOG2_PES.W))

    val rowcount = RegInit(VecInit(Seq.fill(Config.MaxRows)(0.U(32.W))))

    var valid = WireDefault(false.B)

    var valid1 = WireDefault(false.B)

    val numRows = io.Stationary_matrix.length.U
    val numCols = io.Stationary_matrix(0).length.U 

    // dontTouch(numRows)
    // dontTouch(numCols)

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    
    //var valid = 0.U
    val mat = Reg(Vec(Config.MaxRows, Vec(Config.MaxCols,UInt(32.W))))

    dontTouch(mat)

    val count = Reg(Vec(Config.MaxRows, UInt(32.W)))

    dontTouch(count) 


    mat(i)(j) := io.Stationary_matrix(i)(j)
    when(valid1=== false.B){
        when ( io.Stationary_matrix(i)(j) =/= 0.U){
            count(i) := count(i)+1.U
            dontTouch(count)
    }
    }
    

    when (count(1) >= 4.U) {
        valid1 := true.B 
    
    }
    dontTouch(valid1)

    when ( i === (Config.MaxRows - 1).U && (j === (Config.MaxCols - 1).U)){


    
    for ( i <- 0 until 2){


        rowcount(i) := count(i)  
        when(io.Stationary_matrix(1)(3) =/= 0.U){

            

            when((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) === 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(2) === 0.U)||(io.Stationary_matrix(1)(2) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(0) === 0.U)){
                rowcount(1) := count(1) - 2.U
            }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) || (io.Stationary_matrix(1)(0) =/= 0.U &&  io.Stationary_matrix(1)(2) =/= 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U)){
                rowcount(1) := count(1) - 1.U
            }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) === 0.U)|| (io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) =/= 0.U ) || ( io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U) ){
                rowcount(1) := count(1) - 3.U
            }
        // }.otherwise{

        
        // rowcount(i) := count(i)  
        }
    }}

    dontTouch(rowcount)

    when ((i < (Config.MaxRows - 1).U) && (j === (Config.MaxCols - 1).U)){
        i := i + 1.U
    }

    when ((j < (Config.MaxCols - 1).U)&&(i <= (Config.MaxRows - 1).U)){
        j := j + 1.U

    }.elsewhen((i === (Config.MaxRows - 1).U) && (j === (Config.MaxCols - 1).U)){
        j := j

    }.otherwise{
        j := 0.U

    }
    dontTouch(j)
    dontTouch(i)


    io.o_vn := i_vn

    for (i <- 0 until Config.NUM_PES) {
        i_vn(i) := Random.nextInt(32).U(Config.LOG2_PES.W)
    }
    
    

   // println(rowcount(0))
    //  printf("Value of data: %d\n", rowcount(0))
    //  printf("Value of data: %d\n", rowcount(1))


    when ( i === (Config.MaxRows - 1).U && (j === (Config.MaxCols - 1).U)){
       valid := true.B
    }.otherwise{
       valid := false.B
    }
    dontTouch(valid)

    var rowlength = rowcount.length.U

  

     when(valid === true.B){
        when (rowlength >= 2.U){
           when(rowcount(0) === 2.U ){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U 
                when(rowcount(1) === 2.U){
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }.elsewhen(rowcount(1)===1.U){
                    i_vn(2) := "b00001".U
                }.elsewhen(rowcount(1) > 2.U){
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }


            }.elsewhen(rowcount(0)=== 1.U){
                i_vn(0) := "b00000".U
                when(rowcount(1)===3.U){
                    i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }.elsewhen(rowcount(1)===2.U){
                    i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U
            
                }.elsewhen(rowcount(1)===1.U){
                      i_vn(1) := "b00001".U
                
                }.elsewhen(rowcount(1)>3.U){
                     i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }
            
            
                

            }.elsewhen(rowcount(0)=== 3.U){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U
                i_vn(2) := "b00000".U
                when(rowcount(1) === 1.U){
                    i_vn(3) := "b00001".U
                }

            }.elsewhen(rowcount(0)=== 0.U){
                when(rowcount(1)=== 4.U){
                    i_vn(0) := "b00001".U
                    i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U
                    i_vn(3) := "b00001".U
                }.elsewhen(rowcount(1)===3.U){
                    i_vn(0) := "b00001".U
                    i_vn(1) := "b00001".U
                    i_vn(2) := "b00001".U
                }.elsewhen(rowcount(1)===2.U){
                    i_vn(0) := "b00001".U
                    i_vn(1) := "b00001".U
                }.elsewhen(rowcount(1)===1.U){
                    i_vn(0) := "b00001".U
                }
            }.elsewhen(rowcount(0)===4.U){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U
                i_vn(2) := "b00000".U
                i_vn(3) := "b00000".U
            }
            
        // // }.elsewhen(rowlength === 2.U){
        //     when(rowcount(0) === 2.U ){
        //         i_vn(0) := "b00000".U
        //         i_vn(1) := "b00000".U 
        //         when(rowcount(1) === 2.U){
        //             i_vn(2) := "b00001".U
        //             i_vn(3) := "b00001".U
        //         }
        //     }.elsewhen(rowcount(0) === 3.U){
        //         i_vn(0) := "b00000".U
        //         i_vn(1) := "b00000".U
        //         i_vn(2) := "b00000".U
        //         when(rowcount(1) === 1.U){
        //             i_vn(3) := "b00001".U
        //         }
        //     }.elsewhen(rowcount(0) === 1.U){
        //         i_vn(0) := "b00000".U
        //         when(rowcount(1) === 2.U){
        //             i_vn(1) := "b00001".U
        //             i_vn(2) := "b00001".U
        //         }.elsewhen(rowcount(1) === 1.U){
        //             i_vn(1) := "b00001".U
        //             when(rowcount(1)===1.U){
        //                 i_vn(2) := "b00010".U
        //                  i_vn(3) := "b00010".U
        //             }
        //         }
        //     }.elsewhen(rowcount(0) >= 4.U){
        //         i_vn(0) := "b00000".U
        //         i_vn(1) := "b00000".U
        //         i_vn(2) := "b00000".U
        //         i_vn(3) := "b00000".U
        // }
        // }

        // }.elsewhen(rowlength === 1.U){
        //     when(rowcount(0) === 2.U ){
        //         i_vn(0) := "b00000".U
        //         i_vn(1) := "b00000".U 

        //     }.otherwise{
        //         i_vn(0) := "b00000".U
        //     }

        // }
    }
    }
}
