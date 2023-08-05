
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MybenesTester extends AnyFreeSpec with ChiselScalatestTester {
    "Benes Test" in {
        implicit val config = MagmasiConfig()
        test(new Mybenes(8,4)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
          val inputData = Seq(1, 2, 2,4)
          for (i <- 0 until 4) {
            dut.io.i_data_bus1(i).poke(inputData(i).U)
          }
          dut.io.i_mux_bus(0).poke("b0000".U)
          dut.io.i_mux_bus(1).poke("b0000".U)
          dut.io.i_mux_bus(2).poke("b0000".U)
          dut.io.i_mux_bus(3).poke("b0000".U)
          val LEVELS   : Int = (2 * (math.log(4) / math.log(2))).toInt + 1
          dut.clock.step(3)
        }
    } 
}