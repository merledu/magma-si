package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class SrcDest_TableTester extends AnyFreeSpec with ChiselScalatestTester {
    "Source Dest Table" in {
        implicit val config = MagmasiConfig()
        test(new SrcDest_Table(4,4,8,32)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData = Seq(
        Seq(0, 2, 3, 0),
        Seq(5, 6, 7, 0),
        Seq(9, 10, 11, 0),
        Seq(13, 14, 15, 0)
      )

      // Assign test values to KM_matrix
      for (i <- 0 until inputData.length) {
        for (j <- 0 until inputData(i).length) {
          dut.io.KM_matrix(i)(j).poke(inputData(i)(j).U)
          dut.io.NK_matrix(i)(j).poke(inputData(i)(j).U)
        }
    }
          dut.clock.step(65)
        }
    } 
}
