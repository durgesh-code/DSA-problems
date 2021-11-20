//https://www.crazyforcode.com/house-robber-dynamic-programming/

#include<bits/stdc++.h>
using namespace std;


long long maxLootTD(long long *house , vector<long long > & dp , long long i)
{
    if(i == 0 ) return house[0];
    if(i == 1) return dp[1] = std::max(house[0] , house[1]);
    if(dp[i] != 0) return dp[i];
    return dp[i] = std::max(maxLootTD(house , dp ,i-1), maxLootTD(house , dp , i-2) + house[i]);
}

long long maxLootBU(long long *house , vector<long long > & dp , long long n)
{
    dp[0] = house[0];
    dp[1] = house[1];
    for(long long i = 2;i<n; i++)
    {
        dp[i] = std::max(dp[i-1] , dp[i-2]+house[i]);
    }

    return dp[n-1];
}

int main()
{
    long long n;
    cin>>n;
    long long house[n];
    for(long long i  = 0;i<n;i++)
        cin>>house[i];
    vector<long long> dp(n , 0);
    long long ans = maxLootTD(house , dp , n-1);
    long long ansofmaxlootbu = maxLootBU(house , dp , n);
    cout<<ans<<endl;
    cout<<"ans of maxlootbu = "<<ansofmaxlootbu<<endl;
}