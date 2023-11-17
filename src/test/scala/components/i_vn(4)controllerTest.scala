
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrol4Tester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        
        test(new ivncontrol4(32,4,5)){ c =>
    

        val inputData = Seq(

           Seq(2, 4),
           Seq(2, 0)      
        ) 

        for (i <- 0 until 2) {
          for (j <- 0 until 2) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }
      c.clock.step(30)
}
}
}
