def dis(a1 , a2):
    st = len(set(a1+a2))
    return st
for t in range(int(input())):
    n = int(input())
    l = input().split()
    b = {}
    for i in l:
        p = i[1:]
        if p in b:
            b[p].append(i[0])
        else:
            b[p] = [i[0]]
    b1 = list(b.key())
    s = 0
    for i in range(len(b)):
        for j in range(i+1,len(b)):
            tem = dis(b[b1[i]],b[b1[j]])
            s+=(tem-len(b[b1[i]]))*(tem - len(b[b1[j]]))
    print(2*s)