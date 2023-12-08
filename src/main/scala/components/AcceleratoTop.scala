package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class AcceleratoTop(implicit val config:MagmasiConfig) extends Module{

    val io = IO(new Bundle{
        val wbs_stb_i = Input(Bool())
        val wbs_cyc_i = Input(Bool())
        val wbs_we_i  = Input(Bool())
        val wbs_sel_i = Input(UInt(3.W))
        val wbs_dat_i = Input(UInt(32.W))
        val wbs_adr_i = Input(UInt(32.W))
        val wbs_ack_o = Output(Bool())
        val wbs_dat_o = Output(UInt(32.W))
    })

    // val DMEM = SyncReadMem(1024, UInt(32.W))

    val idl :: mat_read :: mat_comp :: mat_str :: Nil = Enum(4)
    val stateReg = RegInit(idl)

    val ACCL = Module(new Top)
    ACCL.io.Stationary_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    ACCL.io.Streaming_matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U)))))
    val MMU  = Module(new MMU)

    MMU.io.top_adr := io.wbs_adr_i
    MMU.io.top_we  := io.wbs_we_i
    MMU.io.top_dat := io.wbs_dat_i
    MMU.io.top_val := io.wbs_adr_i >= 12.U

    MMU.io.acc_adr := 0.U
    MMU.io.acc_we  := 0.U
    MMU.io.acc_dat := 0.U
    MMU.io.acc_val := false.B

    /*
    
    * 0: Matrix A Base Adr
    * 1: Matrix A Rows
    * 2: Matrix A Cols
    * 3: Matrix B Base Adr
    * 4: Matrix B Rows
    * 5: Matrix B Cols
    * 6: Matrix C Base Adr
    * 7: Matric C Rows
    * 8: Matrix C Cols
    * 9: Start Transaction

    */

    val MatABaseAdr = RegInit(0.U)
    val MatARows    = RegInit(0.U)
    val MatACols    = RegInit(0.U)
    val MatBBaseAdr = RegInit(0.U)
    val MatBRows    = RegInit(0.U)
    val MatBCols    = RegInit(0.U)
    val MatCBaseAdr = RegInit(0.U)
    val MatCRows    = RegInit(0.U)
    val MatCCols    = RegInit(0.U)
    val StartTrans  = RegInit(0.U)
    val MatReadDone = RegInit(0.B)
    val MatCompDone = RegInit(0.B)
    val MatStrDone  = RegInit(0.B)
    val RowCountReg = RegInit(0.U)
    val ColCountReg = RegInit(0.U)
    val MatSel      = RegInit(0.U)
    val MatA        = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    val MatB        = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    val MatC        = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    val MatARowCount   = RegInit(0.U)
    val MatAColCount   = RegInit(0.U)
    val MatACount      = RegInit(0.U)
    val MatBRowCount   = RegInit(0.U)
    val MatBColCount   = RegInit(0.U)
    val MatBCount      = RegInit(0.U)
    val MatCRowCount   = RegInit(0.U)
    val MatCColCount   = RegInit(0.U)
    val MatCCount      = RegInit(0.U)
    val CompCount      = RegInit(0.U)



    switch(io.wbs_adr_i){
        is(0.U){
            MatABaseAdr := io.wbs_dat_i
        }
        is(1.U){
            MatARows    := io.wbs_dat_i
        }
        is(2.U){
            MatACols    := io.wbs_dat_i
        }
        is(3.U){
            MatBBaseAdr := io.wbs_dat_i
        }
        is(4.U){
            MatBRows    := io.wbs_dat_i
        }
        is(5.U){
            MatBCols    := io.wbs_dat_i
        }
        is(6.U){
            MatCBaseAdr := io.wbs_dat_i
        }
        is(7.U){
            MatCRows    := io.wbs_dat_i
        }
        is(8.U){
            MatCCols    := io.wbs_dat_i
        }
        is(9.U){
            StartTrans  := io.wbs_dat_i
        }
    }

    when(stateReg === mat_read){
        MMU.io.acc_we   := false.B
        MMU.io.acc_dat  := 0.U
        MMU.io.acc_val  := true.B
        when(MatSel === 0.U){
            // Mat A Read
            when(MatARowCount === MatARows && MatAColCount === MatACols){
                MatSel := 1.U
            }.otherwise{
                when(MatAColCount === MatACols){
                    MatARowCount := MatARowCount + 1.U
                    MatAColCount := 0.U
                }.otherwise{
                    MatA(MatARowCount)(MatAColCount) := MMU.io.acc_out.bits
                    MMU.io.acc_adr := MatABaseAdr + MatACount
                    MatACount := MatACount + 1.U
                    MatAColCount := MatAColCount + 1.U
                }
            }
        }.elsewhen(MatSel === 1.U){
            // Mat B Read
            when(MatBRowCount === MatBRows && MatAColCount === MatACols){
                MatReadDone := true.B
            }.otherwise{
                when(MatBColCount === MatBCols){
                    MatBRowCount := MatBRowCount + 1.U
                    MatBColCount := 0.U
                }.otherwise{
                    MatB(MatBRowCount)(MatBColCount) := MMU.io.acc_out.bits
                    MMU.io.acc_adr := MatBBaseAdr + MatBCount
                    MatBCount := MatBCount + 1.U
                    MatBColCount := MatBColCount + 1.U
                }
            }
        }
    }.elsewhen(stateReg === mat_comp){
        when(CompCount === 0.U){
            ACCL.io.Stationary_matrix := MatA
            ACCL.io.Streaming_matrix := MatB
        }.elsewhen(CompCount === 13.U){
            MatC        := ACCL.io.Third_Matrix
            MatCompDone := true.B
        }.otherwise{
            CompCount   := CompCount + 1.U
        }
    }.elsewhen(stateReg === mat_str){
        // Mat C Write
        MMU.io.acc_we   := true.B
        MMU.io.acc_val  := true.B
        when(MatCRowCount === MatCRows && MatCColCount === MatCCols){
            MatStrDone  := true.B
        }.otherwise{
            when(MatCColCount === MatCCols){
                MatCRowCount := MatCRowCount + 1.U
                MatCColCount := 0.U
            }.otherwise{
                MMU.io.acc_dat  := MatC(MatCRowCount)(MatCColCount)
                MMU.io.acc_adr  := MatCBaseAdr + MatCCount
                MatCCount       := MatCCount + 1.U
                MatCColCount    := MatCColCount + 1.U
            }
        }
    }



    
    when(stateReg === idl && StartTrans === 1.U){
        stateReg := mat_read
        StartTrans := 0.U
    }.elsewhen(stateReg === mat_read && MatReadDone){
        stateReg := mat_comp
        MatReadDone := 0.B
    }.elsewhen(stateReg === mat_comp && MatCompDone){
        stateReg := mat_str
        MatCompDone := 0.B
    }.elsewhen(stateReg === mat_str && MatStrDone){
        stateReg := idl
        MatStrDone := 0.B
    }

    io.wbs_ack_o := 0.B
    io.wbs_dat_o := 0.U
    

}

