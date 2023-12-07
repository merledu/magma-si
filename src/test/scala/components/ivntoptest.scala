
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivntopTester extends AnyFreeSpec with ChiselScalatestTester {
    "ivntop tester" in {
        implicit val Config = MagmasiConfig()
        test(new ivntop()){ c =>
    

        val inputData = Seq(

          
          Seq(7, 5,4,3,6,7,7,7),
          Seq(7, 7,6,7,3,7,6,7),
          Seq(7, 7,5,7,7,7,7,7),
          Seq(7, 7,4,7,7,7,7,7),
          Seq(7, 7,7,7,7,7,7,7),
          Seq(4, 7,4,4,4,5,6,7),
          Seq(6, 7,4,4,3,2,2,4),
          Seq(2, 7,2,2,2,3,3,4)

        ) 

        val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0

        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }
      c.clock.step(2000)
}
}
}
