package magmasi.components

import scala.util.Random // Add import for Random

import chisel3._
import chisel3.util._

class stationary(implicit val Config: MagmasiConfig) extends Module {
  val io = IO(new Bundle {
    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix1 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix2 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix3 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix4 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix5 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix6 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix7 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_Stationary_matrix8 =  Output(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))

  })
     //val stationary2 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     
       var count = RegInit(0.U(32.W))
    io.o_Stationary_matrix1 := io.Stationary_matrix

     val Station2 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
      val Station3 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
       val Station4 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
        val Station5 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
         val Station6 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
          val Station7 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
           val Station8 =  Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))

     //Station2 := io.Stationary_matrix
    var valid = WireDefault(false.B)
    var valid1 = WireDefault(false.B)
    var valid2 = WireDefault(false.B)
    var valid3 = WireDefault(false.B)
    var valid4 = WireDefault(false.B)
    var valid5 = WireDefault(false.B)
    var valid6 = WireDefault(false.B)
  
    

    when(count === 0.U){
     Station2 := io.Stationary_matrix
      
    }
    when(count === 8.U){
     Station3 := Station2
      
    }

      when(count === 16.U){
     Station4 := Station3
      
    }
      when(count === 24.U){
     Station5 := Station4
      
    }
      when(count === 32.U){
     Station6 := Station5
      
    }
      when(count === 40.U){
     Station7 := Station6
      
    }
      when(count === 48.U){
     Station8 := Station7
      
    }





    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    




   
    
    dontTouch(count) 
   


    
    when(valid=== false.B){
        when ( io.Stationary_matrix(i)(j) =/= 0.U){
                Station2(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }


   //ount1:= count1 +1.U
    //count1:= count1 +1.U
    io.o_Stationary_matrix2 := Station2





   

     when(valid1=== false.B){
        when ( Station2(i)(j) =/= 0.U){
                Station3(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix3 := Station3

     when(valid2=== false.B){
        when ( Station3(i)(j) =/= 0.U){
                Station4(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix4 := Station4

    when(valid3=== false.B){
        when ( Station4(i)(j) =/= 0.U){
                Station5(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix5 := Station5

    when(valid4=== false.B){
        when ( Station5(i)(j) =/= 0.U){
                Station6(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix6 := Station6

    when(valid5=== false.B){
        when ( Station6(i)(j) =/= 0.U){
                Station7(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix7 := Station7

    when(valid6=== false.B){
        when ( Station7(i)(j) =/= 0.U){
                Station8(i)(j) := 0.U
                
            count:= count + 1.U
          
           
    }
    }

    io.o_Stationary_matrix8 := Station8

  

    

    when (count >= 8.U) {
        valid := true.B 
    
    }
     when (count >= 16.U ) {
        valid1 := true.B 
    
    }
    when (count >= 24.U ) {
        valid2 := true.B 
    
    }
    when (count >= 32.U ) {
        valid3 := true.B 
    
    }
    when (count >= 40.U ) {
        valid4 := true.B 
    
    }
    when (count >= 48.U ) {
        valid5 := true.B 
    
    }

    when (count >= 56.U ) {
        valid6 := true.B 
    
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
