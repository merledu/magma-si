package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class RegorTester extends AnyFreeSpec with ChiselScalatestTester {
    "Temporary Register step 3 Table" in {
        implicit val config = MagmasiConfig()
        test(new Regor(2,2,32)).withAnnotations  (Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData = Seq(
        Seq(0, 1, 3, 1),
        Seq(0, 0, 7, 0),
        Seq(9, 10, 11, 0),
        Seq(1, 2, 3, 0)
      ) 
        val inputData1 = Seq(
        Seq(1, 2, 0, 0),
        Seq(5, 6, 7, 0),
        Seq(9, 0, 0, 11),
        Seq(0, 0, 0, 0)
      )


      // Assign test values to KM_matrix
      for (i <- 0 until 2) {
        for (j <- 0 until 2) {
          dut.io.mat1(i)(j).poke(inputData(i)(j).U)
          dut.io.mat2(i)(j).poke(inputData1(i)(j).U)
        }
    }
          dut.clock.step(65)
        }
    } 
}

