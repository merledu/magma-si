
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MybenesTester extends AnyFreeSpec with ChiselScalatestTester {
    "Benes Test" in {
        implicit val config = MagmasiConfig()
        test(new Benes3()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
          val inputData = Seq(1,0,0,0)
          for (i <- 0 until 4) {
            dut.io.i_data_bus2(i).poke(inputData(i).U)
            //dut.io.i_data_bus2(i).poke(inputData(i).U)
          }

          dut.io.i_mux_bus(0)(0).poke(0.U)
          dut.io.i_mux_bus(0)(1).poke(8.U)
          dut.io.i_mux_bus(0)(2).poke(11.U)
          dut.io.i_mux_bus(0)(3).poke(3.U)
          val LEVELS   : Int = (2 * (math.log(4) / math.log(2))).toInt + 1
          dut.clock.step(50)
        }
    } 
}
