#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int sum = 0;
    int rem = 0;
    int co = 0;
    for(int i = 1;i<=n;i++)
    {    
        while(n>0)
        {
            rem = n%10;
            sum+=rem;
            n = n/10;
        }
        if(sum%2 == 0)
            co++;
    }
    return co;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}