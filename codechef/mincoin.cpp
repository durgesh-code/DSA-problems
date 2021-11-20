//https://cses.fi/problemset/task/1634
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll minCoin(ll *arr , ll sum , ll n , vector<ll> &dp)
{
    //cout<<"i am running";
    if(sum < 0) return 1e18;
    if(sum == 0) return 0;
    if(dp[sum] != -1) return dp[sum];
    ll result = 1e18;
    for(ll i = 0 ; i<n ; i++)
    {
        ll recursionresult = minCoin(arr , sum - arr[i], n , dp);
        if(recursionresult == 1e18)
        {
            continue;
        }
        result = std::min(result , 1+recursionresult);

    }
    return dp[sum] = result;
    
     
}
void solve()
{
  ll n , x;
  cin>>n>>x;
  ll arr[n];
  for(ll i =0 ; i<n;i++)
    cin>>arr[i];
  vector<ll> dp(x+1 , -1);
  ll result = minCoin(arr , x, n , dp);
  if(result == 1e18) cout<<-1<<endl;
  else cout<<result<<endl;
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