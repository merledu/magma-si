#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"  // This header is generated by Chisel

#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to generate a random 2x2 matrix with values under 50
void generateRandomMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix[i][j] = rand() % 50;  // Adjust the range as needed
        }
    }
}

// Function to print a 2x2 matrix
void printMatrix(const char* name, const int matrix[2][2]) {
    std::cout << name << ":\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Seed the random number generator
    std::srand(std::time(0));

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    VTop* top = new VTop;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");
    top->reset = 1;

    int stationary_matrix[2][2];
    int streaming_matrix[2][2];

                // Generate random matrices every 100 cycles
            generateRandomMatrix(stationary_matrix);
            generateRandomMatrix(streaming_matrix);

            // Assign the random matrices to the module inputs
            top->io_Stationary_matrix_0_0 = 0;//stationary_matrix[0][0];
            top->io_Stationary_matrix_0_1 = 0;//stationary_matrix[0][1];
            top->io_Stationary_matrix_1_0 = 1;//stationary_matrix[1][0];
            top->io_Stationary_matrix_1_1 = 2;//stationary_matrix[1][1];

            top->io_Streaming_matrix_0_0 = 3;//streaming_matrix[0][0];
            top->io_Streaming_matrix_0_1 = 4;//streaming_matrix[0][1];
            top->io_Streaming_matrix_1_0 = 0;//streaming_matrix[1][0];
            top->io_Streaming_matrix_1_1 = 0;//streaming_matrix[1][1];

            // Print the generated matrices
            printMatrix("Stationary Matrix", stationary_matrix);
            printMatrix("Streaming Matrix", streaming_matrix);

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
