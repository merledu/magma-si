// package magmasi.components

// import chisel3._
// import chisel3.util._
// import chiseltest._ 
// import org.scalatest.freespec.AnyFreeSpec

// class FanNetworkTester extends AnyFreeSpec with ChiselScalatestTester {
//     "Fan Network Test" in {
//         implicit val config = MagmasiConfig()
//         test(new FanNetworkcom(32,32)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
//       c.io.i_valid.poke(true.B)
//       c.io.i_data_bus.poke(421111111.U)
//       c.io.i_add_en_bus.poke(10.U)
//       c.io.i_cmd_bus.poke(3.U)
//       c.io.i_sel_bus.poke(5.U)
//             c.clock.step(200)
//             //dut.io.o_adder.expect(10.U)

//         }
//     }
// }


