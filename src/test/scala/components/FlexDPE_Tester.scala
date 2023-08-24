
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FlexDPE_Tester extends AnyFreeSpec with ChiselScalatestTester {
    "Flexible Dot Product Engine Test" in {
        implicit val config = MagmasiConfig()
        test(new FlexDPE).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
        c.io.i_data_valid.poke(1.B)
        //c.io.i_data_bus.poke(1100.U)
        c.io.i_stationary.poke(1.B)
        //c.io.i_dest_bus.poke(1.B)
        c.io.i_vn_seperator.poke(1100.U)

            c.clock.step(200)
            //dut.io.o_adder.expect(10.U)

        }
    }
}



