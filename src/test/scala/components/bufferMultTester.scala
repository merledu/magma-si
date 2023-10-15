package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class bufferMultTester extends AnyFreeSpec with ChiselScalatestTester {
    "buffer multiplication Test" in {
        val DATA_TYPE = 32
        val NUM_IN = 4
        implicit val config = MagmasiConfig()
        test(new buffer_multiplication()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
        val inputData = Seq(1, 2, 3, 4, 5, 6, 7, 8)
        for (i <- 0 until NUM_IN) {
            dut.io.buffer1(i).poke(inputData(i).U)
            dut.io.buffer2(i).poke(inputData(i).U)
        }
        dut.clock.step(3)
        }
    }
}



