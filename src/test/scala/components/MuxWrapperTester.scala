
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MuxWrapperTester extends AnyFreeSpec with ChiselScalatestTester {
    "Mux Wrapper" in {
        implicit val config = MagmasiConfig()
        test(new MuxesWrapper()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
          val inputData = Seq(2,2,3,3)
          for (i <- 0 until 4) {
            dut.io.src(i).poke(inputData(i).U)
            //dut.io.i_data_bus2(i).poke(inputData(i).U)
          }
          dut.io.valid.poke(1.B)
          dut.io.muxes(0).poke(10.U)
          dut.io.muxes(1).poke(8.U)
          dut.io.muxes(2).poke(11.U)
          dut.io.muxes(3).poke(3.U)
          val LEVELS   : Int = (2 * (math.log(4) / math.log(2))).toInt + 1
          dut.clock.step(50)
        }
    } 
}

