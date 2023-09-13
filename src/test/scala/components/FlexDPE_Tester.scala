package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class flexdpecom2test extends AnyFreeSpec with ChiselScalatestTester {
    "flexdpe Test" in {
        test(new flexdpecom2){ c =>

           
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
            c.io.i_data_bus2(0).poke(2.U)
            c.io.i_data_bus2(1).poke(2.U)
            c.io.i_data_bus2(2).poke(0.U)
            c.io.i_data_bus2(3).poke(0.U)
            // c.io.i_data_bus(4).poke(2.U)
            // c.io.i_data_bus(5).poke(2.U)
            // c.io.i_data_bus(6).poke(2.U)
            // c.io.i_data_bus(7).poke(2.U)
            // c.io.i_data_bus(8).poke(2.U)
            // c.io.i_data_bus(9).poke(2.U)
            // c.io.i_data_bus(10).poke(2.U)
            // c.io.i_data_bus(11).poke(2.U)
            // c.io.i_data_bus(12).poke(2.U)
            // c.io.i_data_bus(13).poke(2.U)
            // c.io.i_data_bus(14).poke(2.U)
            // c.io.i_data_bus(15).poke(2.U)
            // c.io.i_data_bus(16).poke(2.U)
            // c.io.i_data_bus(17).poke(2.U)
            // c.io.i_data_bus(18).poke(2.U)
            // c.io.i_data_bus(19).poke(2.U)
            // c.io.i_data_bus(20).poke(2.U)
            // c.io.i_data_bus(21).poke(2.U)
            // c.io.i_data_bus(22).poke(2.U)
            // c.io.i_data_bus(23).poke(2.U)
            // c.io.i_data_bus(24).poke(2.U)
            // c.io.i_data_bus(25).poke(2.U)
            // c.io.i_data_bus(26).poke(2.U)
            // c.io.i_data_bus(27).poke(2.U)
            // c.io.i_data_bus(28).poke(2.U)
            // c.io.i_data_bus(29).poke(2.U)
            // c.io.i_data_bus(30).poke(2.U)
            // c.io.i_data_bus(31).poke(2.U)
         
            // c.io.i_data_bus2(0).poke(2.U)
            // c.io.i_data_bus2(1).poke(2.U)
            // c.io.i_data_bus2(2).poke(2.U)
            // c.io.i_data_bus2(3).poke(2.U)
            // c.io.i_data_bus2(4).poke(2.U)
            // c.io.i_data_bus2(5).poke(2.U)
            // c.io.i_data_bus2(6).poke(2.U)
            // c.io.i_data_bus2(7).poke(2.U)
            // c.io.i_data_bus2(8).poke(2.U)
            // c.io.i_data_bus2(9).poke(2.U)
            // c.io.i_data_bus2(10).poke(2.U)
            // c.io.i_data_bus2(11).poke(2.U)
            // c.io.i_data_bus2(12).poke(2.U)
            // c.io.i_data_bus2(13).poke(2.U)
            // c.io.i_data_bus2(14).poke(2.U)
            // c.io.i_data_bus2(15).poke(2.U)
            // c.io.i_data_bus2(16).poke(2.U)
            // c.io.i_data_bus2(17).poke(2.U)
            // c.io.i_data_bus2(18).poke(2.U)
            // c.io.i_data_bus2(19).poke(2.U)
            // c.io.i_data_bus2(20).poke(2.U)
            // c.io.i_data_bus2(21).poke(2.U)
            // c.io.i_data_bus2(22).poke(2.U)
            // c.io.i_data_bus2(23).poke(2.U)
            // c.io.i_data_bus2(24).poke(2.U)
            // c.io.i_data_bus2(25).poke(2.U)
            // c.io.i_data_bus2(26).poke(2.U)
            // c.io.i_data_bus2(27).poke(2.U)
            // c.io.i_data_bus2(28).poke(2.U)
            // c.io.i_data_bus2(29).poke(2.U)
            // c.io.i_data_bus2(30).poke(2.U)
            // c.io.i_data_bus2(31).poke(2.U)

          //c.io.i_vn(0).poke("b11111".U)
            //c.io.i_vn(1).poke("b11111".U)
            // //c.io.i_vn(2).poke("b11101".U)
            //  c.io.i_vn(3).poke("b11101".U)
            //  c.io.i_vn(4).poke("b11101".U)
            // // c.io.i_vn(5).poke("b11111".U)
            // // c.io.i_vn(6).poke("b11111".U)
            //  c.io.i_vn(7).poke("b11111".U)
            // c.io.i_vn(8).poke("b11111".U)
            // // c.io.i_vn(9).poke("b11111".U)
            // // c.io.i_vn(10).poke("b11111".U)
            // c.io.i_vn(11).poke("b01111".U)
            // c.io.i_vn(12).poke("b01111".U)
            // // c.io.i_vn(13).poke("b11111".U)

            //  //c.io.i_vn(14).poke("b11111".U)
            //  c.io.i_vn(15).poke("b11110".U)
            // c.io.i_vn(16).poke("b11110".U)
            // // c.io.i_vn(17).poke("b11111".U)
            // c.io.i_vn(18).poke("b11111".U)
            // // c.io.i_vn(19).poke("b11111".U)
            // // c.io.i_vn(20).poke("b11111".U)
            // // c.io.i_vn(21).poke("b11111".U)
            // // c.io.i_vn(22).poke("b11111".U)
            //  c.io.i_vn(23).poke("b11111".U)
            //  c.io.i_vn(24).poke("b11111".U)
            // c.io.i_vn(25).poke("b11111".U)
            // c.io.i_vn(26).poke("b11111".U)
            // c.io.i_vn(27).poke("b11111".U)
            // c.io.i_vn(28).poke("b11111".U)
            // c.io.i_vn(29).poke("b11111".U)
            // c.io.i_vn(30).poke("b11111".U)


           c.io.i_mux_bus(0).poke(0.B) //V
           c.io.i_mux_bus(1).poke(0.B) //D

           c.io.i_mux_bus(2).poke(0.B)
           c.io.i_mux_bus(3).poke(0.B)

           c.io.i_mux_bus(4).poke(0.B)
           c.io.i_mux_bus(5).poke(0.B)

           c.io.i_mux_bus(24).poke(1.B)

           c.io.i_mux_bus(6).poke(0.B)
           c.io.i_mux_bus(7).poke(0.B)

          c.io.i_mux_bus(8).poke(0.B)
          c.io.i_mux_bus(9).poke(0.B)

          c.io.i_mux_bus(10).poke(0.B)
          c.io.i_mux_bus(11).poke(0.B)

          c.io.i_mux_bus(25).poke(1.B)

          c.io.i_mux_bus(12).poke(0.B)
          c.io.i_mux_bus(13).poke(0.B)

          c.io.i_mux_bus(14).poke(1.B)
          c.io.i_mux_bus(15).poke(0.B)

          c.io.i_mux_bus(16).poke(0.B)
          c.io.i_mux_bus(17).poke(0.B)

          c.io.i_mux_bus(26).poke(0.B)

        c.io.i_mux_bus(18).poke(0.B)
          c.io.i_mux_bus(19).poke(0.B)

          c.io.i_mux_bus(20).poke(0.B)
          c.io.i_mux_bus(21).poke(0.B)

          c.io.i_mux_bus(22).poke(0.B)
          c.io.i_mux_bus(23).poke(0.B)

          c.io.i_mux_bus(27).poke(1.B)

          // c.io.i_mux_bus(0).poke(1.B)
          //   c.io.i_mux_bus(1).poke(1.B)
          //   c.io.i_mux_bus(2).poke(1.B)
          //   c.io.i_mux_bus(3).poke(1.B)
          //   c.io.i_mux_bus(4).poke(1.B)
          //   c.io.i_mux_bus(5).poke(1.B)
          //   c.io.i_mux_bus(6).poke(1.B)
          //   c.io.i_mux_bus(7).poke(1.B)
            
          //   c.io.i_mux_bus(8).poke(1.B)
          //   c.io.i_mux_bus(9).poke(1.B)
          //   c.io.i_mux_bus(10).poke(1.B)
          //   c.io.i_mux_bus(11).poke(1.B)
            
          //   c.io.i_mux_bus(12).poke(1.B)
          //   c.io.i_mux_bus(13).poke(1.B)
          //   c.io.i_mux_bus(14).poke(1.B)
          //   c.io.i_mux_bus(15).poke(1.B)
            
          //   c.io.i_mux_bus(16).poke(1.B)
          //   c.io.i_mux_bus(17).poke(1.B)
          //   c.io.i_mux_bus(18).poke(1.B)
          //   c.io.i_mux_bus(19).poke(1.B)
            
          //   c.io.i_mux_bus(20).poke(1.B)
          //   c.io.i_mux_bus(21).poke(1.B)
          //   c.io.i_mux_bus(22).poke(1.B)
          //   c.io.i_mux_bus(23).poke(1.B)
            
          //   c.io.i_mux_bus(24).poke(1.B)
          //   c.io.i_mux_bus(25).poke(1.B)
          //   c.io.i_mux_bus(26).poke(1.B)
          //   c.io.i_mux_bus(27).poke(1.B)
            
          //   c.io.i_mux_bus(28).poke(1.B)
          //   c.io.i_mux_bus(29).poke(1.B)
          //   c.io.i_mux_bus(30).poke(1.B)
          //   c.io.i_mux_bus(31).poke(1.B)
            


            
           
            

            
             
        c.io.i_stationary.poke(1.B)
        c.io.i_data_valid.poke(1.B)

        c.clock.step(20)

         c.io.i_data_bus(0).poke(5.U)
            c.io.i_data_bus(1).poke(5.U)
            c.io.i_data_bus(2).poke(5.U)
            c.io.i_data_bus(3).poke(5.U)
            c.io.i_data_bus2(0).poke(3.U)
            c.io.i_data_bus2(1).poke(3.U)
              c.io.i_data_bus2(2).poke(0.U)
            c.io.i_data_bus2(3).poke(0.U)

            //  c.io.i_vn(3).poke("b11101".U)
            //  c.io.i_vn(4).poke("b11101".U)

            // c.io.i_vn(7).poke("b11111".U)
            // c.io.i_vn(8).poke("b11111".U)

            //  c.io.i_vn(11).poke("b01111".U)
            // c.io.i_vn(12).poke("b01111".U)

            //  c.io.i_vn(15).poke("b11110".U)
            // c.io.i_vn(16).poke("b11110".U)

            //  c.io.i_vn(23).poke("b11111".U)
            //  c.io.i_vn(24).poke("b11111".U)

            // c.io.i_vn(18).poke("b11111".U)
            // // c.io.i_vn(19).poke("b11111".U)


          c.io.i_mux_bus(0).poke(0.B) //V
           c.io.i_mux_bus(1).poke(0.B) //D

           c.io.i_mux_bus(2).poke(0.B)
           c.io.i_mux_bus(3).poke(0.B)

           c.io.i_mux_bus(4).poke(0.B)
           c.io.i_mux_bus(5).poke(0.B)

           c.io.i_mux_bus(24).poke(1.B)

           c.io.i_mux_bus(6).poke(0.B)
           c.io.i_mux_bus(7).poke(0.B)

          c.io.i_mux_bus(8).poke(0.B)
          c.io.i_mux_bus(9).poke(0.B)

          c.io.i_mux_bus(10).poke(0.B)
          c.io.i_mux_bus(11).poke(0.B)

          c.io.i_mux_bus(25).poke(1.B)

          c.io.i_mux_bus(12).poke(0.B)
          c.io.i_mux_bus(13).poke(0.B)

          c.io.i_mux_bus(14).poke(1.B)
          c.io.i_mux_bus(15).poke(0.B)

          c.io.i_mux_bus(16).poke(0.B)
          c.io.i_mux_bus(17).poke(0.B)

          c.io.i_mux_bus(26).poke(0.B)

        c.io.i_mux_bus(18).poke(0.B)
          c.io.i_mux_bus(19).poke(0.B)

          c.io.i_mux_bus(20).poke(0.B)
          c.io.i_mux_bus(21).poke(0.B)

          c.io.i_mux_bus(22).poke(0.B)
          c.io.i_mux_bus(23).poke(0.B)

          c.io.i_mux_bus(27).poke(1.B)

            
        c.io.i_stationary.poke(1.B)
        c.io.i_data_valid.poke(1.B)

          c.clock.step(40)
            
        
        }
    }
}
