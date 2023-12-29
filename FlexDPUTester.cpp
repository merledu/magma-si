#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VFlexDPUby2.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    VFlexDPUby2* top = new VFlexDPUby2;

    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    top->reset = 1;

    // Input matrix values for Stationary_matrix
    top->io_Stationary_matrix_0_0 = 0;
    top->io_Stationary_matrix_0_1 = 1;
    top->io_Stationary_matrix_1_0 = 1;
    top->io_Stationary_matrix_1_1 = 1;

    // Input matrix values for Streaming_matrix
    top->io_Streaming_matrix_0_0 = 1;
    top->io_Streaming_matrix_0_1 = 3;
    top->io_Streaming_matrix_1_0 = 2;
    top->io_Streaming_matrix_1_1 = 1;

    // Initialize signals
    top->reset = 1;

    for (int cycle = 0; cycle < 2000; cycle++) {
        top->clock = 1;
        top->eval();
        tfp->dump(cycle * 10 + 5);

        top->clock = 0;
        top->eval();
        tfp->dump(cycle * 10 + 10);

        if (cycle >= 2) {
            top->reset = 0;
        }
    }

    tfp->close();
    delete top;
    return 0;
}
