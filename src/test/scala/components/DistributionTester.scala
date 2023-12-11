package magmasi.components

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._
import scala.util.Random

class DistributionTester extends FreeSpec with ChiselScalatestTester {
    "Distribution" in {
                implicit val config = MagmasiConfig()

        test(new Distribution2) { a =>


        val inputData = Seq(
           Seq(1, 0, 0, 0),
            Seq(2, 0, 3,0),
           Seq(0, 0, 4, 0),
           Seq(1, 2, 3, 4)
        ) 
            a.io.s.poke(0.U)
            a.io.valid.poke(1.B)
        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            a.io.matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
             a.clock.step(200)


          val inputData2 = Seq(
           Seq(1, 0, 0, 0),
            Seq(2, 0, 0,0),
           Seq(3, 0, 0, 0),
           Seq(4, 0, 0, 0)
        )
            a.io.s.poke(0.U)
            a.io.valid.poke(1.B)
        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            a.io.matrix(i)(j).poke(inputData2(i)(j).U)
          }
        }
             a.clock.step(200)
        


        }
    }
}
