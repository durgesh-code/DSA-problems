 
def isPrime(n) : 

    if (n <= 1) : 
        return False
    if (n <= 3) : 
        return True
    if (n % 2 == 0 or n % 3 == 0) : 
        return False
 
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
 
    return True
for i in range(int(input())):
    n = input()
    if n=="0":
        print("Yes")
        continue
    n1 = "".join(reversed(n))
    #print(n1)
    pl = ""
    prime = ""
    if n == n1:
        pl = True
    if isPrime(int(n))==True:
        prime = True
    if pl == True and prime == True:
        print("Yes")
    else:
        print("No")