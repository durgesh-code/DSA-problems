#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> tree[300003] , val1,val2;
vector<pair<ll , ll>> nodeVal;
void dfs(ll now , ll first = -1)
{
    for(auto x : tree[now]){
        if(x == first) continue;
        dfs(x , now);
    }
    nodeVal.clear();
    for(auto x : tree[now])
    {
        if(x != first) nodeVal.emplace_back(val1[x] , x);
    }
    sort(rbegin(nodeVal) , rend(nodeVal));

    ll tok = 1;
    for(auto [_val , id] : nodeVal) val2[id] = tok++;

    for(auto x : tree[now]){
        if(x!=first) val1[now] += val2[x]*val1[x];
    }
}
void solve()
{
  ll n , x;
  cin>>n>>x;
  val1.assign(n , 1);
  val2.assign(n , 0);
  for(ll i = 0;i<n;i++)
    vector<ll>().swap(tree[i]);
  for(ll i= 0;i<n-1;i++)
  {
      ll u , v;
      cin>>u>>v;
      --u;
      --v;
      tree[u].emplace_back(v);
      tree[v].emplace_back(u);
  } 
  dfs(0);
  cout<<val1[0]%1000000007*x%1000000007<<endl;
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