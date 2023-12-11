package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental._
import chisel3.stage.ChiselStage

class SRAM extends Module {
    val io = IO(new Bundle{
        val dataIn  = Input(UInt(32.W))
        val we      = Input(Bool())
        val address = Input(UInt(10.W))
        val valid   = Input(Bool())
        
        val dataOut = Output(UInt(32.W))
    })

    // Instantiate four 8-bit SRAMs
    val sram0 = Module(new gf180mcu_fd_ip_sram__sram512x8m8wm1())
    val sram1 = Module(new gf180mcu_fd_ip_sram__sram512x8m8wm1())
    val sram2 = Module(new gf180mcu_fd_ip_sram__sram512x8m8wm1())
    val sram3 = Module(new gf180mcu_fd_ip_sram__sram512x8m8wm1())

    // Connect the address lines to all SRAMs
    sram0.io.A := io.address
    sram1.io.A := io.address
    sram2.io.A := io.address
    sram3.io.A := io.address

    // Connect data lines appropriately
    sram0.io.D := io.dataIn(7, 0)
    sram1.io.D := io.dataIn(15, 8)
    sram2.io.D := io.dataIn(23, 16)
    sram3.io.D := io.dataIn(31, 24)

    // Connect write enable
    sram0.io.WEN := Cat(Fill(8,0.U))
    sram1.io.WEN := Cat(Fill(8,0.U))
    sram2.io.WEN := Cat(Fill(8,0.U))
    sram3.io.WEN := Cat(Fill(8,0.U))

    // Connect data out
    io.dataOut := Cat(sram3.io.Q, sram2.io.Q, sram1.io.Q, sram0.io.Q)

    // Clock Reset
    val clk = WireInit(clock.asUInt()(0))

    sram0.io.CLK := clk
    sram1.io.CLK := clk
    sram2.io.CLK := clk
    sram3.io.CLK := clk

    //Extras
    sram0.io.CEN := Mux(io.valid,0.B,1.B)
    sram1.io.CEN := Mux(io.valid,0.B,1.B)
    sram2.io.CEN := Mux(io.valid,0.B,1.B)
    sram3.io.CEN := Mux(io.valid,0.B,1.B)

    sram0.io.GWEN := ~(io.we)
    sram1.io.GWEN := ~(io.we)
    sram2.io.GWEN := ~(io.we)
    sram3.io.GWEN := ~(io.we)

}

class SRAMIO extends Bundle{
    val CLK     = Input(Bool())
    val CEN     = Input(Bool())
    val GWEN    = Input(Bool())
    val WEN     = Input(UInt(8.W))
    val A       = Input(UInt(9.W))
    val D       = Input(UInt(8.W))
    val Q       = Output(UInt(8.W))
    val VDD     = Analog(1.W)
    val VSS     = Analog(1.W)
}

class gf180mcu_fd_ip_sram__sram512x8m8wm1 extends BlackBox with HasBlackBoxResource {
    val io = IO(new SRAMIO)
    addResource("/gf180mcu_fd_ip_sram__sram512x8m8wm1.v")
}

object SRAMDriver extends App{
    (new ChiselStage).emitVerilog(new SRAM)
}