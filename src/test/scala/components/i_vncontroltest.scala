package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrolTester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        
        test(new ivncontrol(32,32,5,5,5)){ c =>
          // println(s"noneachrow: ${c.noneachrow.mkString(", ")}")
          // println(s"noneachrow(0): ${c.noneachrow(0)}")
    

        val inputData = Seq(
           Seq(1, 7, 2, 0,0),
            Seq(3, 4, 1, 0,0),
           Seq(2, 0, 4, 0,0),
           Seq(1, 2, 3, 5,0),
           Seq(1, 2, 3, 5,0)
      
        ) 
     
          println(s"noneachrow: ${c.noneachrow.mkString(", ")}")
          println(s"noneachrow(0): ${c.noneachrow(0)}")
        for (i <- 0 until 5) {
          for (j <- 0 until 5) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        c.clock.step(100)  
    
    }
}
}
