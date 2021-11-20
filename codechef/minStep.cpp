#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll minStepTD(ll n , vector<ll> &dp)
{
    if(n == 2 or n == 3) return 1;
    if(n == 1) return 0;
    if(dp[n] != -1)
    {
        return dp[n];
    }
    ll divByTwo , divByThree;
    if(n%2 == 0 )
    {
        ll divByTwo = 1+minStepTD(n/2 , dp);
    }
    if(n%3 == 0)
    {
        ll divByThree = 1+minStepTD(n/3 , dp);

    }
    ll subByOne = 1+minStepTD(n-1 , dp);

    return dp[n] = std::min({divByThree , divByTwo , subByOne});
}

int main()
{
    ll n ; 
    cin>>n;
    vector<ll> dp(n+1 , -1);
    cout<<minStepTD(n , dp);
}