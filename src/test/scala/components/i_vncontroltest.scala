package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ivncontrolTester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        
        test(new ivncontrol()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

        val inputData = Seq(
           Seq(1, 7, 2, 0),
            Seq(3, 4, 1, 0),
           Seq(2, 0, 4, 0),
           Seq(1, 2, 3, 0)
        ) 
     

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
    }
}
}
