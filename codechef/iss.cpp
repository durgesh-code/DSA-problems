#include<iostream>
//#include<stdio.h>
//#define int long long
using namespace std;
int n = 4000005;
int cal[4000005] , ans[4000005];
int main()
{
  cin.tie(0);
  for(int i = 0;i<n;i++)
  {
      cal[i] = i;
      ans[i] = 0;

  }
  for(int i = 2;i<n;i++)
  {
      if(cal[i] == i)
      {
          cal[i] = i-1;
          for(int j = 2*i;j<n;j+=i)
          {
              cal[j] = (cal[j]/i)*(i-1);
          }
      }
  }
  //cout<<"after first loop"<<endl;

  for(int i = 1;i<n;i++)
  {
      ans[i]+=i-1;
      for(int j = 2*i;j<n;j+=i)
      {
          ans[j]+= i* ((1+cal[j/i])/2);
      }
  }
  //cout<<"after second loop"<<en
  int t = 1;
  scanf("%d",&t);
  while(t--)
  {
    int k;
    scanf("%d",&k);
    printf("%d",ans[4*k+1]);
  }
  return 0;
}