# Verification

## Benes

To run the Benes Emulation Model, follow the below steps
```bash
python3 BenesModel.py
```

This script will show the outputs for the given outputs.
```bash
INPUTS: [1, 2, 3, 4]
MUXES: ['VVVD', 'VVVD', 'VVVD', 'VVVD']
OUTPUTS: [2, 1, 4, 3]
```

You can check following files for Structure

1. BENESSTRCT.json: this contains inputs and output wires for all nodes
2. CONN_WIRES.json: this contains what wire is going to which node
3. MUXES_STRCT.json: this contains what node is controlled by which mux bit
4. PARSED_MUXES.json: this contains what mux values are going in each node for the inputs provided

Then, if you want you can also generate the testbench for Benes Module in CHISEL using this script
```bash
python3 BenesInput.py
```

This will generate a `BenesInputs.scala` which will contain all the input pins for the given inputs.