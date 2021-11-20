#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
    long long x , n , m,res =1;
    cin>>x>>n>>m;
    x = x%m;
    while(n > 0)
    {
        //cout<<(n & 1)<<"n and 1"<<endl;
        if(n & 1)
        {
            //cout<<"i am in if block";
            res = res * x ;
        }
        x = x * x ;
        n = n>>1;
        //cout<< x<<" "<<res<<" " <<n<<endl;
    }
    cout<< res <<endl;
    }
}   