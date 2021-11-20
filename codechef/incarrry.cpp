#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    long long max = 0,sum = 0,ai;
    for(long long i = 0 ; i<n ; i++)
    {
        cin>>ai;
        if(ai<max){sum+=(max - ai);}
        else{max = ai;}
    }
    
    cout<<sum<<"\n";
}