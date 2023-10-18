package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class SourceDestinationTester extends AnyFreeSpec with ChiselScalatestTester {
    "Source Dest Table" in {
        implicit val config = MagmasiConfig()
        test(new SourceDestination()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      val inputData = Seq(
        Seq(0, 2, 3, 0),
        Seq(5, 6, 7, 0),
        Seq(9, 10, 11, 0),
        Seq(13, 14, 15, 0)
      )
      val inputData2 = Seq(0,1,1,0,1,1,1,1,1)

      // Assign test values to KM_matrix
      for (i <- 0 until inputData.length) {
        for (j <- 0 until inputData(i).length) {
          dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
        }
    }
        for (i <- 0 until 4){
            dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }
          dut.clock.step(65)
        }
    } 
}

