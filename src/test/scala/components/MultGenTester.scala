
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MultGenTester extends AnyFreeSpec with ChiselScalatestTester {
    "multiplier switch Test" in {
        test(new MultGen){ dut =>

            dut.io.i_valid.poke(1.B)
            dut.io.i_data_bus.poke(12.U)
            dut.io.i_stationary.poke(1.B)

            dut.clock.step(20)
        }
    }
}
// ,,