class MMU extends Module{
    val io = IO(new Bundle{
        val top_adr = Input(UInt(10.W))
        val top_we  = Input(Bool())
        val top_dat = Input(UInt(32.W))
        val top_val = Input(Bool())
        val top_out = Valid(UInt(32.W))

        val acc_adr = Input(UInt(10.W))
        val acc_we  = Input(Bool())
        val acc_dat = Input(UInt(32.W))
        val acc_val = Input(Bool())
        val acc_out = Valid(UInt(32.W))
    })

    val DMEM = SyncReadMem(1024, UInt(32.W))

    io.top_out.bits := 0.U
    io.acc_out.bits := 0.U

    io.top_out.valid := false.B
    io.acc_out.valid := false.B

    when(io.top_val){
        when(io.top_we){
            DMEM(io.top_adr-12.U) := io.top_dat
        }.otherwise{
            io.top_out.bits := DMEM(io.top_adr-12.U)
            io.top_out.valid := true.B
        }
    }.elsewhen(io.acc_val){
        when(io.acc_we){
            DMEM(io.acc_adr-12.U) := io.acc_dat
        }.otherwise{
            io.acc_out.bits := DMEM(io.acc_adr-12.U)
            io.acc_out.valid := true.B
        }
    }
}

object AcceleratoTopDriver extends App{
    implicit val config:MagmasiConfig = MagmasiConfig()
    (new ChiselStage).emitVerilog(new AcceleratoTop)
}