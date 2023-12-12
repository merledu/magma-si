package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class FlexDPU(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val output = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    }) 

    // io.output := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    // val used_FlexDPE = Reg(Vec(config.NoOfFDPE, UInt(32.W)))
    // dontTouch(used_FlexDPE)
    // val equalDistribution = io.CalFDE / config.NoOfFDPE.U
    // val remainingDistribution = io.CalFDE % config.NoOfFDPE.U
    // val equalArray = VecInit(Seq.fill(config.NoOfFDPE)(equalDistribution))
    // for (i <- 0 until config.NoOfFDPE) {
    //   used_FlexDPE(i) := Mux(i.U < remainingDistribution, equalArray(i) + 1.U, equalArray(i))
    // }
    // val sumOfUsedFlexDPE = used_FlexDPE.reduce(_ +& _)

    // ----------------------------------table work done--------------------------------------------------------

    val nonZeroValues = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U(32.W))))
    val index = RegInit(0.U(32.W))
    val iloop = RegInit(0.U(32.W))
    val jloop = RegInit(0.U(32.W))
    val Statvalid = RegInit(0.B)

    Statvalid := (iloop === (config.MaxRows-1).U) && (jloop === (config.MaxCols-1).U)
    when (io.Stationary_matrix(iloop)(jloop) =/= 0.U){
        nonZeroValues(index) := io.Stationary_matrix(iloop)(jloop)
        index := index + 1.U
    }

    when ( iloop < (config.MaxRows-1).U && (jloop === (config.MaxCols-1).U)){
        iloop := iloop + 1.U
    }

    when ( iloop <= (config.MaxRows-1).U && (jloop < (config.MaxCols-1).U)){
        jloop := jloop + 1.U
    }.elsewhen(iloop === (config.MaxRows-1).U && (jloop === (config.MaxCols-1).U)){
        jloop := jloop
    }.otherwise{
        jloop := 0.U
    }


    //------------------ Destination of flexdpe is complete ---------------------------------
    val PF1mux = WireInit(VecInit(Seq.fill(config.NUM_PES)(0.U((config.LEVELS - 1).W))))
    val PF1src = WireInit(VecInit(Seq.fill(config.NUM_PES)(0.U((config.DATA_TYPE).W))))
    val PF1dest = WireInit(VecInit(Seq.fill(config.NUM_PES)(0.U((config.DATA_TYPE).W))))
    val PF1CountIteration = RegInit(0.U(32.W))
    val PF1_Stream_Col = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))
    val ModuleIndex = RegInit(0.U(32.W))
    val cc = RegInit(0.U(32.W))


    def Reverse(in:UInt):UInt={
        val rev =(0 until 4).foldLeft(0.U) { (acc, i) =>
            acc | ((in >> i.U)(0) << (4 - i - 1).U)
        }
        rev
    }


    val IterationIndex = RegInit(0.U(32.W))


    val PF = VecInit(Seq.fill(1)(Module(new PathFinder).io))
    //val FDPE = VecInit(Seq.fill(1)(Module(new flexdpecom4).io))
  //val FDPE =
    for ( i <- 0 until 1){
        PF(i).Stationary_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
        PF(i).Streaming_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))
    }




    // for ( i <- 0 until 1){
    //     FDPE(i).i_stationary := 0.B
    //     FDPE(i).i_data_valid := 0.B
    //     FDPE(i).Stationary_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    //     FDPE(i).i_mux_bus := VecInit(0.U,0.U,0.U,0.U)
    //     FDPE(i).i_data_bus := VecInit(0.U,0.U,0.U,0.U)
    //     FDPE(i).i_data_bus2 := VecInit(0.U,0.U,0.U,0.U)
    // }


    when(Statvalid){
        //val PF1 = Module(new PathFinder)
        for (i <- 0 until 1){
        PF(i).Stationary_matrix := io.Stationary_matrix
        PF(i).Streaming_matrix := PF1_Stream_Col
        PF1mux := PF(i).i_mux_bus
        PF1src := PF(i).Source
        PF1dest := PF(i).destination
        }
            val delay2 = RegInit(0.U(32.W))
            val check2 = WireInit(0.B)

            when (PF(0).PF_Valid){
                check2 := 1.B
            }.elsewhen((delay2 < (config.MaxRows* config.MaxCols).U)) {
                delay2 := delay2 + 1.U
                check2 := 1.B
            }
            dontTouch(check2)

        val MuxWrapper = VecInit(Seq.fill(1)(Module(new MuxesWrapper).io))
        for (i <- 0 until 1){
            MuxWrapper(i).valid := 1.B
            MuxWrapper(i).src := PF(i).Source
            MuxWrapper(i).muxes := PF(i).i_mux_bus
            
        }

        val FDPE = VecInit(Seq.fill(1)(Module(new flexdpecom4).io))

        for(i <- 0 until 1 ){
            FDPE(i).i_stationary := 1.B
            FDPE(i).i_data_valid := 1.B
            FDPE(i).Stationary_matrix := io.Stationary_matrix
            for (j <- 0 until 4){
                    FDPE(i).i_vn(j) := 1.U
                    for (k <- 0 until 4){
                        FDPE(i).i_mux_bus(j)(k) := Reverse(MuxWrapper(i).Omuxes(j)(k))
                    }
            }
            FDPE(i).i_data_bus2 := MuxWrapper(i).Osrc
        dontTouch(FDPE(i).o_adder)
        }


        for (i <- 0 until (config.MaxRows * config.MaxCols) by 4){
            FDPE(i/4).i_data_bus(0) := nonZeroValues(i)
            FDPE(i/4).i_data_bus(1) := nonZeroValues(i+1)
            FDPE(i/4).i_data_bus(2) := nonZeroValues(i+2)
            FDPE(i/4).i_data_bus(3) := nonZeroValues(i+3)
        }

        io.output := FDPE(0).matrix


//--------------------------------------------- ZArori chees ------------------------------

        

        // PF(1).DataValid := Statvalid
        // PF(1).Stationary_matrix := io.Stationary_matrix
        // PF(1).NoDPE := 3.U // 0 means we need the src, muxes a/c to 1st DPE
        // PF(1).Streaming_matrix := PF1_Stream_Col
        // PF1mux := PF(1).i_mux_bus
        // PF1src := PF(1).Source
        // PF1dest := PF(1).destination

        // when (cc < 15.U){
        //     cc := cc + 1.U
        // }

        // when (cc === 15.U && (PF(0).PF_Valid)){
        //     cc := cc
        // }

        when(PF(0).PF_Valid){
            //IterationIndex := 0.U
            ModuleIndex := ModuleIndex + 1.U
        }

        when (ModuleIndex === (config.MaxRows -1).U && PF(0).PF_Valid){
            ModuleIndex := ModuleIndex
        }



        for (j <- 0 until config.MaxRows){
            PF1_Stream_Col(j) := io.Streaming_matrix(j)(ModuleIndex)
        }

        
        // when (PF(0).PF_Valid){
        // //PF1CountIteration := PF1CountIteration + 1.U
        // IterationIndex := IterationIndex + 1.U
        // }

        // when (PF(0).PF_Valid && (PF1CountIteration=/=3.U) ){
        //     PF1CountIteration := PF1CountIteration + 1.U
        // }.elsewhen (PF1CountIteration=/=3.U) {
        //     PF1CountIteration := PF1CountIteration
        // }
        

    //     when (PF1CountIteration === (config.MaxCols-1).U){
    // //     val FDPE = VecInit(Seq.fill(1)(Module(new flexdpecom4).io))
    // //     for ( i <- 0 until 1){
    // //     FDPE(i).i_stationary := 0.B
    // //     FDPE(i).i_data_valid := 0.B
    // //     FDPE(i).Stationary_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    // //     FDPE(i).i_mux_bus := VecInit(0.U,0.U,0.U,0.U)
    // //     FDPE(i).i_data_bus := VecInit(0.U,0.U,0.U,0.U)
    // //     FDPE(i).i_data_bus2 := VecInit(0.U,0.U,0.U,0.U)
    // // }
    // //         PF1CountIteration := PF1CountIteration
    // //         FDPE(0).valid := 0.B//PF(0).PF_Valid
    // //         FDPE(0).i_stationary := 1.B
    // //         FDPE(0).i_data_valid := PF(0).PF_Valid
    // //         FDPE(0).Stationary_matrix := io.Stationary_matrix


    // //         for ( i <- 0 until 4){
    // //             FDPE(0).i_mux_bus(i) := Reverse(PF1mux(i))
    // //             FDPE(0).i_data_bus2(i) := PF1src(i)
    // //             FDPE(0).i_data_bus(i) := nonZeroValues(i)
    // //         }
    // //         dontTouch(FDPE(0).o_adder)

    // // -------------------------------------FlexDPU implementation -------------------------------------------

    //     } 
        

        // val PF2 = Module(new PathFinder)
        // PF2.io.DataValid := 1.B
        // PF2.io.Stationary_matrix := io.Stationary_matrix
        // PF2.io.NoDPE := 1.U // 0 means we need the src, muxes a/c to 1st DPE
        // PF2.io.Streaming_matrix := PF2_Stream_Col
        // PF2mux := PF2.io.i_mux_bus
        // PF2src := PF2.io.Source
        // PF2dest := PF2.io.destination

        // for (j <- 0 until config.MaxRows){
        //     PF2_Stream_Col(j) := io.Streaming_matrix(j)(PF2CountIteration)
        // }
        
        // when (PF2.io.PF_Valid){
        // PF2CountIteration := PF2CountIteration + 1.U
        //     val FDPE2 = Module(new flexdpecom4)
        //     FDPE2.io.i_stationary := 1.B
        //     FDPE2.io.i_data_valid := 1.B
        //     FDPE2.io.Stationary_matrix := io.Stationary_matrix



        //     val range1 = Range(0, 4)
        //     val range2 = Range(4, 8)
        //     for ((i, j) <- range1.zip(range2)) {
        //         FDPE2.io.i_data_bus(i) := nonZeroValues(j)
        //         FDPE2.io.i_mux_bus(i) := Reverse(PF2mux(i))
        //         FDPE2.io.i_data_bus2(i) := PF2src(i)
        //     }
        // }

        // when (PF2CountIteration === (config.MaxCols-1).U){
        //     PF2CountIteration := PF2CountIteration
        // }







    }.otherwise{
        io.output := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    }


}
object FlexDPUDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new FlexDPU)
}
