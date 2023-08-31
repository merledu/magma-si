
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MultGenTester extends AnyFreeSpec with ChiselScalatestTester {
    "multiplier switch Test" in {
        test(new MultGen){ c =>

            c.io.i_valid.poke(1.B)
             c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(2.U)
            c.io.i_data_bus(2).poke(4.U)
            c.io.i_data_bus(3).poke(6.U)
            c.io.i_stationary.poke(1.B)

            c.clock.step(20)
        }
    }
}
// ,,
