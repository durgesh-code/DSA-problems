n  , m = input().split(" ")
n = int(n)
m = int(m)
res = 1
resu = ""
while(m  > 0):
    if(m & 1):
        res = res*n
        resu = resu + str(res)
        print(resu)
    n = n*n
    m = m>>1
print(resu)