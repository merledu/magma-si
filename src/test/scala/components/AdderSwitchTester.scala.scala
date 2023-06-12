package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class AdderSwitchTester extends AnyFreeSpec with ChiselScalatestTester {
    "Adder Switch Test" in {
        implicit val config = MagmasiConfig()
        test(new AdderSwitch).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
            dut.io.i_data_bus(0).poke(2.U)
            dut.io.i_data_bus(1).poke(5.U)
            dut.io.i_data_bus(2).poke(4.U)
            dut.io.i_data_bus(3).poke(6.U)
            dut.io.i_valid.poke(1.B)
            dut.io.i_add_en.poke(1.B)
            dut.io.i_cmd.poke(5.U)
            dut.io.i_sel.poke(1.U)
            dut.clock.step(2)
            //dut.io.o_adder.expect(10.U)

        }
    }
}

