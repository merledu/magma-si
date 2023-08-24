
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FanCtrlTester extends AnyFreeSpec with ChiselScalatestTester {
    "Fan Control Test" in {
        implicit val config = MagmasiConfig()
        test(new FanCtrl(32,32,5)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.io.i_vn.poke(1100.U)
      c.io.i_stationary.poke(1.B)
      c.io.i_data_valid.poke(1.B)

            c.clock.step(200)
            //dut.io.o_adder.expect(10.U)

        }
    }
}


