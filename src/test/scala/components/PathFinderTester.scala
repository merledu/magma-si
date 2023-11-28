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
        val inputData2 = Seq(1, 2, 3, 0)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        dut.io.DataValid.poke(1.B)
        for (i <- 0 until 4){
          dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }
        dut.io.NoDPE.poke(2.U)
        // dut.clock.step(50)
        // dut.io.DataValid.poke(1.B)  
        dut.clock.step(500)
    

    
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


