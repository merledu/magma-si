package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class SrcDest_TableTester extends AnyFreeSpec with ChiselScalatestTester {
    "Source Dest Table" in {
        implicit val config = MagmasiConfig()
        test(new SrcDest_Table(3,3,8,32)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
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
          dut.io.KM_matrix(i)(j).poke(inputData1(i)(j).U)
          dut.io.NK_matrix(i)(j).poke(inputData2(i)(j).U)
        }
    }
          dut.clock.step(65)
        }
    } 
}
