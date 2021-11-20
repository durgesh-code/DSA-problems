#include<stdio.h>
#define ll long long
//using namespace std;
ll n = 4000005;
ll cal[4000005] , ans[4000005];
int main()
{
  //cin.tie(0);
  for(ll i = 0;i<n;i++)
  {
      cal[i] = i;
      ans[i] = 0;

  }
  for(ll i = 2;i<n;i++)
  {
      if(cal[i] == i)
      {
          cal[i] = i-1;
          for(ll j = 2*i;j<n;j+=i)
          {
              cal[j] = (cal[j]/i)*(i-1);
          }
      }
  }
  //cout<<"after first loop"<<endl;

  for(ll i = 1;i<n;i++)
  {
      ans[i]+=i-1;
      for(ll j = 2*i;j<n;j+=i)
      {
          ans[j]+= i* ((1+cal[j/i])/2);
      }
  }
  //cout<<"after second loop"<<endl;
  ll t = 1;
  scanf("%ld",&t);
  while(t--)
  {
    ll k;
    scanf("%ld",&k);
    printf("%ld",ans[4*k+1]);
    
  }
}