package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class fancontrol4test extends AnyFreeSpec with ChiselScalatestTester {
    "Fancontrol4 Test" in {
        test(new fancontrol4(32,4,5)){ c =>
            c.io.i_vn(0).poke("b11111".U)
            c.io.i_vn(1).poke("b11110".U)
            c.io.i_vn(2).poke("b11110".U)
            c.io.i_vn(3).poke("b11111".U)
          

            
             
             c.io.i_stationary.poke(0.B)
             c.io.i_data_valid.poke(1.B)

           
            c.clock.step(20)
        }
    }
}


