#include<bits/stdc++.h>
#define ll long long
#define inf 1e18
using namespace std;
vector<ll> dp;
ll coinCombination(ll *arr , ll n , ll sum)
{
    if(sum < 0) return inf;
    if(sum == 0) return 0;
    if(dp[sum] != inf) return dp[sum];
    for(ll i  = 0;i<n;i++)
    {
        
        dp[sum] = (1 + (coinCombination(arr , n , sum - arr[i]))%1000000007)%1000000007;
    }
    return dp[dp.size() - 1];
}
using namespace std;

void solve()
{
  ll n , x;
  cin>>n>>x;
  ll arr[n];
  for(ll i = 0 ;i<n;i++)
    cin>>arr[i];
  dp.assign(x+1 , inf);
  ll ans = coinCombination(arr , n ,x);
  for(ll i = 0 ;i<x+1;i++)
    cout<<dp[i]<<" ";
  if(ans == inf) 
    cout<<-1<<endl;
  else
    cout<<ans<<endl;
}

int main()
{
  ll t = 1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
}