#include<stdio.h>
long long n = 1000000;
int prime[1000001];
long long is_prime[1000001];
void primes(){
    long long count = 0;
    prime[0] = prime[1] = 0;
    prime[2] = 1;
    for(long long i = 3;i<=n;i++)
        prime[i] = 1;
    for(long long i = 2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(long long j = i*i;j<=n;j+=i)
            {
                prime[j] = 0;
            }
        }
    }
    for(long long i = 0 ;i<=n;i++)
    {
        if(prime[i])
            count++;
        is_prime[i] = count;
    }
}
void main()
{
    long long t;
    scanf("%ld",&t);
    primes();
    while(t--)
    {
        long long x,y;
        scanf("%ld%ld",&x,&y);
        printf("%ld",is_prime[x]);n
        if(is_prime[x]>y)
            printf("Divyam\n");
        else
            printf("Chef\n");
    }
}