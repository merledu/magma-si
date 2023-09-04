#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VFlexDPE.h" // Replace with the actual name of the Verilator-generated header file

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VFlexDPE* top = new VFlexDPE;

    // Initialize simulation inputs
    top->i_data_valid = 1;
    top->i_stationary = 1;

    // Initialize i_data_bus
    top->i_data_bus[0] = 1;
    top->i_data_bus[1] = 2;
    top->i_data_bus[2] = 2;
    top->i_data_bus[3] = 4;

    // Initialize i_vn
    for (int i = 0; i < 31; i++) {
        top->i_vn[i] = 0b11111;
    }

    // Create a VCD trace file
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchy
    tfp->open("sim_trace.vcd");

    // Simulate for 900 time units
    for (int i = 0; i < 900; i++) {
        top->eval();
        tfp->dump(i);
        top->i_data_valid = 0; // You can change inputs during simulation
    }

    // Close the VCD trace file
    tfp->close();

    delete top;
    exit(0);
}

