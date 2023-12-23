package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FlexDPUTester extends AnyFreeSpec with ChiselScalatestTester {
    "FlexDPU tester" in {
        implicit val config = MagmasiConfig()
        test(new FlexDPUby2()){ c =>
val inputData = Seq(
          Seq(11,12,13,14),
          Seq(3, 4, 5, 6),
            Seq(7, 8, 9, 10),
            Seq(21,22,23,25)
        )
        val inputData2 = Seq(
           Seq(2,6,0,0),
            Seq(1,9,0,0,0),
           Seq(6,3,0,0,0),
           Seq(7,1,0,0,0)
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
        //c.io.CalFDE.poke(2.U)
        c.clock.step(400)
    }
  }
}

