package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class flexdpecomtest extends AnyFreeSpec with ChiselScalatestTester {
    "flexdpe Test" in {
        test(new flexdpecom){ c =>

           
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
         
           c.io.i_vn(0).poke("b11111".U)
            c.io.i_vn(1).poke("b11111".U)
            c.io.i_vn(2).poke("b11111".U)
            c.io.i_vn(3).poke("b11111".U)
            c.io.i_vn(4).poke("b11111".U)
            c.io.i_vn(5).poke("b11111".U)
            c.io.i_vn(6).poke("b11111".U)
            c.io.i_vn(7).poke("b11111".U)
            c.io.i_vn(8).poke("b11111".U)
            c.io.i_vn(9).poke("b11111".U)
            c.io.i_vn(10).poke("b11111".U)
            c.io.i_vn(11).poke("b11111".U)

            c.io.i_vn(12).poke("b11111".U)
            c.io.i_vn(13).poke("b11111".U)

            c.io.i_vn(14).poke("b11111".U)
            c.io.i_vn(15).poke("b11111".U)
            c.io.i_vn(16).poke("b11111".U)
            c.io.i_vn(17).poke("b11111".U)
            c.io.i_vn(18).poke("b11111".U)
            c.io.i_vn(19).poke("b11111".U)
            c.io.i_vn(20).poke("b11111".U)
            c.io.i_vn(21).poke("b11111".U)
            c.io.i_vn(22).poke("b11111".U)
            c.io.i_vn(23).poke("b11111".U)
            c.io.i_vn(24).poke("b11111".U)
            c.io.i_vn(25).poke("b11111".U)
            c.io.i_vn(26).poke("b11111".U)
            c.io.i_vn(27).poke("b11111".U)
            c.io.i_vn(28).poke("b11111".U)
            c.io.i_vn(29).poke("b11111".U)
            c.io.i_vn(30).poke("b11111".U)
            c.io.i_vn(31).poke("b11111".U)

            c.io.i_mux_bus(0).poke(1.B)
            c.io.i_mux_bus(1).poke(1.B)
            c.io.i_mux_bus(2).poke(1.B)
            c.io.i_mux_bus(3).poke(1.B)
            c.io.i_mux_bus(4).poke(1.B)
            c.io.i_mux_bus(5).poke(1.B)
            c.io.i_mux_bus(6).poke(1.B)
            c.io.i_mux_bus(7).poke(1.B)
            
            c.io.i_mux_bus(8).poke(1.B)
            c.io.i_mux_bus(9).poke(1.B)
            c.io.i_mux_bus(10).poke(1.B)
            c.io.i_mux_bus(11).poke(1.B)
            
            c.io.i_mux_bus(12).poke(1.B)
            c.io.i_mux_bus(13).poke(1.B)
            c.io.i_mux_bus(14).poke(1.B)
            c.io.i_mux_bus(15).poke(1.B)
            
            c.io.i_mux_bus(16).poke(1.B)
            c.io.i_mux_bus(17).poke(1.B)
            c.io.i_mux_bus(18).poke(1.B)
            c.io.i_mux_bus(19).poke(1.B)
            
            c.io.i_mux_bus(20).poke(1.B)
            c.io.i_mux_bus(21).poke(1.B)
            c.io.i_mux_bus(22).poke(1.B)
            c.io.i_mux_bus(23).poke(1.B)
            
            c.io.i_mux_bus(24).poke(1.B)
            c.io.i_mux_bus(25).poke(1.B)
            c.io.i_mux_bus(26).poke(1.B)
            c.io.i_mux_bus(27).poke(1.B)
            
            c.io.i_mux_bus(28).poke(1.B)
            c.io.i_mux_bus(29).poke(1.B)
            c.io.i_mux_bus(30).poke(1.B)
            c.io.i_mux_bus(31).poke(1.B)
            
           
            

            
             
             c.io.i_stationary.poke(1.B)
             c.io.i_data_valid.poke(1.B)

            c.clock.step(20)
            
        
        }
    }
}