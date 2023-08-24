package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class BitmapTester extends AnyFreeSpec with ChiselScalatestTester {
    "Bitmap Table" in {
        implicit val config = MagmasiConfig()
        test(new Bitmap(4,4,32)).withAnnotations  (Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData = Seq(
        Seq(0, 2, 3, 0),
        Seq(5, 6, 7, 0),
        Seq(9, 10, 11, 0),
        Seq(13, 14, 15, 0)
      ) 


      // Assign test values to KM_matrix
      for (i <- 0 until 4) {
        for (j <- 0 until 4) {
          dut.io.mat1(i)(j).poke(inputData(i)(j).U)
          dut.io.mat2(i)(j).poke(inputData(i)(j).U)
        }
    }
          dut.clock.step(65)
        }
    } 
}
