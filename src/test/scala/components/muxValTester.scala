
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class muxValTester extends AnyFreeSpec with ChiselScalatestTester {
    "muxes values Table" in {
        implicit val config = MagmasiConfig()
        test(new muxesVal(3,3,8,32)).withAnnotations  (Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData1 = Seq(
        Seq(0, 0, 0),
        Seq(1, 2, 0),
        Seq(4, 5, 0)
      ) 
      val inputData2 = Seq(
        Seq(0, 6, 7),
        Seq(8, 9, 10),
        Seq(0, 0, 0)
      ) 
      // Assign test values to KM_matrix
      for (i <- 0 until 3) {
        for (j <- 0 until 3) {
          dut.io.mat1(i)(j).poke(inputData1(i)(j).U)
          dut.io.mat2(i)(j).poke(inputData2(i)(j).U)
        }
    }
          dut.clock.step(500)
        }
    } 
}

