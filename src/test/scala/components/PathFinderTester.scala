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
           Seq(0, 0, 0, 0),
            Seq(22, 22, 23, 24),
           Seq(5, 6, 7, 8),
           Seq(0, 0, 0, 0)
        ) 
        val inputData2 = Seq(1, 2, 3, 4)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        dut.io.DataValid.poke(1.B)
        for (i <- 0 until 4){
          dut.io.Streaming_matrix(i).poke(inputData2(i).U)
        }
        dut.io.NoDPE.poke(1.U)
        // dut.clock.step(50)
        // dut.io.DataValid.poke(1.B)  
        dut.clock.step(200)
        
        val inputData3 = Seq(
           Seq(0, 0, 0, 0),
            Seq(1, 2, 3, 4),
           Seq(8, 9, 10, 11),
           Seq(0, 0, 0, 0)
        ) 
        val inputData4 = Seq(2, 1, 6, 7)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.Stationary_matrix(i)(j).poke(inputData3(i)(j).U)
          }
        }
        dut.io.DataValid.poke(1.B)
        dut.io.NoDPE.poke(1.U)
        for (i <- 0 until 4){
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


