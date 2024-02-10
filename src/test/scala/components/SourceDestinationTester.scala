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
          Seq(1, 2),
          Seq(5, 6)

        )
        val inputData2 = Seq(1,2,1,0,1)

        for (i <- 0 until 2) {
          for (j <- 0 until 2) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
      
        for (i <- 0 until 2){
          dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }
      
        dut.clock.step(65)
        dut.io.start.poke(1.B)
        // val inputData3 = Seq(
        //   Seq(0, 0, 0, 1),
        //   Seq(0, 0, 0, 2),
        //   Seq(0, 0, 0, 3),
        //   Seq(0, 0, 0, 4)
        // )
        val inputData4 = Seq(0,1,1,0,1,1,1,1,1)

        // for (i <- 0 until inputData.length) {
        //   for (j <- 0 until inputData(i).length) {
        //     dut.io.Stationary_matrix(i)(j).poke(inputData3(i)(j).U)
        //   }
        // }
        
        for (i <- 0 until 2){
          dut.io.Streaming_matrix(i).poke(inputData4(i).U)
        }
        dut.clock.step(65)


      }
    } 
}

