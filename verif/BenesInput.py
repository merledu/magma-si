import json
def BenesInput():
    with open('MUXES_STRCT.json') as f:
        MUXES_STRCT = json.load(f)
    f.close()
    with open('PARSED_MUXES.json') as f:
        PARSED_MUXES = json.load(f)
    f.close()

    fmt = "dut.io.i_mux_bus({0:1}).poke({1:1}.B)"
    strs = []

    for key in list(MUXES_STRCT.keys()):
        inputs = MUXES_STRCT[key]
        if key in list(PARSED_MUXES.keys()):
            values = PARSED_MUXES[key]
        else:
            if type(inputs) != int:
                values = [0,0]
            else:
                values = 0
        if type(inputs) != int:
            strs.append(fmt.format(inputs[0], values[0]))
            strs.append(fmt.format(inputs[1], values[1]))
            strs.append("\n")
        else:
            strs.append(fmt.format(inputs, values))
            strs.append("\n")
                
    
    f = open("BenesIputs.scala", "w+")
    f.write("\n".join(strs))
    f.close()
    
BenesInput()