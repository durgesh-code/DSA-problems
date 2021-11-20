for i in range(int(input())):
    n , k = input().split(" ")
    h = list(map(int,input().split()))
    sum = 0
    hieght1 = 0
    hieght2 = 0
    count = 0
    l = 0
    for j in h:
        sum+=j
    if(sum < 2*int(k)):
        print(-1)
    elif sum == 2*k:
        print(n)
    else:
        h.sort(reverse=True)
        while l < int(n):
            if (hieght1 < int(k)):
                hieght1+=h[l]
                count+=1
                l+=1
            if (hieght2 < int(k)):
                hieght2+=h[l]
                count+=1
                l+=1
            if(hieght1 >= int(k) and hieght2 >= int(k)):
                break
        print(count)

