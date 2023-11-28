
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrol4Tester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        implicit val Config = MagmasiConfig()
        test(new ivncontrol4()){ c =>
    

        val inputData = Seq(

           Seq( 0,0,1),
           Seq( 9,9,9)
                 
        ) 
        val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0

        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }
      c.clock.step(100)
}
}
}
