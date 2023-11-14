// package magmasi.components

// import chisel3._
// import chisel3.util._
// import chiseltest._ 
// import org.scalatest.freespec.AnyFreeSpec

// class ivncontrolTester extends AnyFreeSpec with ChiselScalatestTester {
//     "ivn tester" in {
//         //implicit val config = MagmasiConfig()
//         test(new ivncontrol()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

//         val inputData = Seq(
//            Seq(1, 7, 2, 0),
//             Seq(3, 4, 1, 0),
//            Seq(2, 0, 4, 0),
//            Seq(1, 2, 3, 0)
//         ) 
//         for (i <- 0 until 4){
//             for (j <- 0 until 4){
//                 dut.Stationary_matrix(i)(j).poke(inputData(i)(j))
//             }
//             }
//         }
//     }
// }
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrolTester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        
        test(new ivncontrol(32,32,5)){ c =>
          // println(s"noneachrow: ${c.noneachrow.mkString(", ")}")
          // println(s"noneachrow(0): ${c.noneachrow(0)}")
    

        val inputData = Seq(
        //    Seq(1, 7, 0),
           Seq(3, 4, 1, 0, 0),
           Seq(2, 0, 4, 0, 1),
           Seq(1, 2, 3, 5, 0),
           Seq(1, 0, 0, 5, 0)
      
        ) 

        var noneachrow: Array[Int] = Array()
        //var noneachrow = RegInit(VecInit(Seq.fill(32)(0.U(5.W))))
        for (i <- 0 until inputData.length){
          var a = 0
            for(j <- 0 until inputData(i).length){
              if (inputData(i)(j) != 0){
                //println(inputData(i)(j))
                a += 1
                
              }
            
            }
            
            noneachrow :+= a
            
        }
        println(noneachrow(0))
         for (i <- 0 until noneachrow.length) {
            c.io.noneachrows(i).poke(noneachrow(i).U)
         }

         //println(s"noneachrow: ${c.noneachrow.mkString(", ")}")
          //println(s"noneachrow(0): ${c.noneachrow(0)}")
        for (i <- 0 until 4) {
          for (j <- 0 until 5) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
        }
        c.clock.step(1)
       
    
    }
}
}



