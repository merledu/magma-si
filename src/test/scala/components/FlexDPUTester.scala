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
          Seq(11,12),
          Seq(3, 4),
        
        )
        val inputData2 = Seq(
           Seq(0,0),
            Seq(1,2),
       
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

