package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FanNet4Tester extends AnyFreeSpec with ChiselScalatestTester {
    "FanNetcomplete Test" in {
        test(new Fan4(4,32)){ c =>

            c.io.i_valid.poke(1.U)


            c.io.i_data_bus(0).poke(2.U)
            c.io.i_data_bus(1).poke(2.U)
            c.io.i_data_bus(2).poke(2.U)
            c.io.i_data_bus(3).poke(2.U)
            c.io.i_add_en_bus(0).poke(1.U)
            c.io.i_add_en_bus(1).poke(1.U)
            c.io.i_add_en_bus(2).poke(1.U)
        
            //c.io.i_sel_bus.poke(2.U)

            c.clock.step(20)
  

            


        }
    }
}
