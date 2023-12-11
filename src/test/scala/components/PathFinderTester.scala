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
           Seq(41, 37, 0, 0),
            Seq(43, 34, 0, 0),
           Seq(0, 0, 0, 0),
           Seq(0, 0, 0, 0)
        ) 
        val inputData2 = Seq(11, 17, 0, 0)

        for (i <- 0 until 2) {
          for (j <- 0 until 2) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }

        for (i <- 0 until 2){
          dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }
        // dut.clock.step(50)
        // dut.io.DataValid.poke(1.B)  
        dut.clock.step(200)
        
        val inputData3 = Seq(
           Seq(41, 47, 0, 0),
            Seq(43, 34, 0, 0),
           Seq(0, 0, 0, 0),
           Seq(0, 0, 0, 0)
        ) 
        val inputData4 = Seq(4, 13, 0, 0)

        for (i <- 0 until 2) {
          for (j <- 0 until 2) {
            dut.io.Stationary_matrix(i)(j).poke(inputData3(i)(j).U)
          }
        }
        for (i <- 0 until 2){
          dut.io.Streaming_matrix(i).poke(inputData4(i).U)
        }
        dut.clock.step(200)
    

    
        // val input5 = Seq(
        //   Seq(0, 8,0, 0),
        //   Seq(0, 9, 0, 0),
        //   Seq(0, 10, 0, 0),
        //   Seq(0, 11, 0, 0)
        // ) 
        // val inputData6 = Seq(0, 7, 0, 0)

        // for (i <- 0 until 4) {
        //   for (j <- 0 until 4) {
        //     dut.io.Stationary_matrix(i)(j).poke(input5(i)(j).U)
        //   }
        // }

        // for (i <- 0 until 4){
        //   dut.io.Streaming_matrix(i).poke(inputData6(i).U)
        // }
        // dut.clock.step(100)
        }
    } 
}


