#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long cnt = 0 ;

long long targetSum(long long n , vector<long long> &dp)
{
    cnt  = cnt%mod;
   // cout<<"cnt = "<<cnt;
    if(n == 0)
    {
        //cout<<"i hit base cace"<<endl;
        return cnt = cnt +1;
    }

    if(dp[n] != -1) return cnt = cnt + dp[n];
    for(int i = 1;i<=6;i++)
    {
        if((n-i)>=0) 
        {
            dp[n] = targetSum(n-i , dp);
        }
        else{
            return cnt;
        }
    }
    return cnt;
}

int main()
{
    long long n;
    cin>>n;
    vector<long long> dp(n+1 , -1);
    long long ans = targetSum(n , dp);
    //for(int i = 0;i<n ; i++)
        //cout<<dp[i]<<" ";
    //cout<<"\n";
    ans = ans%mod;
    cout<<ans<<endl;

}