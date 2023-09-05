#include "verilated.h"
#include "VBenes.h" // Replace with the actual name of your Verilog module
 // Include your MagmasiConfig if needed
#include "verilated_vcd_c.h"
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the Verilog module
    VBenes* dut = new VBenes;

    // Initialize VCD file
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd = new VerilatedVcdC;
    dut->trace(vcd, 99); // Trace 99 levels of hierarchy
    vcd->open("sim.vcd");

    // Initialize simulation signals
    dut->clock = 0;
    dut->reset = 0;
    dut->eval();

    // Simulation time variables
    int LEVELS = (2 * (log(4) / log(2))) + 1;

    // Testbench data
    int inputData[4] = {1, 2, 2, 4};

    // Simulate for 5 clock cycles
    for (int cycle = 0; cycle < 5; cycle++) {
        // Apply input data to DUT
        //for (int i = 0; i < 4; i++) {
            dut->io_i_data_bus_0 = 1;
            dut->io_i_data_bus_1 = 2;
            dut->io_i_data_bus_2 = 3;
            dut->io_i_data_bus_3 = 4;
            
        //}

        // Toggle clock and evaluate DUT
        dut->clock = 1;
        dut->eval();
        vcd->dump(cycle); // Dump signals to VCD file at this time step
        dut->clock = 0;
        dut->eval();
        vcd->dump(cycle + 0.5); // Dump signals to VCD file at this half-cycle
    }

    // Clean up
    dut->final();
    vcd->close();
    delete vcd;
    delete dut;

    return 0;
}
