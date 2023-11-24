package magmasi.components

import chisel3._
import chisel3.util._ 

class FDU(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val CalFDE = Input(UInt(32.W))
        val i_vn = Input(Vec(config.NUM_PES, UInt(config.LOG2_PES.W)))
        val i_stationary = Input(Bool())
        val i_data_valid = Input(Bool())
        // val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W)))) // Why is it Vec(Vec()) ? According to ppr it should be Flattened !!!
        val Stationary_matrix = Input(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        //val Third_matrix = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    })

    /*
    
    * calculate how many interations to be done based on config.numPEs and CalFDE.
    * calculate on which iteration how many FlexDPE instances need to be active or inactive.
    * slice the upcoming Stationary Matrix and distribute among FlexDPEs of each iteration.

    */

    // Instatiate Flex-DPE instances
    val flexdpes = Seq.fill(config.NoOfFDPE)(Module(new flexdpecom2))    // FIXME: change the flexdpecom2 to FlexDPE

     // Counter for iterations
    val counter = RegInit(0.U(32.W))

    // Calculate the total number of iterations needed
    val totalIterations = (io.CalFDE + config.NoOfFDPE.U - 1.U) / config.NoOfFDPE.U

    // Remaining modules required
    val remainingModules = RegInit(io.CalFDE)

    // calculating vector slicing
    val startIndex      = (counter * numModulesGenerated.U + i.U) * numInputsPerModule.U
    val endIndex        = startIndex + numInputsPerModule.U
    val vectorLength    = config.MaxRows * config.MaxCols

    val slicedVector = Mux(
      endIndex <= vectorLength.U,
      io.Stationary_matrix.slice(startIndex, endIndex),
      io.Stationary_matrix.slice(startIndex, vectorLength) ++ VecInit(Seq.fill(endIndex - vectorLength)(0.U))
    )

    when(remainingModules > 0.U) {
        // Activate modules based on remainingModules
        for (i <- 0 until config.NoOfFDPE) {
            when(remainingModules > i.U) {
                flexdpes(i).io.in := slicedVector // Activate Module
            }.otherwise {
                flexdpes(i).io.in := VecInit(Seq.fill(numInputsPerModule)(0.U))// Deactivate module
            }
            io.out(i) := flexdpes(i).io.out
        }

        // Update remaining modules and increment counter
        when(remainingModules >= config.NoOfFDPE.U) {
            remainingModules := remainingModules - config.NoOfFDPE.U
        }.otherwise {
            remainingModules := 0.U
        }
        counter := counter + 1.U
    }



}