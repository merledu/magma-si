package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class SrcDest_TableTester extends AnyFreeSpec with ChiselScalatestTester {
    "Source Dest Table" in {
        implicit val config = MagmasiConfig()
        test(new SrcDest_Table(4,2,2,4,8)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData1 = Seq(
        Seq(1, 2),
        Seq(3, 4),
        Seq(5, 0),
        Seq(6,0)
      ) 
      val inputData2 = Seq(
        Seq(7, 8, 0,0),
        Seq(0, 9, 10,11)
      ) 

      // Assign test values to KM_matrix
      for (i <- 0 until 4) {
        for (j <- 0 until 2) {
          dut.io.KM_matrix(i)(j).poke(inputData1(i)(j).U)
        }
    }
      for (i <- 0 until 2) {
        for (j <- 0 until 4) {
          dut.io.NK_matrix(i)(j).poke(inputData2(i)(j).U)
        }
      }
          dut.clock.step(65)
        }
    } 
}
