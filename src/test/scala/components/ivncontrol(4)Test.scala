
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrol4Tester extends AnyFreeSpec with ChiselScalatestTester {
    "ivn tester" in {
        implicit val Config = MagmasiConfig()
        test(new ivncontrol4()){ c =>
    

        val inputData = Seq(

          
      Seq(2,2),
      Seq(2,2)

        ) 

        val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0

        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }
      c.clock.step(200)
}
}
}
