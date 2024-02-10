
// package magmasi.components

// import chisel3._
// import chisel3.util._
// import chiseltest._ 
// import org.scalatest.freespec.AnyFreeSpec

// class MultSwitchTester extends AnyFreeSpec with ChiselScalatestTester {
//     "multiplier Switch Test" in {
//         test(new MultSwitch()){ dut =>
//             dut.io.i_valid.poke(1.B)
//             dut.io.i_data.poke(2.U)
//             dut.io.i_stationary.poke(1.U)
//             dut.io.o_valid.expect(0.B)
//             dut.io.o_data.expect(0.U)

//             dut.clock.step(2)
//         }
//     }
// }
