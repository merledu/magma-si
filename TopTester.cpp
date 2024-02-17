#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"  // This header is generated by Chisel
#include <cstdlib>
#include <ctime>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator traces
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    // Create an instance of the generated Verilog module
    VTop* top = new VTop;

    // Trace the signals
    top->trace(tfp, 99);
    tfp->open("dump1.vcd");

    // Seed for random number generation
    std::srand(std::time(0));

    // Initialize signals
    top->reset = 1;

    // Generate matrices only once
    int stationary_matrix_0_0 = std::rand() % 10;
    int stationary_matrix_0_1 = std::rand() % 10;
    int stationary_matrix_1_0 = std::rand() % 10;
    int stationary_matrix_1_1 = std::rand() % 10;

    int streaming_matrix_0_0 = std::rand() % 10;
    int streaming_matrix_0_1 = std::rand() % 10;
    int streaming_matrix_1_0 = std::rand() % 10;
    int streaming_matrix_1_1 = std::rand() % 10;

    // Set the matrices
    top->io_Stationary_matrix_0_0 = stationary_matrix_0_0;
    top->io_Stationary_matrix_0_1 = stationary_matrix_0_1;
    top->io_Stationary_matrix_1_0 = stationary_matrix_1_0;
    top->io_Stationary_matrix_1_1 = stationary_matrix_1_1;

    top->io_Streaming_matrix_0_0 = streaming_matrix_0_0;
    top->io_Streaming_matrix_0_1 = streaming_matrix_0_1;
    top->io_Streaming_matrix_1_0 = streaming_matrix_1_0;
    top->io_Streaming_matrix_1_1 = streaming_matrix_1_1;

    // Simulation steps
    for (int cycle = 0; cycle < 2000; cycle++) {
        // Toggle clock
        top->clock = 1;
        top->eval();
        tfp->dump(cycle * 10 + 5);

        top->clock = 0;
        top->eval();
        tfp->dump(cycle * 10 + 10);

        if (cycle >= 2) {
            top->reset = 0;
        }

        // Calculate expected output (matrix multiplication)
        int expected_output_0_0 = stationary_matrix_0_0 * streaming_matrix_0_0 +
                                 stationary_matrix_0_1 * streaming_matrix_1_0;
        int expected_output_0_1 = stationary_matrix_0_0 * streaming_matrix_0_1 +
                                 stationary_matrix_0_1 * streaming_matrix_1_1;
        int expected_output_1_0 = stationary_matrix_1_0 * streaming_matrix_0_0 +
                                 stationary_matrix_1_1 * streaming_matrix_1_0;
        int expected_output_1_1 = stationary_matrix_1_0 * streaming_matrix_0_1 +
                                 stationary_matrix_1_1 * streaming_matrix_1_1;

        // Check output after io_O_Valid is high
        if (top->io_O_valid) {
            // Print matrices and results only when O_Valid is high
            printf("Cycle %d:\n", cycle);
            printf("Input Stationary Matrix:\n");
            printf("%d\t%d\n%d\t%d\n",
                   stationary_matrix_0_0, stationary_matrix_0_1,
                   stationary_matrix_1_0, stationary_matrix_1_1);

            printf("Input Streaming Matrix:\n");
            printf("%d\t%d\n%d\t%d\n",
                   streaming_matrix_0_0, streaming_matrix_0_1,
                   streaming_matrix_1_0, streaming_matrix_1_1);

            printf("Expected Output Matrix:\n");
            printf("%d\t%d\n%d\t%d\n", expected_output_0_0, expected_output_0_1,
                   expected_output_1_0, expected_output_1_1);

            printf("Actual Third Matrix:\n");
            printf("%d\t%d\n%d\t%d\n",
                   top->io_Third_Matrix_0_0, top->io_Third_Matrix_0_1,
                   top->io_Third_Matrix_1_0, top->io_Third_Matrix_1_1);
            printf("\n");

            if (top->io_Third_Matrix_0_0 == expected_output_0_0 &&
                top->io_Third_Matrix_0_1 == expected_output_0_1 &&
                top->io_Third_Matrix_1_0 == expected_output_1_0 &&
                top->io_Third_Matrix_1_1 == expected_output_1_1) {
                // Test passed
                printf("Test Passed at Cycle %d\n", cycle);
            } else {
                // Test failed
                printf("Test Failed at Cycle %d\n", cycle);
            }
        }
    }

    // Close VCD
    tfp->close();
    delete top;
    return 0;
}
