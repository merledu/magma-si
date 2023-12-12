def fn2(mat,s):
    b = [[0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0]]
    count = 0
    index = []
    for i in range(4):
        for j in range(4):
            if mat[i][j] != 0 and mat[i][j] == 1:
                count += 1
                index.append([i,j])
                break
    valid = False
    #for i in range(index[s][0],index[s][0]+1):
    for j in range(index[s][1],4):
        b[index[s][0]][j] = mat[index[s][0]][j]
        if mat[index[s][0]][j] == 4:
            valid = True
            break
#         else:
#             continue
#         break
            
    if (valid == False):
        for i in range(index[s][0]+1,4):
            for j in range(0,4):
                b[i][j] = mat[i][j]
                if mat[i][j] == 4:
                    break
            else:
                continue
            break
    return b
matrix = [
    [0, 1, 2, 3],
    [4, 1, 2, 3],
    [4, 1, 2, 3],
    [4, 0, 1, 2]
]
s=0
print(fn2(matrix,s))
