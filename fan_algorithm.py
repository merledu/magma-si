import math

Num = 32
Data_type = 32
numlevels = int(math.ceil(math.log(Num) / math.log(2)))
c=[]
# Generate w_fan_lvl dynamically and print the value
w_fan_lvl = [None] * numlevels
for level in range(numlevels):
    if level == numlevels - 1:
        value = (int(Num / 2**level)) - 1
    else:
        value = (int(Num / 2**level)) - 2
    width = Data_type * value
    w_fan_lvl[level] = [0] * width
    print(f"w fan level {level}: {value}")
    wfan=f"w fan level {level}: {value}"
    c.append(wfan)
print(c)
for i in c:
    print(i)
a=[]
# z1=[]
# z2=[]
b=numlevels-1
for number in range(numlevels-1,1,-1):
    a.append(number)
    b=b-1
# for j in range(numlevels-1):
    for i in range(b):
        values = (int(Num / (2 ** (number-1)))-2)
        name = f"r_fan_ff_lvl_{i}_to_{number}"
        reg = f"RegInit(VecInit(Seq.fill({values})(0.U({Data_type})))"
        print(f"var {name} = {reg}")
        array=name
        

        z1=[]
        z2=[]
        for j in range(2, ((values*2)+2), 4):
            v1=f"w_fan_lvl_{i}({j})"
            v2=f"w_fan_lvl_{i}({j+1})"
            v3=f"r_fan_ff_lvl_{i}_to_{number-1}({j})"
            v4=f"r_fan_ff_lvl_{i}_to_{number-1}({j+1})"
            if number - i <= 2:
                k=z1.append(v1)
                k=z1.append(v2)
                
                
            else:
                l=z2.append(v3)
                k=z2.append(v4)
        if number - i <= 2:
#             print(z1)
            print(f"{array} = {z1}")
        else:
#             print(z2)
            print(f"{array} = {z2}")
#         print(z2)
v=[]
for n in range(numlevels):
    v1=n
    v.append(v1)
print(v)
f = 23
e=-2
d = 4
for level in reversed(range(numlevels)):
    
    value = int(Num / 2**level)
    
    if value == 2:
        for i in range(0,Num-1,value):
            if i == 0 or i == Num -2:
                print("edge adder(32,2,2,2) =",i)
                a1=f"my_adder_{i}.io.i_data_bus =VecInit(Seq(io.i_data_bus({i+1}) io.i_data_bus({i})"
                a2=f"my_adder_{i}.io.i_en_bus:= io.ien_bus({int(i/2)})"
                a3=f"my_adder_{i}.io.i_sel := {0}"
                print(a1) 
                print(a2)
                print(a3)
                if i == 0:
                    a4=f"w_fan_lvl_0({i}) := my_adder_{i}.io.o_adder"
                    print(a4)
                else:
                    a5=f"w_fan_lvl_0({i-1}):= my_adder_{i}.io.o_adder"
                    print(a5)
              
            else:
                print("adder(32,2,2,2) =",i)
                b1=f"my_adder_{i}.io.i_data_bus =VecInit(Seq(io.i_data_bus({i+1}) io.i_data_bus({i})"
                b2=f"my_adder_{i}.io.i_en_bus:= io.ien_bus({int(i/2)})"
                b3=f"my_adder_{i}.io.i_sel := {0}"
                b4=f"w_fan_lvl_0({i-1}) := my_adder_{i}.io.o_adder({0})"
                b5=f"w_fan_lvl_0({i}) := my_adder_{i}.io.o_adder({1})"
                print(b1)
                print(b2)
                print(b3)
                print(b4)
                print(b5)
    else:
        u=0
        
        for i in range(int(value/2)-1,Num-1,value):
            
            if value == 4:
                if i == (value/2)-1 or i == (Num - int(value/2)-1) :
                    print("edge adder(32,2,2,2) =",i)
                    a1=f"my_adder_{i}.io.i_data_bus =VecInit(Seq(w_fan_lvl_0({i}) w_fan_lvl_0({i-1})"
                    a2=f"my_adder_{i}.io.i_en_bus:= io.ien_bus({int(16 + i/4)})"
                    a3=f"my_adder_{i}.io.i_sel := {0}"
                    print(a1) 
                    print(a2)
                    print(a3)
                    if i == 0:
                        a4=f"w_fan_lvl_1({i}) := my_adder_{i}.io.o_adder"
                        print(a4)
                    else:
                        a5=f"w_fan_lvl_1({i-1}):= my_adder_{i}.io.o_adder"
                        print(a5)

