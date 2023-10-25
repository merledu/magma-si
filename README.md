
# MAGMA-Si(Matrix Accelerator Generator for GeMM Operations)
## Overview
Matrix Accelerator Generator designed in CHISEL HDL for efficient General Matrix Multiply (GeMM) operations. The architecture employed is the innovative SIGMA Architecture, which enhances performance and scalability in matrix multiplication tasks.

## Key Features
CHISEL HDL: Developed using the CHISEL hardware description language, ensuring flexibility and control in hardware design.

GeMM Optimization: Tailored for General Matrix Multiply (GeMM) operations, a fundamental computational kernel in many numerical and machine learning applications.

SIGMA Architecture: Leveraging the SIGMA Architecture, known for its efficiency and scalability, to accelerate matrix multiplication tasks.

Performance: Designed with a focus on performance improvements, allowing for faster and more efficient matrix operations.

## Usage
1. **Clone the Repository:**

   ```bash
   git clone https://github.com/merledu/magma-si.git

2. **Access the Project Directory:**

      ```bash
    cd magma-si

3. **Compile the project using SBT (Scala Build Tool) with the following command:**

      ```bash
    sbt
4. **Execute the tests with VCD output by issuing the following command:**

      ```bash
    testOnly magmasi.components.flexdpecom2test -- -DwriteVcd=1
5. **Test case that has been executed in this manner:**

      ```bash
    1.  // for input data base 1
            c.io.i_data_bus(0).poke(1.U) 
    2. // for input data bus 2
            c.io.i_data_bus2(0).poke(0.U)
    3. // for i vn
            c.io.i_vn(3).poke("b11101".U)
    4. // for muxes
            c.io.i_mux_bus(576).poke(1.B)
    5. // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)
6. **Desire Output:**

      ```bash
    When you provide the correct input values for i_vn and muxes pins, you will receive the expected matrix output.

### Documentation of Matrix multiplication achieved using it
In this document, we illustrate the matrix multiplication process and conduct a comparative analysis between the results obtained from traditional matrix multiplication and the flexDpe multiplication which is use in magma-si .[**matrix multiplication**](https://docs.google.com/document/d/15aigRM_oNeKfkhLxfViAmdg0WECZvXFH9sVD7_mFjsg/edit)

## PathFInder 

#### Bundle Details
``````
// Inputs Signals

Stationary_matrix = Vector(MaxRows(Vector(MaxCols)))

Streaming_matrix = Vector(MaxRows)

// Output Signals

Source = Vector(MaxRows * MaxCols)

i_mux_bus = Vector(MaxRows * MaxCols)

destination = Vector(MaxRows * MaxCols)
``````


#### Desire Ouput
#### Inputs
``````
Stationary_matrix = [(1, 7, 2, 0),
                    (3, 4, 1, 0),
                    (2, 0, 4, 0),
                    (1, 2, 3, 0)]
                
Streaming_matrix = [(1, 2, 3, 0)]
``````
#### Output Table
| Source | destination | Muxex |
|--------|-------------|-------|
| 1   | 1   | 0   |
| 1   | 3   | 3   |
| 1   | 2   | 2   |
| 1   | 1   | 0   |
| 2   | 7   | 0   |
| --  | --   | --   |
| --   | --   | --  |
| 3   | 4   | 1   |
| 3   | 3   | 0   |

#### WaveForm
<img width="979" alt="Screenshot of PathFinder in action" src="/home/masfiyan/push/images/PathFinder Waveform.png.png">

