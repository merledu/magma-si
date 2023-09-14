import math, json
def Benes(PE, ARR1):
    
    LEVELS = int((2 * math.log2(PE)) + 1)

    BENES_STRCT = {}
    MUXES_STRCT = {}
    CONN_WIRES = {}

    # {
    #     "sw12": ((10,27),(12,13))
    #     PE-1 LEVEL-2 : ((in0,in1),(out0,out1))
    # }

    # first level
    c = 0
    d = 1
    for i in range(PE):
        print(f"i: {i}")
        print(f"INTERNAL1: {2 * i * (LEVELS - 1)}")
        print(f"INTERNAL2: {2 * i * (LEVELS - 1)+1}")
        out0 = 2 * i * (LEVELS - 1)
        out1 = 2 * i * (LEVELS - 1)+1
        BENES_STRCT[f"{i}0"] = ((None,None),(out0, out1))

    # middle levels
    for i in range(PE):
        print(f"i: {i}")
        for j in range(1,LEVELS-1):
            print(f"j: {j}")
            print(f"in0: {2 * i * (LEVELS - 1) + 2 * (j - 1)}")
            in0 = 2 * i * (LEVELS - 1) + 2 * (j - 1)
            if j <= (LEVELS - 1) / 2:
                if i % 2**j < 2**(j-1):
                    # print("CONDITION1")
                    # print(f"in1: {2 * (i + 2**(j-1)) * (LEVELS-1) + 2 * (j-1) +1}")
                    in1 = 2 * (i + 2**(j-1)) * (LEVELS-1) + 2 * (j-1) +1
                else:
                    # print("CONDITION2")
                    # print(f"in1: {2 * (i - 2**(j-1)) * (LEVELS-1) + 2 * (j-1) +1}")
                    in1 = 2 * (i - 2**(j-1)) * (LEVELS-1) + 2 * (j-1) +1
            else:
                if i % 2**(LEVELS-j) < 2**(LEVELS-j-1):
                    # print("CONDITION3")
                    # print(f"in1: {2 * (i + 2**(LEVELS - j - 1)) * (LEVELS - 1) + 2 * (j - 1) + 1}")
                    in1 = 2 * (i + 2**(LEVELS - j - 1)) * (LEVELS - 1) + 2 * (j - 1) + 1
                else:
                    # print("CONDITION4")
                    # print(f"in1: {2 * (i - 2**(LEVELS - j - 1)) * (LEVELS - 1) + 2 * (j - 1) + 1}")
                    in1 = 2 * (i - 2**(LEVELS - j - 1)) * (LEVELS - 1) + 2 * (j - 1) + 1
            print(f"INTERNAL1: {2 * i * (LEVELS - 1) + 2 * j}")
            print(f"INTERNAL2: {2 * i * (LEVELS - 1) + 2 * j + 1}")
            out0 = 2 * i * (LEVELS - 1) + 2 * j
            out1 = 2 * i * (LEVELS - 1) + 2 * j + 1
            CONN_WIRES[in0] = f"{i}{j}"
            CONN_WIRES[in1] = f"{i}{j}"
            BENES_STRCT[f"{i}{j}"] = ((in0,in1),(out0,out1))
            MUXES_STRCT[f"{i}{j}"] = (c,d)
            c+=2
            d+=2


    # last level
    for i in range(PE):
        # print(f"i: {i}")
        # print(f"INTERNAL1: {2 * i * (LEVELS - 1) + (2 * (LEVELS - 2))}")
        # print(f"INTERNAL2: {2 * (i + 1 if(i % 2 == 0)  else i - 1) * (LEVELS - 1) + (2 * (LEVELS - 2)) + 1}")
        in0 = 2 * i * (LEVELS - 1) + (2 * (LEVELS - 2))
        in1 = 2 * (i + 1 if(i % 2 == 0)  else i - 1) * (LEVELS - 1) + (2 * (LEVELS - 2)) + 1
        CONN_WIRES[in0] = f"{i}{LEVELS-1}"
        CONN_WIRES[in1] = f"{i}{LEVELS-1}"
        BENES_STRCT[f"{i}{LEVELS-1}"] = ((in0,in1),(None,None))
        MUXES_STRCT[f"{i}{LEVELS-1}"] = (c)
        c+=1


    f = open("BENESSTRCT.json", "w+")
    json.dump(BENES_STRCT, f)
    f.close()
    f = open("CONN_WIRES.json", "w+")
    json.dump(CONN_WIRES, f)
    f.close()


    
    PARSED_MUXES = {}
    OUTS = [None for i in range(PE)]
    # ARR1 = [1,2,3,4]
    # IMUX = [f"{'V'*5}D",f"{'V'*5}D",f"{'V'*5}D",f"{'V'*5}D"]
    IMUX = ["VVVD","VVVD","VVVD","VVVD"]
    NEXT = None
    for i,e in enumerate(ARR1):
        if e != None:
            for j,m in enumerate(IMUX[i]):
                if e in ARR1[:i]:
                    i = ARR1.index(e)
                if j == 0:
                    if m == "V":
                        NEXT = CONN_WIRES[BENES_STRCT[f"{i}{j}"][1][0]]
                        PARSED_MUXES[NEXT] = (0,0)
                    elif m == "D":
                        NEXT = CONN_WIRES[BENES_STRCT[f"{i}{j}"][1][1]]
                        PARSED_MUXES[NEXT] = (1,0)
                else:
                    if m == "V":
                        NEXT = CONN_WIRES[BENES_STRCT[NEXT][1][0]]
                        if type(MUXES_STRCT[NEXT]) != int:
                            PARSED_MUXES[NEXT] = (0,0)
                        else:
                            PARSED_MUXES[NEXT] = (0)
                    elif m == "D":
                        NEXT = CONN_WIRES[BENES_STRCT[NEXT][1][1]]
                        if type(MUXES_STRCT[NEXT]) != int:
                            PARSED_MUXES[NEXT] = (1,0)
                        else:
                            PARSED_MUXES[NEXT] = (1)
                
            OUTS[int(NEXT[0])] = e
    INNS = ARR1
    
    f = open("MUXES_STRCT.json", "w+")
    json.dump(MUXES_STRCT, f)
    f.close()
    f = open("PARSED_MUXES.json", "w+")
    json.dump(PARSED_MUXES, f)
    f.close()

    print(f"INPUTS: {INNS}")
    print(f"MUXES: {IMUX}")
    print(f"OUTPUTS: {OUTS}")

if __name__ == '__main__':
    PE = 4
    ARR1 = [1,2,3,4]
    Benes(PE, ARR1)