for i in range(int(input())):
    n , k = input().split(" ")
    h = list(map(int,input().split()))
    sum = 0
    hieght1 = 0
    hieght2 = 0
    count = 0
    sum1 = 0
    for j in h:
        sum+=j
    if(sum < 2*int(k)):
        print(-1)
    elif sum == 2*k:
        print(n)
    else:
        h.sort(reverse=True)
        for l in h:
            sum1+=l
            count+=1
            if sum1>=2*int(k):
                break            
        print(count)
        

