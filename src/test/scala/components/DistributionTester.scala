package magmasi.components

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._


class DistributionTester extends FreeSpec with ChiselScalatestTester {
    "Chisel Tester file " in {
                implicit val config = MagmasiConfig()

        test(new Distribution) { a =>

        val inputData = Seq(
           Seq(1, 2, 0, 3),
            Seq(4, 0, 1, 2),
           Seq(0, 2, 0, 3),
           Seq(0, 0, 4, 1)
        ) 
            a.io.s.poke(0.U)
        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            println(j)
            a.io.matrix(i)(j).poke(inputData(i)(j).U)
          }
        }
        // a.io.repeater.poke(0.U)

            // a.io.in1.poke(1.U)
            // a.io.in2.poke(1.U)
             a.clock.step(200)
             //a.io.out.expect(1.U)
        }
    }
}
