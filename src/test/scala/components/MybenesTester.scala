
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MybenesTester extends AnyFreeSpec with ChiselScalatestTester {
    "My Benes Test" in {
        implicit val config = MagmasiConfig()
        test(new Mybenes(8,8)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

            
            val inputData = Seq(1, 2, 3, 4, 5, 6, 7, 8)

      // Connect input data to the DUT
      for (i <- 0 until 8) {
        dut.io.i_data_bus1(i).poke(inputData(i).U)
      }


        dut.io.i_mux_bus(0).poke(3.U)
        dut.io.i_mux_bus(1).poke(3.U)
        dut.io.i_mux_bus(2).poke(3.U)
        dut.io.i_mux_bus(3).poke(3.U)
        val LEVELS   : Int = (2 * (math.log(4) / math.log(2))).toInt + 1





      dut.clock.step(3)



    }
  }
}