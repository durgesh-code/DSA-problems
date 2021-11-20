#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
ll cnt = 0 ;
using namespace std;
ll coniCombination(ll *coins ,ll n , ll sum , vector<ll> &dp)
{
    //cout<<n<<sum;
    //cout<<"i am calling"<<endl;
    cnt = cnt%mod;
    ll result = 0;
    //if(sum < 0 ) return 1e18;
    //cout<<"reach 1"<<endl;
    if(sum == 0) return result = result+1;
    //cout<<"reach 2"<<endl;
    if(dp[sum] != 0) return cnt = cnt+dp[sum];
    //cout<<"reach last"<<endl;
    for(ll i = 0 ; i<n;i++)
    {
      
        //cout<<"i am in loop"<<endl;
        if((sum - coins[i]>=0))
        {
            result = coniCombination(coins , n , sum - coins[i] , dp);
            dp[sum] = result;
            cnt = cnt + result;
        }
        else
            return 0;
    }
    //cout<<"i reach last"<<endl;
    return cnt;
}
void solve()
{
  ll n ,x;cin>>n>>x;
  ll coin[n];
  for(ll i = 0;i<n;i++)
    cin>>coin[i];
  vector<ll> dp(x+1 , 0);
  ll result = coniCombination(coin , n , x, dp);
  result=result%mod;
  for(ll i = 0 ;i<=x;i++)
    cout<<dp[i]<<" ";
  cout<<endl;
  cout<<result<<"\n";
  //cout<<cnt;
  
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