package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class TopTester extends AnyFreeSpec with ChiselScalatestTester {
    "FlexDPU tester" in {
        implicit val config = MagmasiConfig()
        test(new Top()){ c =>
         val inputData = Seq(
          Seq(1,1),
          Seq(1, 1),
        
        )
        val inputData2 = Seq(
           Seq(1,3),
            Seq(2,1),
       
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


