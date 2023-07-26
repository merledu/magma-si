package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FanNetworkTester extends AnyFreeSpec with ChiselScalatestTester {
    "Fan Network Test" in {
        implicit val config = MagmasiConfig()
        test(new FanNetwork1).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
            dut.io.i_valid.poke(1.B)
            dut.io.i_data_bus.poke(2123.U)
            dut.io.i_add_en_bus.poke(1.U)
            dut.io.i_cmd_bus.poke(1.U)
            dut.io.i_sel_bus.poke(1.U)
            dut.clock.step(2)
            //dut.io.o_adder.expect(10.U)

        }
    }
}