#                         print("edge adder",i)
                else:
                    print("adder(32,2,2,2) =",i)
                    b1=f"my_adder_{i}.io.i_data_bus =VecInit(Seq(w_fan_lvl_0({i}) w_fan_lvl_0({i-1})"
                    b2=f"my_adder_{i}.io.i_en_bus:= io.ien_bus({int(16 + i/4)})"
                    b3=f"my_adder_{i}.io.i_sel := {0}"
                    b4=f"w_fan_lvl_1({int((i-1)/2-1)}) := my_adder_{i}.io.o_adder({0})"
                    b5=f"w_fan_lvl_1({int((i-1)/2)}) := my_adder_{i}.io.o_adder({1})"
                    print(b1)
                    print(b2)
                    print(b3)
                    print(b4)
                    print(b5)

            else:
                e += 2
                f += 1 
                print("adder", i)
                # print(value)
                exponent = 0
                while 2 ** exponent < value:
                    exponent += 1
                if 2 ** exponent == value:
                    y = ((exponent * 2) - 2)

                if i == (value / 2) - 1 or i == (Num - int(value / 2) - 1):
                     # Increment f by 1
                    a0 = f"edge adder(32,{y},2,2) = {i}"
                    a1 = f"my_adder_{i}.io.i_data_bus = VecInit(Seq(w_fan_lvl_{(y//2)-1}({i//2}) w_fan_lvl_{(y//2)-1}(({((i-1)//2)-1}))"
                    a2 = f"my_adder_{i}.io.i_en_bus:= io.ien_bus({f})"
                    print(a0)
                    print(a1)
                    print(a2)
                    if value == 8:
                        a3 = f"my_adder_{i}.io.i_sel := Cat(io.i_sel_bus({e+1}),io.i_sel_bus({e}))"
                        print(a3)
                    else:
                        e += 1
                        a3 = f"my_adder_{i}.io.i_sel := Cat(io.i_sel_bus({e+2}),io.i_sel_bus({e+1}),io.i_sel_bus({e}),io.i_sel_bus({e-1}))"
                        e += 1
                        print(a3)
                   
                    if i == 0:
                        a4 = f"w_fan_lvl_{y//2}({u}) := my_adder_{i}.io.o_adder"
                        print(a4)
                        u += 1
                    else:
                        a5 = f"w_fan_lvl_{y//2}({u}) := my_adder_{i}.io.o_adder"
                        print(a5)
                        u += 1
                     
                else:
                    
                    b0 = f"adder(32,{y},2,2) = {i}"
                    b1 = f"my_adder_{i}.io.i_data_bus = VecInit(Seq(w_fan_lvl_{(y//2)-1}({i//2}) w_fan_lvl_{(y//2)-1}(({((i-1)//2)-1}))"
                    b2 = f"my_adder_{i}.io.i_en_bus:= io.ien_bus({f})"
                    print(b0)
                    print(b1)
                    print(b2)
                    if value == 8:
                        b3 = f"my_adder_{i}.io.i_sel := Cat(io.i_sel_bus({e+1}),io.i_sel_bus({e}))"
                        print(b3)
                    else:
                        e += 1
                        b3 = f"my_adder_{i}.io.i_sel := Cat(io.i_sel_bus({e+2}),io.i_sel_bus({e+1}),io.i_sel_bus({e}),io.i_sel_bus({e-1}))"
                        e += 1
                        print(b3)
                    b4 = f"w_fan_lvl_{y//2}({u}) := my_adder_{i}.io.o_adder(0)"
                    u += 1
                    b5 = f"w_fan_lvl_{y//2}({u}) := my_adder_{i}.io.o_adder(1)"
                    u += 1
                  
                   
                    print(b4)
                    print(b5)

