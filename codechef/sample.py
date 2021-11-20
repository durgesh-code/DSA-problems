for i in range(int(input())):
    countx = 0
    counto = 0
    space = 0
    A = []
    for j in range(3):
        temp = input()
        A.append(temp)
    for k in range(3):
        for l in range(3):
            if A[k][l] == "X":
                countx+=1
            elif A[k][l] == "O":
                counto+=1
            else:
                space+=1
    wx = 0
    wo = 0
    if(A[0][0] == "X" and A[0][1] == "X" and A[0][2] == "X"):
        wx=1
    if(A[1][0] == "X" and A[1][1] == "X" and A[1][2] == "X"):
        wx=1
    if(A[2][0] == "X" and A[2][1] == "X" and A[2][2] == "X"):
        wx=1
    if(A[0][0] == "X" and A[1][0] == "X" and A[2][0] == "X"):
        wx=1
    if(A[0][1] == "X" and A[1][1] == "X" and A[2][1] == "X"):
        wx=1
    if(A[0][2] == "X" and A[1][2] == "X" and A[2][2] == "X"):
        wx=1
    if(A[0][0] == "X" and A[1][1] == "X" and A[2][2] == "X"):
        wx=1
    if(A[0][2] == "X" and A[1][1] == "X" and A[2][0] == "X"):
        wx=1
    
    if(A[0][0] == "O" and A[0][1] == "O" and A[0][2] == "O"):
        wo=1
    if(A[1][0] == "O" and A[1][1] == "O" and A[1][2] == "O"):
        wo=1
    if(A[2][0] == "O" and A[2][1] == "O" and A[2][2] == "O"):
        wo=1
    if(A[0][0] == "O" and A[1][0] == "O" and A[2][0] == "O"):
        wo=1
    if(A[0][1] == "O" and A[1][1] == "O" and A[2][1] == "O"):
        wo=1
    if(A[0][2] == "O" and A[1][2] == "O" and A[2][2] == "O"):
        wo=1
    if(A[0][0] == "O" and A[1][1] == "O" and A[2][2] == "O"):
        wo=1
    if(A[0][2] == "O" and A[1][1] == "O" and A[2][0] == "O"):
        wo=1
    
    if (wx == 1 and wo == 1) or (countx - counto < 0 ) or (countx - counto > 1):
        print(3)
    elif (countx == 0 and counto == 0 and space == 9):
        print(2)
    elif(wx == 1 and wo == 0 and countx > counto):
        print(1)
    elif (wx == 0 and wo == 1 and countx == counto):
        print(1)
    elif(wx == 0 and wo == 0 and space == 0):
        print(1)
    elif(wx == 0 and wo == 0 and space > 0):
        print(2)
    else: 
        print(3)


