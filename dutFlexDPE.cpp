#include "VFlexDPE.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    // Command line parsing
    Verilated::commandArgs(argc, argv);
    
    // Create instance of the module
    VFlexDPE* top = new VFlexDPE;


    // Setup VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchy
    tfp->open("simx.vcd");

    // Provide initial values
    top->reset = 1;

    int inputData[] = {1, 2, 2, 4};
    for (int i = 0; i < 4; i++) {
        switch(i) {
            case 0: top->io_i_data_bus_0 = inputData[i]; break;
            // If you have io_i_data_bus_1, io_i_data_bus_2, etc., add cases for them.
        }
    }
    top->io_i_data_valid = 1;
    top->io_i_stationary = 1;

    for (int i = 0; i < 31; i++) {
        switch(i) {
            case 0: top->io_i_vn_0 = 0b11111; break;
            case 1: top->io_i_vn_1 = 0b11111; break;
            // Add cases for other io_i_vn_2, io_i_vn_3, etc.
        }
    }

    // Main simulation loop
    for (int cycle = 0; cycle < 2000; cycle++) {
        // Toggle clock
        top->clock = 1;
        top->eval();
        tfp->dump(cycle * 10 + 5);

        top->clock = 0;
        top->eval();
        tfp->dump(cycle * 10 + 10);
    }

    // ...


    // Close VCD
    tfp->close();
    delete top;
    return 0;
}
