package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class stationary(implicit val Config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix1 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix2 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
  })
     //val stationary2 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     
       var count = RegInit(0.U(32.W))
    io.o_Stationary_matrix1 := io.Stationary_matrix

     val Station2 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))

     //Station2 := io.Stationary_matrix
    var valid = WireDefault(false.B)
    var valid1 = WireDefault(false.B)

    when(count === 0.U){
     Station2 := io.Stationary_matrix

    }




    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    




   
    
    dontTouch(count) 
    dontTouch(count1) 



    
    when(valid=== false.B){
        when ( io.Stationary_matrix(i)(j) =/= 0.U){
                Station2(i)(j) := 0.U
                
            count:= count + 1.U
            count1:= count1 +1.U
           
    }
    }
   //ount1:= count1 +1.U
    //count1:= count1 +1.U
    io.o_Stationary_matrix2 := Station2

    when (count === 4.U) {
        valid := true.B 
    
    }

 

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
 




   
    
    





}
