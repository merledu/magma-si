package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class flexdpecom2test extends AnyFreeSpec with ChiselScalatestTester {
    "flexdpe Test" in {
        test(new flexdpecom2){ c =>

           // for input data base 1
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
          // for input data bus 2
            c.io.i_data_bus2(0).poke(0.U)
            c.io.i_data_bus2(1).poke(2.U)
            c.io.i_data_bus2(2).poke(2.U)
            c.io.i_data_bus2(3).poke(0.U)


          // for i vn
            c.io.i_vn(3).poke("b11101".U)
            c.io.i_vn(4).poke("b11101".U)

            c.io.i_vn(7).poke("b10111".U)
            c.io.i_vn(8).poke("b10111".U)

            c.io.i_vn(11).poke("b01111".U)
            c.io.i_vn(12).poke("b01111".U)

            c.io.i_vn(15).poke("b11110".U)
            c.io.i_vn(16).poke("b11110".U)

            c.io.i_vn(23).poke("b11111".U)
            c.io.i_vn(24).poke("b11111".U)

            c.io.i_vn(18).poke("b11111".U)
            c.io.i_vn(13).poke("b11000".U)

          // for muxes
            c.io.i_mux_bus(576).poke(1.B)
            c.io.i_mux_bus(579).poke(1.B)

          // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)

        c.clock.step(20)
           // for input data base 1
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
          // for input data bus 2
            c.io.i_data_bus2(0).poke(0.U)
            c.io.i_data_bus2(1).poke(3.U)
            c.io.i_data_bus2(2).poke(3.U)
            c.io.i_data_bus2(3).poke(0.U)

          // for i vn
            c.io.i_vn(3).poke("b11101".U)
            c.io.i_vn(4).poke("b11101".U)

            c.io.i_vn(7).poke("b10111".U)
            c.io.i_vn(8).poke("b10111".U)

            c.io.i_vn(11).poke("b01111".U)
            c.io.i_vn(12).poke("b01111".U)

            c.io.i_vn(15).poke("b11110".U)
            c.io.i_vn(16).poke("b11110".U)

            c.io.i_vn(23).poke("b11111".U)
            c.io.i_vn(24).poke("b11111".U)

            c.io.i_vn(18).poke("b11111".U)
            c.io.i_vn(13).poke("b11000".U)

          // for muxes
            c.io.i_mux_bus(576).poke(1.B)
            c.io.i_mux_bus(579).poke(1.B)

          // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)
            
        c.clock.step(40)
    }
  }
}
