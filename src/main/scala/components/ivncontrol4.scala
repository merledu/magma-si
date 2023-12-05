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

    val rowcount = RegInit(VecInit(Seq.fill(16)(0.U(32.W))))

    var valid = WireDefault(false.B)

    var valid1 = WireDefault(false.B)

    val numRows = io.Stationary_matrix.length.U
    val numCols = io.Stationary_matrix(0).length.U 

    
    val pin = RegInit(0.U(32.W))
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


    
    for ( i <- 0 until 15){

        if(i < 8) {
      rowcount(i) := count(i)
    }else {
      rowcount(i) := 0.U
    }
     //    when(io.Stationary_matrix(1)(3) =/= 0.U){

            

     //        // when((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) === 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(2) === 0.U)||(io.Stationary_matrix(1)(2) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(0) === 0.U)){
     //        //     rowcount(1) := count(1) - 2.U
     //        // }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) || (io.Stationary_matrix(1)(0) =/= 0.U &&  io.Stationary_matrix(1)(2) =/= 0.U) || (io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U)){
     //        //     rowcount(1) := count(1) - 1.U
     //        // }.elsewhen((io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) === 0.U)|| (io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U && io.Stationary_matrix(1)(2) =/= 0.U ) || ( io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) =/= 0.U && io.Stationary_matrix(1)(2) =/= 0.U) ){
     //        //     rowcount(1) := count(1) - 3.U
     //        // }
     //    // }.otherwise{

        
     //    rowcount(i) := count(i)  
     //    }
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

    when(rowcount(0) =/= 0.U){
        pin := 0.U
    }
     when(rowcount(0) === 0.U && rowcount(1) =/= 0.U){
        pin := 1.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) =/= 0.U){
        pin := 2.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) === 0.U && rowcount(3) =/= 0.U){
        pin := 3.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) === 0.U && rowcount(3) === 0.U && rowcount(4) =/= 0.U){
        pin := 4.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) === 0.U && rowcount(3) === 0.U && rowcount(4) === 0.U && rowcount(5) =/= 0.U){
        pin := 5.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) === 0.U && rowcount(3) === 0.U && rowcount(4) === 0.U && rowcount(5) =/= 0.U && rowcount(6) =/= 0.U){
        pin := 6.U
    }
     when(rowcount(0) === 0.U && rowcount(1) === 0.U && rowcount(2) === 0.U && rowcount(3) === 0.U && rowcount(4) === 0.U && rowcount(5) =/= 0.U && rowcount(6) =/= 0.U && nrowcount(7) =/= 0.U){
        pin := 7.U
    }

    

     when(valid === true.B){
        when(rowcount(0 + pin ) === 0.U){
            i_vn(0) := 0.U + pin 
            i_vn(1) := 0.U + pin 
            i_vn(2) := 0.U + pin 
            i_vn(3) := 0.U+ pin 
            i_vn2(0) := 0.U+ pin 
            i_vn2(1) := 0.U+ pin 
            i_vn2(2) := 0.U+ pin 
            i_vn2(3) := 0.U+ pin 

        }.elsewhen(rowcount(0+ pin ) === 7.U  ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
            i_vn(2) := 0.U+ pin 
            i_vn(3) := 0.U+ pin 
            i_vn2(0) := 0.U+ pin 
            i_vn2(1) := 0.U+ pin 
            i_vn2(2) := 0.U+ pin 
        }.elsewhen(rowcount(0+ pin ) === 6.U ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
            i_vn(2) := 0.U+ pin 
            i_vn(3) := 0.U+ pin 
            i_vn2(0) := 0.U+ pin 
            i_vn2(1) := 0.U+ pin 
    
        }.elsewhen(rowcount(0+ pin ) === 5.U  ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
            i_vn(2) := 0.U+ pin 
            i_vn(3) := 0.U+ pin 
            i_vn2(0) := 0.U+ pin 
   
        }.elsewhen(rowcount(0+ pin ) === 4.U ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
            i_vn(2) := 0.U+ pin 
            i_vn(3) := 0.U+ pin 
    

     
        }.elsewhen(rowcount(0+ pin ) === 3.U ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
            i_vn(2) := 0.U+ pin 
       
        }.elsewhen(rowcount(0+ pin ) === 2.U  ){
            i_vn(0) := 0.U+ pin 
            i_vn(1) := 0.U+ pin 
        
        }.elsewhen(rowcount(0+ pin ) === 1.U ){
            i_vn(0) := 0.U + pin 
        }




        // 1 main 8
        when(rowcount(1+ pin ) === 8.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 
        
        // a main 7
        }.elsewhen(rowcount(1+ pin )===7.U && rowcount(0+ pin ) === 0.U){
             i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
        }.elsewhen(rowcount(1+ pin )===7.U && rowcount(0+ pin ) === 1.U){
          
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 
        
        // 1 main 6
        }.elsewhen(rowcount(1+ pin )===6.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 


        }.elsewhen(rowcount(1+ pin )===6.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===6.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 

        // 1 main 5

        }.elsewhen(rowcount(1+ pin )===5.U && rowcount(0+ pin ) === 3.U){
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===5.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
       


        }.elsewhen(rowcount(1+ pin )===5.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
    

        }.elsewhen(rowcount(1+ pin )===5.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 

         // 1 main 4

         }.elsewhen(rowcount(1+ pin )===4.U && rowcount(0+ pin ) === 4.U){
       
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===4.U && rowcount(0+ pin ) === 3.U){
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
      

        }.elsewhen(rowcount(1+ pin )===4.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
     
       


        }.elsewhen(rowcount(1+ pin )===4.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
        
    

        }.elsewhen(rowcount(1+ pin )===4.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
  
     

        
         // 1 main 3

        }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 5.U){
       
     
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 

         }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 4.U){
       
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
       

        }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 3.U){
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
       
      

        }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 
      
     
       


        }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
 
        
    

        }.elsewhen(rowcount(1+ pin )===3.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
      
  

    
         // 1 main 1

        
        
        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 6.U){
       
     
      
            i_vn2(2) := 1.U+ pin 
            i_vn2(3) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 5.U){
       
     
            i_vn2(1) := 1.U+ pin 
            i_vn2(2) := 1.U+ pin 
    

         }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 4.U){
       
            i_vn2(0) := 1.U+ pin 
            i_vn2(1) := 1.U+ pin 
     
       

        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 3.U){
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 

       
      

        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
      
      
     
       


        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
       
 
        
    

        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
      
      
  
           // 1 main 2

         }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 7.U){
       
     
      
  
            i_vn2(3) := 1.U+ pin
        
        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 6.U){
       
     
      
            i_vn2(2) := 1.U+ pin 
   

        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 5.U){
         
            i_vn2(1) := 1.U+ pin 

    
         }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 4.U){
       
            i_vn2(0) := 1.U+ pin 
      


        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 3.U){
            i_vn(3) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 2.U){
            i_vn(2) := 1.U+ pin 
      

        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 1.U){
             i_vn(1) := 1.U+ pin 
        

        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
        }


         // 2 main 8
        when(rowcount(2+ pin ) === 8.U && rowcount(0+ pin ) === 0.U && rowcount(1 + pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 
        
        // 2 main 7
        }.elsewhen(rowcount(2+ pin )===7.U && rowcount(1+ pin ) === 0.U && rowcount(0+ pin ) === 0.U){
             i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===7.U && ((rowcount(0+ pin ) === 1.U && rowcount(1 + pin) === 0.U) || (rowcount(1+ pin ) === 1.U && rowcount(0 + pin) === 0.U))){
          
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 
 
        
        // 2 main 6

        }.elsewhen(rowcount(2+ pin )===6.U && ((rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ))){
             i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin
        


        }.elsewhen(rowcount(2+ pin )===6.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(1+ pin ) === 1.U && rowcount(0+ pin ) === 0.U ))){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 


        }.elsewhen(rowcount(2+ pin )===6.U && rowcount(0+ pin ) === 0.U  && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
              i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin

        // 2 main 5

        }.elsewhen(rowcount(2+ pin )===5.U && ((rowcount(0+ pin ) === 3.U &&  rowcount(1+ pin) === 0.U  ) ||(rowcount(1+ pin ) === 3.U &&  rowcount(0+ pin )=== 0.U )
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U))){
             i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin

     

        }.elsewhen(rowcount(2+ pin )===5.U && rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U || (rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U) || 
        rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U){
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin
       


        }.elsewhen(rowcount(2+ pin )===5.U && (rowcount(0+ pin ) === 1.U && rowcount(1 + pin) === 0.U) || (rowcount(1+ pin ) === 1.U && rowcount(0 + pin) === 0.U)){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin  
    

        }.elsewhen(rowcount(2+ pin )===5.U && rowcount(0+ pin ) === 0.U && rowcount(0) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 

         // 2 main 4

         }.elsewhen(rowcount(2+ pin )=== 4.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U  ) || (rowcount(1+ pin ) === 4.U && rowcount(0+ pin ) === 0.U  )
         ||  (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U  ) ||  (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U  ) || 
          (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U  ))){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===4.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U  ) || (rowcount(1+ pin ) === 1.U && rowcount(0+ pin ) === 2.U  )
         ||  (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U  ) ||  (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U  ))){
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
      

        }.elsewhen(rowcount(2+ pin )===4.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U  ) || (rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U  )
         ||  (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U  ) )){
            i_vn(2) := 2.U+ pin 
             i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
       


        }.elsewhen(rowcount(2+ pin )===4.U &&  ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U  ) || (rowcount(1+ pin ) === 0.U && rowcount(0+ pin ) === 1.U  )
         )){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
        
    

        }.elsewhen(rowcount(2+ pin )===4.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
  
     

        
         // 2 main 3

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
       
     
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

         }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
       

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
       
      

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
      
     
       


        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
 
        
    

        }.elsewhen(rowcount(2+ pin )===3.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
      
  

    
         // 2 main 2

        
        
        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 6.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 6.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 2.U ))){
       
     
      
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === .U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
       
     
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
    

         }.elsewhen(rowcount(2+ pin )===2.U  && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
     
       

        }.elsewhen(rowcount(2+ pin )===2.U  && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 

       
      

        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
      
      
     
       


        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
       
 
        
    

        }.elsewhen(rowcount(2+ pin )===2.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
      
      
  
           // 2 main 1

         }.elsewhen(rowcount(2+ pin )===1.U &&  && ((rowcount(0+ pin ) === 7.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 7.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 2.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 3.U ))){
       
     
            i_vn2(3) := 2.U+ pin
        
        }.elsewhen(rowcount(2+ pin )===1.U && ((rowcount(0+ pin ) === 6.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 6.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 2.U ))){
       
     
      
            i_vn2(2) := 2.U+ pin 
   

        }.elsewhen(rowcount(2+ pin )===1.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === .U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
         
            i_vn2(1) := 2.U+ pin 

    
         }.elsewhen(rowcount(2+ pin )===1.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 2.U+ pin 
      


        }.elsewhen(rowcount(2+ pin )===1.U && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===1.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 2.U+ pin 
      

        }.elsewhen(rowcount(2+ pin )===1.U  && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 2.U+ pin 
        

        }.elsewhen(rowcount(2+ pin )===1.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
        }

        
    // next for 3 row 

     // 3 main 8
        when(rowcount(3+ pin ) === 8.U && rowcount(0+ pin ) === 0.U && rowcount(1 + pin ) === 0.U && && rowcount(2 + pin ) === 0.U){
            i_vn(0) := 3.U+ pin 
            i_vn(1) := 3.U+ pin 
            i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 
            i_vn2(2) := 3.U+ pin 
            i_vn2(3) := 3.U+ pin 
        
        // 3 main 7
        }.elsewhen(rowcount(3+ pin )===7.U & & rowcount(1+ pin ) === 0.U && rowcount(0+ pin ) === 0.U && rowcount(2 + pin ) === 0.U){
             i_vn(0) := 3.U+ pin 
            i_vn(1) := 3.U+ pin 
            i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 
            i_vn2(2) := 3.U+ pin 

        }.elsewhen(rowcount(3+ pin )===7.U && ((rowcount(0+ pin ) === 1.U && rowcount(1 + pin) === 0.U && rowcount(2 + pin ) === 0.U) || (rowcount(1+ pin ) === 1.U && rowcount(0 + pin) === 0.U && 
        rowcount(2 + pin ) === 0.U) || || (rowcount(1+ pin ) === 0.U && rowcount(0 + pin) === 0.U &&  rowcount(2 + pin ) === 1.U))){
          
            i_vn(1) := 3.U+ pin 
            i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 
            i_vn2(2) := 3.U+ pin 
            i_vn2(3) := 3.U+ pin 
 
        
        // 3 main 6

        }.elsewhen(rowcount(3+ pin )===6.U && ((rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U && rowcount(2 + pin ) === 0.U) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U && rowcount(2 + pin ) === 0.U) ||  (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U 
        && rowcount(2 + pin ) === 2.U) ||  (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U && rowcount(2 + pin ) === 1.U)||  (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U 
        && rowcount(2 + pin ) === 1.U) ||  (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U 
        && rowcount(2 + pin ) === 0.U))){
             i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 
            i_vn2(2) := 3.U+ pin 
            i_vn2(3) := 3.U+ pin
        


        }.elsewhen(rowcount(3+ pin )===6.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U && rowcount(2+ pin ) === 0.U ) || (rowcount(1+ pin ) === 1.U && rowcount(0+ pin ) === 0.U && rowcount(2+ pin ) === 0.U )
        || (rowcount(1+ pin ) === 0.U && rowcount(0+ pin ) === 0.U && rowcount(2+ pin ) === 1.U ))){
             i_vn(1) := 3.U+ pin 
            i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 
            i_vn2(2) := 3.U+ pin 


        }.elsewhen(rowcount(3+ pin )===6.U && rowcount(0+ pin ) === 0.U  && rowcount(1+ pin ) === 0.U && rowcount(2+ pin ) === 0.U){
            i_vn(0) := 3.U+ pin 
            i_vn(1) := 3.U+ pin 
            i_vn(2) := 3.U+ pin 
            i_vn(3) := 3.U+ pin 
            i_vn2(0) := 3.U+ pin 
            i_vn2(1) := 3.U+ pin 

        // 3 main 5

        }.elsewhen(rowcount(2+ pin )===5.U && ((rowcount(0+ pin ) === 3.U &&  rowcount(1+ pin) === 0.U  ) ||(rowcount(1+ pin ) === 3.U &&  rowcount(0+ pin )=== 0.U )
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U))){
             i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin

     

        }.elsewhen(rowcount(2+ pin )===5.U && rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U || (rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U) || 
        rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U){
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin
       


        }.elsewhen(rowcount(1+ pin )===5.U && (rowcount(0+ pin ) === 1.U && rowcount(1 + pin) === 0.U) || (rowcount(1+ pin ) === 1.U && rowcount(0 + pin) === 0.U)){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin  
    

        }.elsewhen(rowcount(2+ pin )===5.U && rowcount(0+ pin ) === 0.U && rowcount(0) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 

         // 2 main 4

         }.elsewhen(rowcount(2+ pin )=== 4.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U  ) || (rowcount(1+ pin ) === 4.U && rowcount(0+ pin ) === 0.U  )
         ||  (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U  ) ||  (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U  ) || 
          (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U  ))){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===4.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U  ) || (rowcount(1+ pin ) === 1.U && rowcount(0+ pin ) === 2.U  )
         ||  (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U  ) ||  (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U  ))){
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
      

        }.elsewhen(rowcount(2+ pin )===4.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U  ) || (rowcount(1+ pin ) === 2.U && rowcount(0+ pin ) === 0.U  )
         ||  (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U  ) )){
            i_vn(2) := 2.U+ pin 
             i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
       


        }.elsewhen(rowcount(2+ pin )===4.U &&  ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U  ) || (rowcount(1+ pin ) === 0.U && rowcount(0+ pin ) === 1.U  )
         )){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
        
    

        }.elsewhen(rowcount(2+ pin )===4.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
  
     

        
         // 2 main 3

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
       
     
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

         }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
       

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
       
      

        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
            i_vn2(0) := 2.U+ pin 
      
     
       


        }.elsewhen(rowcount(2+ pin )===3.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
            i_vn(3) := 2.U+ pin 
 
        
    

        }.elsewhen(rowcount(2+ pin )===3.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 2.U+ pin 
            i_vn(1) := 2.U+ pin 
            i_vn(2) := 2.U+ pin 
      
  

    
         // 2 main 2

        
        
        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 6.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 6.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 2.U ))){
       
     
      
            i_vn2(2) := 2.U+ pin 
            i_vn2(3) := 2.U+ pin 

        }.elsewhen(rowcount(2+ pin )===2.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === .U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
       
     
            i_vn2(1) := 2.U+ pin 
            i_vn2(2) := 2.U+ pin 
    

         }.elsewhen(rowcount(2+ pin )===2.U  && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 2.U+ pin 
            i_vn2(1) := 2.U+ pin 
     
       

        }.elsewhen(rowcount(1+ pin )===2.U  && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 1.U+ pin 
            i_vn2(0) := 1.U+ pin 

       
      

        }.elsewhen(rowcount(1+ pin )===2.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 1.U+ pin 
            i_vn(3) := 1.U+ pin 
      
      
     
       


        }.elsewhen(rowcount(1+ pin )===2.U && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 1.U+ pin 
            i_vn(2) := 1.U+ pin 
       
 
        
    

        }.elsewhen(rowcount(1+ pin )===2.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
            i_vn(1) := 1.U+ pin 
      
      
  
           // 2 main 1

         }.elsewhen(rowcount(1+ pin )===1.U &&  && ((rowcount(0+ pin ) === 7.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 7.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 2.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 3.U ))){
       
     
            i_vn2(3) := 1.U+ pin
        
        }.elsewhen(rowcount(1+ pin )===1.U && ((rowcount(0+ pin ) === 6.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 6.U ) 
        || (rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 5.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 4.U )
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 2.U ))){
       
     
      
            i_vn2(2) := 1.U+ pin 
   

        }.elsewhen(rowcount(1+ pin )===1.U && ((rowcount(0+ pin ) === 5.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 5.U ) 
        || (rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 4.U ) || (rowcount(0+ pin ) === .U && rowcount(1+ pin ) === 3.U )
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 2.U ))){
         
            i_vn2(1) := 1.U+ pin 

    
         }.elsewhen(rowcount(1+ pin )===1.U && ((rowcount(0+ pin ) === 4.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 4.U ) 
        || (rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 3.U ) || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 2.U )
        )){
       
            i_vn2(0) := 1.U+ pin 
      


        }.elsewhen(rowcount(1+ pin )===1.U && ((rowcount(0+ pin ) === 3.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 3.U ) 
        || (rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 1.U ) || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 2.U ))){
            i_vn(3) := 1.U+ pin 

        }.elsewhen(rowcount(1+ pin )===1.U && ((rowcount(0+ pin ) === 2.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 2.U ) 
        || (rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 1.U ))){
            i_vn(2) := 1.U+ pin 
      

        }.elsewhen(rowcount(1+ pin )===1.U  && ((rowcount(0+ pin ) === 1.U && rowcount(1+ pin ) === 0.U ) || (rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 1.U ) )){
             i_vn(1) := 1.U+ pin 
        

        }.elsewhen(rowcount(1+ pin )===1.U && rowcount(0+ pin ) === 0.U && rowcount(1+ pin ) === 0.U){
            i_vn(0) := 1.U+ pin 
        }












     }
    }
