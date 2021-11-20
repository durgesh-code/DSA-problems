#include<bits/stdc++.h>
using namespace std;
long long n = 1000000;
bool prime[1000001];
long long is_prime[1000001];
void primes(){
    long long count = 0;
    prime[0] = prime[1] = false;
    prime[2] = true;
    for(long long i = 3;i<=n;i++)
        prime[i] = true;
    for(long long i = 2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(long long j = i*i;j<=n;j+=i)
            {
                prime[j] = false;
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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    primes();
    
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        for(int i = 0;i<x;i++)
            cout<<is_prime[i]<<"  ";
        if(is_prime[x]>y)
            cout<<"Divyam"<<endl;
        else
            cout<<"Chef"<<endl;
    }

}