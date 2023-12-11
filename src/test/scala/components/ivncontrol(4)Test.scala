
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

          
         Seq(711, 0,11,3,6,7,7,7),
          Seq(7, 7,6,7,3,7,6,7),
          Seq(7, 7,5,7,7,7,7,7),
          Seq(7, 7,4,7,7,7,7,7),
          Seq(7, 7,7,7,7,7,7,7),
          Seq(4, 7,4,4,4,5,6,7),
          Seq(6, 7,4,4,3,2,2,4),
          Seq(0, 0,0,0,0,0,0,1)

        ) 

        val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0

        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
          c.io.validpin.poke(1.B)
    
    }
      c.clock.step(200)
}
}
}
