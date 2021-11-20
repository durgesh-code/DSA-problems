#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
  ll n , m;
  cin>>n>>m;
  ll count = 0;
  vector<ll> A(n+1 , 1);
  for(ll i = 2;i<=n;i++)
  {
      ll a = m%i;
      count += A[a];
      for(ll j = a;j<=n;j+=i)
      {
          A[j]++;
      }
  }
  cout<<count<<endl;
}

int main()
{
  ll t = 1;
  cin>>t;
  while(t--)
  {
    solve();
  }
}