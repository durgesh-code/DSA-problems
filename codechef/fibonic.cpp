#include<bits/stdc++.h>
using namespace std;
long long fibonicTopDown(long long n ,vector<long long> & dp)
{
    if(n == 0) return 0 ;
    if(n == 1) return 1;
    if(dp[n] != 0) return dp[n];

    return dp[n] = (fibonicTopDown(n-1 , dp) + fibonicTopDown(n-2 , dp));
}


long long fibonicBottomUp(long long n , vector<long long> & dp)
{
    dp[0] = 0;
    dp[1] = 1;
    for(long long i = 2; i<=n ; i++)
        dp[i] = dp[i-1] + dp[i-2];
    
    return dp[n];
}
int main()
{
    long long n;
    cin>>n;

    vector<long long > dp(n+1 , 0);
    long long ans = fibonicTopDown(n , dp);
    long long anstop = fibonicBottomUp(n  , dp);
    cout<<ans<<endl;
    cout<<"ans of bottomup = "<<anstop<<endl;

}