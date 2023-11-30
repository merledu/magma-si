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
           Seq(0, 0, 0, 0),
            Seq(3, 4, 1, 2),
           Seq(2, 5, 4, 8),
           Seq(0, 0, 0, 0)
        ) 
        val inputData2 = Seq(
           Seq(2,0, 0, 0),
            Seq(1, 0, 0, 0),
           Seq(6, 0, 0, 0),
           Seq(7, 0, 0, 0)
        ) 
        for ( i <- 0 until config.MaxRows){
          for ( j <- 0 until config.MaxCols){
              c.io.Streaming_matrix(i)(j).poke(inputData2(i)(j).U)
          }
        }
        for ( i <- 0 until config.MaxRows){
          for ( j <- 0 until config.MaxCols){
              c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        c.io.CalFDE.poke(2.U)
        c.clock.step(400)
    }
  }
}

