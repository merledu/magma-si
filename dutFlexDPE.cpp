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

    int inputData[] = {1, 1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    for (int i = 0; i < 32; i++) {
        switch(i) {
            case 0: top->io_i_data_bus_0 = inputData[i]; break;
            case 1: top->io_i_data_bus_1 = inputData[i]; break;
            case 2: top->io_i_data_bus_2 = inputData[i]; break;
            case 3: top->io_i_data_bus_3 = inputData[i]; break;
            case 4: top->io_i_data_bus_4 = inputData[i]; break;
            case 5: top->io_i_data_bus_5 = inputData[i]; break;
            case 6: top->io_i_data_bus_6 = inputData[i]; break;
            case 7: top->io_i_data_bus_7 = inputData[i]; break;
            case 8: top->io_i_data_bus_8 = inputData[i]; break;
            case 9: top->io_i_data_bus_9 = inputData[i]; break;
            case 10: top->io_i_data_bus_10 = inputData[i]; break;
            case 11: top->io_i_data_bus_11 = inputData[i]; break;
            case 12: top->io_i_data_bus_12 = inputData[i]; break;
            case 13: top->io_i_data_bus_13 = inputData[i]; break;
            case 14: top->io_i_data_bus_14 = inputData[i]; break;
            case 15: top->io_i_data_bus_15 = inputData[i]; break;
            case 16: top->io_i_data_bus_16 = inputData[i]; break;
            case 17: top->io_i_data_bus_17 = inputData[i]; break;
            case 18: top->io_i_data_bus_18 = inputData[i]; break;
            case 19: top->io_i_data_bus_19 = inputData[i]; break;
            case 20: top->io_i_data_bus_20 = inputData[i]; break;
            case 21: top->io_i_data_bus_21 = inputData[i]; break;
            case 22: top->io_i_data_bus_22 = inputData[i]; break;
            case 23: top->io_i_data_bus_23 = inputData[i]; break;
            case 24: top->io_i_data_bus_24 = inputData[i]; break;
            case 25: top->io_i_data_bus_25 = inputData[i]; break;
            case 26: top->io_i_data_bus_26 = inputData[i]; break;
            case 27: top->io_i_data_bus_27 = inputData[i]; break;
            case 28: top->io_i_data_bus_28 = inputData[i]; break;
            case 29: top->io_i_data_bus_29 = inputData[i]; break;
            case 30: top->io_i_data_bus_30 = inputData[i]; break;
            case 31: top->io_i_data_bus_31 = inputData[i]; break;
            
            // case 4: top->io_i_data_bus_0 = inputData[i]; break;
            
            // If you have io_i_data_bus_1, io_i_data_bus_2, etc., add cases for them.
        }
    }
    top->io_i_data_valid = 1;
    top->io_i_stationary = 0;

    for (int i = 0; i < 32; i++) {
        switch(i) {
            case 0: top->io_i_vn_0 = 0b11111; break;
            case 1: top->io_i_vn_1 = 0b11111; break;
            case 2: top->io_i_vn_2 = 0b11111; break;
            case 3: top->io_i_vn_3 = 0b11111; break;
            case 4: top->io_i_vn_4 = 0b11111; break;
            case 5: top->io_i_vn_5 = 0b11111; break;
            case 6: top->io_i_vn_6 = 0b11111; break;
            case 7: top->io_i_vn_7 = 0b11111; break;
            case 8: top->io_i_vn_8 = 0b11111; break;
            case 9: top->io_i_vn_9 = 0b11111; break;
            case 10: top->io_i_vn_10 = 0b11111; break;
            case 11: top->io_i_vn_11 = 0b11111; break;
            case 12: top->io_i_vn_12 = 0b11111; break;
            case 13: top->io_i_vn_13 = 0b11111; break;
            case 14: top->io_i_vn_14 = 0b11111; break;
            case 15: top->io_i_vn_15 = 0b11111; break;
            case 16: top->io_i_vn_16 = 0b11111; break;
            case 17: top->io_i_vn_17 = 0b11111; break;
            case 18: top->io_i_vn_18 = 0b11111; break;
            case 19: top->io_i_vn_19 = 0b11111; break;
            case 20: top->io_i_vn_20 = 0b11111; break;
            case 21: top->io_i_vn_21 = 0b11111; break;
            case 22: top->io_i_vn_22 = 0b11111; break;
            case 23: top->io_i_vn_23 = 0b11111; break;
            case 24: top->io_i_vn_24 = 0b11111; break;
            case 25: top->io_i_vn_25 = 0b11111; break;
            case 26: top->io_i_vn_26 = 0b11111; break;
            case 27: top->io_i_vn_27 = 0b11111; break;
            case 28: top->io_i_vn_28 = 0b11111; break;
            case 29: top->io_i_vn_29 = 0b11111; break;
            case 30: top->io_i_vn_30 = 0b11111; break;
            case 31: top->io_i_vn_31 = 0b11111; break;
            
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
