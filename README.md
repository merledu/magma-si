# MAGMA-Si
#### Matrix Accelerator Generator for GeMM Operations

### Overview
MAGMA-Si is a Matrix Accelerator Generator developed in CHISEL HDL. It is a Netowrk on Chip based Generic Matrix Multiplication Accelerator following the SIGMA Architecture defined by Georgia Tech. It is designed in such a way using Distribution Networks (Benes) and Reduction Networks (Forwarding Adder Network) which work in parallel to compute sparse matrix multiplications in lesser number of clock cycles as compared to Systolic Array based GeMM Accelerators.

This Caravel Contains a 2x2 Matrix Multiplication Accelerator generated from MAGMA-Si with following Specifications.
**Component** | **Configuration**
--- | --- 
No. of Processing Elements | 4
No. of Flexible - Dot Product Engines | 1
Floating Point Enabled | No
Data Width | 32
Max Rows | 2
Max Cols | 2

## Architecture
This Caravel Contains the following Modules.
**RTL Module** | **Functional Reference**
--- | ---
AcceleratoTop | Top Wrapper
MMU | Memory Management Unit (GF180 SRAM)
Top | Actual Accelerator Top

### Top Wrapper
This Module is directly attached with the Wishbone Interface of Caravel. It consists of a Controller logic that is responsible for directing the wb requests either into the MMU or to the Accelerator Configuration Registers.

### Memory Management Unit
This Module contains 4 GF-180 PDK SRAM Macros (512x8). It is responsible for storing the input matrices from WB to SRAMs and then loading them from Memory upon Accelerator Request as well as storing the output matrix from Accelerator to SRAMs and then loading them from Memory upon WB Read Request.

<img src="https://github.com/merledu/magmasi_caravel/blob/main/docs/top.png" />

### MAGMA-Si Accelerator
This is the Core Component, The Accelerator itself. It comprises of a Pre-Processing Module and a Dot Procduct Unit (Flex-DPU) which controls all the Engines working in parallel to compute the resultant matrix. The Input Matrices first go through a Pathfinder Module inside the DPU which decides the fate of each input element and generates its src/destinaation pair which is further fed into the Flex-DPE for computaion.

<img src="https://github.com/merledu/magmasi_caravel/blob/main/docs/magmasi.png" />

### Flex-DPE
Flexible Dot Product Engine (Flex-DPE) is the most crucial part of the Accelerator. It consists of 2 Network Topologies, one for Distributing the input PEs (Benes Topology) to their desired destinations and other one is for Reducing them into a Matrix shape (Forwading Adder Network (FAN) Topology).

<img src="https://github.com/merledu/magmasi_caravel/blob/main/docs/flexdpe.png" width="50%" />

## Key Features
### CHISEL HDL
MAGMA-Si is implemented using the CHISEL hardware description language, offering flexibility and control in hardware design. This feature ensures adaptability and facilitates customization for various hardware configurations.

### GeMM Optimization
MAGMA-Si is intricately optimized for General Matrix Multiply (GeMM) operations, a crucial computational kernel in numerical and machine learning applications. This specialization allows MAGMA-Si to excel in tasks involving matrix multiplication.

### SIGMA Architecture
Leveraging the SIGMA Architecture, MAGMA-Si enhances both performance and scalability. This architecture is particularly adept at accelerating matrix multiplication tasks, making MAGMA-Si well-suited for demanding computational workloads.

### Performance
MAGMA-Si prioritizes performance improvements by optimizing hardware and utilizing the SIGMA Architecture. This design approach ensures faster and more efficient matrix operations, contributing to overall system performance gains.

## Reference
For a comprehensive understanding of the architectural and algorithmic aspects of MAGMA-Si, refer to the associated research paper: [**SIGMA Research Paper**](https://bpb-us-w2.wpmucdn.com/sites.gatech.edu/dist/c/332/files/2020/01/sigma_hpca2020.pdf).


## Team Members

**Member** | **Role**
--- | ---
Dr. Farhan | Supervisor
Sajjad Ahmed | Backend Team Lead
Shahzaib Kashif | Design Team Lead
Asfiyan Shivani | Design Team Member
Syed Owais Ali Shah | Design Team Member

