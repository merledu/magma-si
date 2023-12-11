package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FlexDPUTester extends AnyFreeSpec with ChiselScalatestTester {
    "FlexDPU tester" in {
        implicit val config = MagmasiConfig()
        test(new FlexDPU()){ c =>
val inputData = Seq(
          Seq(11,12,0,0),
          Seq(3, 4, 0, 0),
            Seq(0, 0, 0, 0),
            Seq(0,0,0,0)
        )
        val inputData2 = Seq(
           Seq(2,6,0,0),
            Seq(1,9,0,0,0),
           Seq(0,0,0,0,0),
           Seq(0,0,0,0,0)
        ) 
        for ( i <- 0 until 2){
          for ( j <- 0 until 2){
              c.io.Streaming_matrix(i)(j).poke(inputData2(i)(j).U)
          }
        }
        for ( i <- 0 until config.MaxRows){
          for ( j <- 0 until config.MaxCols){
              c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        c.clock.step(400)
    }
  }
}

