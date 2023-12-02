package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class ivncontrol4(implicit val Config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_vn = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))         //row: Int = 3,col: Int = 3
    val o_vn2 = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))    
  })

    val i_vn = RegInit(VecInit(Seq.fill(Config.NUM_PES)(0.U(Config.LOG2_PES.W))))
    val i_vn2 = RegInit(VecInit(Seq.fill(Config.NUM_PES)(0.U(Config.LOG2_PES.W))))

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
    

    when (count(7) >= 8.U) {
        valid1 := true.B 
    
    }
    dontTouch(valid1)

    when ( i === (Config.MaxRows - 1).U && (j === (Config.MaxCols - 1).U)){


    
    for ( i <- 0 until 8){


        rowcount(i) := count(i)  
        when(io.Stationary_matrix(1)(3) =/= 0.U){

            

            // when((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) === 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(2) === 0.U)||(io.Stationary_matrix(1)(2) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(0) === 0.U)){
            //     rowcount(1) := count(1) - 2.U
            // }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) || (io.Stationary_matrix(1)(0) =/= 0.U &&  io.Stationary_matrix(1)(2) =/= 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U)){
            //     rowcount(1) := count(1) - 1.U
            // }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) === 0.U)|| (io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) =/= 0.U ) || ( io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U) ){
            //     rowcount(1) := count(1) - 3.U
            // }
        // }.otherwise{

        
        rowcount(i) := count(i)  
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
    io.o_vn2 := i_vn2

    for (i <- 0 until Config.NUM_PES) {
        i_vn(i) := Random.nextInt(32).U(Config.LOG2_PES.W)
        i_vn2(i) := Random.nextInt(32).U(Config.LOG2_PES.W)
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

            when(rowcount(0) >= 4.U){
                i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U
                i_vn(2) := "b00000".U
                i_vn(3) := "b00000".U
                when(rowcount(0)=== 8.U){
                     i_vn2(0) := "b00000".U
                    i_vn2(1) := "b00000".U
                    i_vn2(2) := "b00000".U
                    i_vn2(3) := "b00000".U
                }.elsewhen(rowcount(0) === 7.U){
                     i_vn2(0) := "b00000".U
                    i_vn2(1) := "b00000".U
                    i_vn2(2) := "b00000".U
                }.elsewhen(rowcount(0) === 6.U){
                     i_vn2(0) := "b00000".U
                    i_vn2(1) := "b00000".U
         
                }.elsewhen(rowcount(0) === 5.U){
                     i_vn2(0) := "b00000".U
               
                }
            }.elsewhen(rowcount(0) === 3.U){
                 i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U
                i_vn(2) := "b00000".U
                 
            }.elsewhen(rowcount(0) === 2.U){
                 i_vn(0) := "b00000".U
                i_vn(1) := "b00000".U
               
                 
            }.elsewhen(rowcount(0) === 1.U){
                 i_vn(0) := "b00000".U
            
            }
        when(rowcount(0) === 0.U){

      

             when(rowcount(1) >= 4.U){
                i_vn(0) := "b00001".U
                i_vn(1) := "b00001".U
                i_vn(2) := "b00001".U
                i_vn(3) := "b00001".U
                when(rowcount(1)=== 8.U){
                     i_vn2(0) := "b00001".U
                    i_vn2(1) := "b00001".U
                    i_vn2(2) := "b00001".U
                    i_vn2(3) := "b00001".U
                }.elsewhen(rowcount(1) === 7.U){
                     i_vn2(0) := "b00001".U
                    i_vn2(1) := "b00001".U
                    i_vn2(2) := "b00001".U
                }.elsewhen(rowcount(1) === 6.U){
                     i_vn2(0) := "b00001".U
                    i_vn2(1) := "b00001".U
         
                }.elsewhen(rowcount(1) === 5.U){
                     i_vn2(0) := "b00001".U
               
                }
            }.elsewhen(rowcount(1) === 3.U){
                 i_vn(0) := "b00001".U
                i_vn(1) := "b00001".U
                i_vn(2) := "b00001".U
                 
            }.elsewhen(rowcount(1) === 2.U){
                 i_vn(0) := "b00001".U
                i_vn(1) := "b00001".U
               
                 
            }.elsewhen(rowcount(1) === 1.U){
                 i_vn(0) := "b00001".U
            
            }
                
            }

         when(rowcount(0) === 0.U && rowcount(1) === 0.U){

      

             when(rowcount(2) >= 4.U){
                i_vn(0) := "b00010".U
                i_vn(1) := "b00010".U
                i_vn(2) := "b00010".U
                i_vn(3) := "b00010".U
                when(rowcount(2)=== 8.U){
                     i_vn2(0) := "b00010".U
                    i_vn2(1) := "b00010".U
                    i_vn2(2) := "b00010".U
                    i_vn2(3) := "b00010".U
                }.elsewhen(rowcount(2) === 7.U){
                     i_vn2(0) := "b00010".U
                    i_vn2(1) := "b00010".U
                    i_vn2(2) := "b00010".U
                }.elsewhen(rowcount(2) === 6.U){
                     i_vn2(0) := "b00010".U
                    i_vn2(1) := "b00010".U
         
                }.elsewhen(rowcount(2) === 5.U){
                     i_vn2(0) := "b00010".U
               
                }
            }.elsewhen(rowcount(2) === 3.U){
                 i_vn(0) := "b00010".U
                i_vn(1) := "b00010".U
                i_vn(2) := "b00010".U
                 
            }.elsewhen(rowcount(2) === 2.U){
                 i_vn(0) := "b00010".U
                i_vn(1) := "b00010".U
               
                 
            }.elsewhen(rowcount(2) === 1.U){
                 i_vn(0) := "b00010".U
            
            }
                
            }

         when(rowcount(0) === 0.U && rowcount(1)===0.U && rowcount(2)===0.U){

      

             when(rowcount(3) >= 4.U){
                i_vn(0) := "b00011".U
                i_vn(1) := "b00011".U
                i_vn(2) := "b00011".U
                i_vn(3) := "b00011".U
                when(rowcount(3)=== 8.U){
                     i_vn2(0) := "b00011".U
                    i_vn2(1) := "b00011".U
                    i_vn2(2) := "b00011".U
                    i_vn2(3) := "b00011".U
                }.elsewhen(rowcount(3) === 7.U){
                     i_vn2(0) := "b00011".U
                    i_vn2(1) := "b00011".U
                    i_vn2(2) := "b00011".U
                }.elsewhen(rowcount(3) === 6.U){
                     i_vn2(0) := "b00011".U
                    i_vn2(1) := "b00011".U
         
                }.elsewhen(rowcount(3) === 5.U){
                     i_vn2(0) := "b00011".U
               
                }
            }.elsewhen(rowcount(3) === 3.U){
                 i_vn(0) := "b00011".U
                i_vn(1) := "b00011".U
                i_vn(2) := "b00011".U
                 
            }.elsewhen(rowcount(3) === 2.U){
                 i_vn(0) := "b00011".U
                i_vn(1) := "b00011".U
               
                 
            }.elsewhen(rowcount(3) === 1.U){
                 i_vn(0) := "b00011".U
            
            }
                
            }
             when(rowcount(0) === 0.U && rowcount(3) === 0.U && rowcount(4) === 0.U && rowcount(1)===0.U && rowcount(2)===0.U ){

      

             when(rowcount(5) >= 4.U){
                i_vn(0) := "b00101".U
                i_vn(1) := "b00101".U
                i_vn(2) := "b00101".U
                i_vn(3) := "b00101".U
                when(rowcount(5)=== 8.U){
                     i_vn2(0) := "b00101".U
                    i_vn2(1) := "b00101".U
                    i_vn2(2) := "b00101".U
                    i_vn2(3) := "b00101".U
                }.elsewhen(rowcount(5) === 7.U){
                     i_vn2(0) := "b00101".U
                    i_vn2(1) := "b00101".U
                    i_vn2(2) := "b00101".U
                }.elsewhen(rowcount(5) === 6.U){
                     i_vn2(0) := "b00101".U
                    i_vn2(1) := "b00101".U
         
                }.elsewhen(rowcount(5) === 5.U){
                     i_vn2(0) := "b00101".U
               
                }
            }.elsewhen(rowcount(5) === 3.U){
                 i_vn(0) := "b00101".U
                i_vn(1) := "b00101".U
                i_vn(2) := "b00101".U
                 
            }.elsewhen(rowcount(5) === 2.U){
                 i_vn(0) := "b00101".U
                i_vn(1) := "b00101".U
               
                 
            }.elsewhen(rowcount(5) === 1.U){
                 i_vn(0) := "b00101".U
            
            }
                
            }
             when(rowcount(0) === 0.U && rowcount(3) === 0.U && rowcount(1)===0.U && rowcount(2)===0.U ){

      

             when(rowcount(4) >= 4.U){
                i_vn(0) := "b00100".U
                i_vn(1) := "b00100".U
                i_vn(2) := "b00100".U
                i_vn(3) := "b00100".U
                when(rowcount(4)=== 8.U){
                     i_vn2(0) := "b00100".U
                    i_vn2(1) := "b00100".U
                    i_vn2(2) := "b00100".U
                    i_vn2(3) := "b00100".U
                }.elsewhen(rowcount(4) === 7.U){
                     i_vn2(0) := "b00100".U
                    i_vn2(1) := "b00100".U
                    i_vn2(2) := "b00100".U
                }.elsewhen(rowcount(4) === 6.U){
                     i_vn2(0) := "b00100".U
                    i_vn2(1) := "b00100".U
         
                }.elsewhen(rowcount(4) === 5.U){
                     i_vn2(0) := "b00100".U
               
                }
            }.elsewhen(rowcount(4) === 3.U){
                 i_vn(0) := "b00100".U
                i_vn(1) := "b00100".U
                i_vn(2) := "b00100".U
                 
            }.elsewhen(rowcount(4) === 2.U){
                 i_vn(0) := "b00100".U
                i_vn(1) := "b00100".U
               
                 
            }.elsewhen(rowcount(4) === 1.U){
                 i_vn(0) := "b00100".U
            
            }
                
            }
     when(rowcount(0) === 0.U && rowcount(3) === 0.U && rowcount(1)===0.U && rowcount(2)===0.U && rowcount(5) === 0.U && rowcount(4) === 0.U  ){

      

             when(rowcount(6) >= 4.U){
                i_vn(0) := "b00110".U
                i_vn(1) := "b00110".U
                i_vn(2) := "b00110".U
                i_vn(3) := "b00110".U
                when(rowcount(6)=== 8.U){
                     i_vn2(0) := "b00110".U
                    i_vn2(1) := "b00110".U
                    i_vn2(2) := "b00110".U
                    i_vn2(3) := "b00110".U
                }.elsewhen(rowcount(6) === 7.U){
                     i_vn2(0) := "b00110".U
                    i_vn2(1) := "b00110".U
                    i_vn2(2) := "b00110".U
                }.elsewhen(rowcount(6) === 6.U){
                     i_vn2(0) := "b00110".U
                    i_vn2(1) := "b00110".U
         
                }.elsewhen(rowcount(6) === 5.U){
                     i_vn2(0) := "b00110".U
               
                }
            }.elsewhen(rowcount(6) === 3.U){
                 i_vn(0) := "b00110".U
                i_vn(1) := "b00110".U
                i_vn(2) := "b00110".U
                 
            }.elsewhen(rowcount(6) === 2.U){
                 i_vn(0) := "b00110".U
                i_vn(1) := "b00110".U
               
                 
            }.elsewhen(rowcount(6) === 1.U){
                 i_vn(0) := "b00110".U
            
            }
                
            }

        when(rowcount(0) === 0.U && rowcount(3) === 0.U && rowcount(1)===0.U && rowcount(2)===0.U && rowcount(5) === 0.U && rowcount(4) === 0.U && rowcount(6) === 0.U ){

      

             when(rowcount(7) >= 4.U){
                i_vn(0) := "b00111".U
                i_vn(1) := "b00111".U
                i_vn(2) := "b00111".U
                i_vn(3) := "b00111".U
                when(rowcount(7)=== 8.U){
                     i_vn2(0) := "b00111".U
                    i_vn2(1) := "b00111".U
                    i_vn2(2) := "b00111".U
                    i_vn2(3) := "b00111".U
                }.elsewhen(rowcount(7) === 7.U){
                     i_vn2(0) := "b00111".U
                    i_vn2(1) := "b00111".U
                    i_vn2(2) := "b00111".U
                }.elsewhen(rowcount(7) === 6.U){
                     i_vn2(0) := "b00111".U
                    i_vn2(1) := "b00111".U
         
                }.elsewhen(rowcount(7) === 5.U){
                     i_vn2(0) := "b00111".U
               
                }
            }.elsewhen(rowcount(7) === 3.U){
                 i_vn(0) := "b00111".U
                i_vn(1) := "b00111".U
                i_vn(2) := "b00111".U
                 
            }.elsewhen(rowcount(7) === 2.U){
                 i_vn(0) := "b00111".U
                i_vn(1) := "b00111".U
               
                 
            }.elsewhen(rowcount(7) === 1.U){
                 i_vn(0) := "b00111".U
            
            }
                
            }
     }


        }


























