package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPU(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val CalFDE = Input(UInt(32.W))
        val i_vn = Input(Vec(config.NUM_PES, UInt(config.LOG2_PES.W)))
        val i_stationary = Input(Bool())
        val i_data_valid = Input(Bool())
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        //val Third_matrix = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    })

    val used_FlexDPE = Reg(Vec(config.NoOfFDPE, UInt(32.W)))
    dontTouch(used_FlexDPE)

    val equalDistribution = io.CalFDE / config.NoOfFDPE.U
    val remainingDistribution = io.CalFDE % config.NoOfFDPE.U

    val equalArray = VecInit(Seq.fill(config.NoOfFDPE)(equalDistribution))


    for (i <- 0 until config.NoOfFDPE) {
      used_FlexDPE(i) := Mux(i.U < remainingDistribution, equalArray(i) + 1.U, equalArray(i))
    }

    val PathFInder = Module(new PathFinder())
    PathFInder.io.Stationary_matrix := io.Stationary_matrix


    val i = RegInit(0.U(32.W))
    val mat2_column = WireInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))
    for (j <- 0 until config.MaxRows){
      mat2_column(j) := io.Streaming_matrix(j)(i)
    }
    PathFInder.io.Streaming_matrix := mat2_column
    val a = Wire(UInt(config.DATA_TYPE.W))
    a := io.Streaming_matrix(0)(0)
    dontTouch(a)

    val mux = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val src = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val dest = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    dontTouch(mux)
    dontTouch(src)
    dontTouch(dest)
    when (PathFInder.io.PF_Valid === 1.B){
      for (i <- 0 until config.MaxRows*config.MaxCols){
          mux(i) := PathFInder.io.i_mux_bus(i)
          src(i) := PathFInder.io.Source(i)
          dest(i) := PathFInder.io.destination(i)
        }
      }
    


    





































    // for (i <- 0 until config.NoOfFDPE){

    // }
//     val Modules = Seq.fill(config.NoOfFDPE)(Module(new flexdpecom2()))

// //     for (i <- 0 until (2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES)){
// //    Modules(0).io.i_mux_bus(i) := 0.B
// //   }
// //       for (i <- 0 until (2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES)){
// //    Modules(1).io.i_mux_bus(i) := 0.B
// //   }VecInit(0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U)
//     val r_mux_bus_ff    = RegInit(VecInit(Seq.fill(2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES)(true.B)))

//     for (i <- 0 until config.NoOfFDPE) {
//         Modules(i).io.i_data_valid := io.i_data_valid
//         Modules(i).io.i_vn <> io.i_vn
//         Modules(i).io.i_stationary := io.i_stationary
//         Modules(i).io.i_data_bus := VecInit(0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U)
//         Modules(i).io.i_data_bus2 := VecInit(0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U,0.U)
//         Modules(i).io.i_mux_bus <> r_mux_bus_ff
//     }


  // Connect the instances as needed
//   for (i <- 0 until n) {
//     // You can access each instance using abcModules(i)
//     // Connect them to your desired logic here
//     // Example: abcModules(i).io.in <> someInput
//   }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // val repeated_flexdpe = WireInit(0.U(32.W)) 
    // when ((config.NoOfFDPE).U >= io.CalFDE) {
    //     repeated_flexdpe := 1.U
    // }.otherwise {
    //     repeated_flexdpe := io.CalFDE / config.NoOfFDPE.U
    // }
    // dontTouch(repeated_flexdpe)
    
    // val repeatedIndex = RegInit(0.U(32.W))
    // when (repeatedIndex === repeated_flexdpe) {
    //     repeatedIndex := 0.U
    // }.otherwise {
    //     repeatedIndex := repeatedIndex + 1.U
    // }

    // val flexDPE_iteration = RegInit(0.U(32.W))
    // when (flexDPE_iteration === (config.MaxCols.U - 1.U)) {
    //     flexDPE_iteration := 0.U
    // }.otherwise {
    //     flexDPE_iteration := flexDPE_iteration + 1.U
    // }
    // dontTouch(flexDPE_iteration)
    // dontTouch(repeatedIndex)

































}
