
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrol4Tester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        
        test(new ivncontrol4(32,4,5)){ c =>
    

        val inputData = Seq(

           Seq(0, 1,0,1),
           Seq(2, 0,0,4)      
        ) 

        val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0

        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }
      c.clock.step(30)
}
}
}
