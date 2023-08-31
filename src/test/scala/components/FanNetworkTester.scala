package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FanNetcomTester extends AnyFreeSpec with ChiselScalatestTester {
    "FanNetcomplete Test" in {
        test(new FanNetworkcom(32,32)){ c =>

            c.io.i_valid.poke(1.U)
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
            c.io.i_data_bus(4).poke(1.U)
            c.io.i_data_bus(5).poke(1.U)
            c.io.i_data_bus(6).poke(1.U)
            c.io.i_data_bus(7).poke(1.U)
            c.io.i_data_bus(8).poke(1.U)
            c.io.i_data_bus(9).poke(1.U)
            c.io.i_data_bus(10).poke(1.U)
            c.io.i_data_bus(11).poke(1.U)
            c.io.i_data_bus(12).poke(1.U)
            c.io.i_data_bus(13).poke(1.U)
            c.io.i_data_bus(14).poke(1.U)
            c.io.i_data_bus(15).poke(1.U)
            c.io.i_data_bus(16).poke(1.U)
            c.io.i_data_bus(17).poke(1.U)
            c.io.i_data_bus(18).poke(1.U)
            c.io.i_data_bus(19).poke(1.U)
            c.io.i_data_bus(20).poke(1.U)
            c.io.i_data_bus(21).poke(1.U)
            c.io.i_data_bus(22).poke(1.U)
            c.io.i_data_bus(23).poke(1.U)
            c.io.i_data_bus(24).poke(1.U)
            c.io.i_data_bus(25).poke(1.U)
            c.io.i_data_bus(26).poke(1.U)
            c.io.i_data_bus(27).poke(1.U)
            c.io.i_data_bus(28).poke(1.U)
            c.io.i_data_bus(29).poke(1.U)
            c.io.i_data_bus(30).poke(1.U)
            c.io.i_data_bus(31).poke(1.U)
            //c.io.i_add_en_bus.poke(2147483647.U)
            //c.io.i_cmd_bus.poke("b101101101101101101101101101101101101101101101101101101101101101101101101101101101101101101101".U)
            //c.io.i_sel_bus.poke(1.U)

            c.clock.step(20)
        }
    }
}


