// package magmasi.components

// import chisel3._
// import chisel3.tester._
// import org.scalatest.FreeSpec
// import chisel3.experimental.BundleLiterals._
// import scala.util.Random

// class DistributionTester extends FreeSpec with ChiselScalatestTester {
//     "Distribution" in {
//                 implicit val config = MagmasiConfig()

//         test(new Distribution) { a =>


//         val inputData = Seq(
//            Seq(0, 1, 0, 1),
//             Seq(2, 3, 3,4),
//            Seq(0, 0, 0, 0),
//            Seq(1, 2, 3, 4)
//         ) 
//             a.io.s.poke(0.U)
//         for (i <- 0 until 2) {
//           for (j <- 0 until 2) {
//             a.io.matrix(i)(j).poke(inputData(i)(j).U)
//           }
//         }
//         // a.io.repeater.poke(0.U)

//             // a.io.in1.poke(1.U)
//             // a.io.in2.poke(1.U)
//              a.clock.step(10)
//              a.io.valid.poke(1.B)
//              a.clock.step(50)
//              //a.io.out.expect(1.U)
//         }
//     }
// }
