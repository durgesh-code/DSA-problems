for i in range(int(input())):
    c = int(input())
    s = bin(c)
    s = s[2:]
    #print(s)
    a = "1"
    b = "0"
    for e , i in enumerate(s):
        if e == 0:
            continue
        if i =='1':
            a+="0"
            b+="1"
        if i == '0':
            a+="1"
            b+="1"
    #print(a)
    #print(b)
    a = int(a , 2)
    b = int(b , 2)
    print(a*b)
    