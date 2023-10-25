package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class PathFinderTester extends AnyFreeSpec with ChiselScalatestTester {
    "path finder tester" in {
        implicit val config = MagmasiConfig()
        test(new PathFinder()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

        val inputData = Seq(
           Seq(1, 7, 2, 0),
            Seq(3, 4, 1, 0),
           Seq(2, 0, 4, 0),
           Seq(1, 2, 3, 0)
        ) 
        val inputData2 = Seq(1, 2, 3, 0,1)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }

        dut.clock.step(500)  
    
        val input3 = Seq(
          Seq(8, 0,0, 1),
          Seq(2, 0, 0, 3),
          Seq(4, 0, 0, 5),
          Seq(6, 0, 0, 7)
        )  
        val inputData4 = Seq(1, 0, 0, 4,1)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(input3(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.Streaming_matrix(i).poke(inputData4(i).U)
        }
    
        dut.clock.step(400)
    
        val input5 = Seq(
          Seq(0, 8,0, 0),
          Seq(0, 9, 0, 0),
          Seq(0, 10, 0, 0),
          Seq(0, 11, 0, 0)
        ) 
        val inputData6 = Seq(0, 7, 0, 0)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(input5(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.Streaming_matrix(i).poke(inputData6(i).U)
        }
        dut.clock.step(100)
        }
    } 
}


