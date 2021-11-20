#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*int winState(char A[][3])
{
  int count = 0;
  for(int i = 0 ; i<2;i++)
  {
    int flag1 = 0 , flag2 = 0;
    for(int j = 0; j<2;j++)
    {
      if(A[i][j] == A[i][j+1])
        flag1++;
      else
        flag1 = 0;
      if(A[j][i] == A[j+1][i])
        flag2++;
      else
        flag2 = 0;
    }
    if(flag1 == 2 or flag2 == 2)
      count++;
    
  }
  //cout<<"count1 = "<<count;
  if((A[0][0] == A[1][1]) and (A[1][1] == A[2][2]))
    count++;
  if((A[0][2] == A[1][1]) and (A[1][1] == A[2][0]))
    count++;
  //cout<<"count = "<<count<<endl;
  return count;
}*/
void solve()
{
  char A[3][3];
  string temp;
  for(int k = 0;k<3;k++)
  {
    cin>>temp;
    for(int i = 0;i<3;i++)
      A[k][i] = temp[i];
  }
  /*for(int i = 0;i<3;i++)
  {
    for(int j = 0;j<3;j++)
    {
      cout<<A[i][j];
    }
    cout<<endl;
  }*/
      
  int noOfX = 0,noOfO = 0 , noOf_ = 0;
  for(int i = 0; i<3;i++)
  {
      for(int j = 0;j<3;j++)
      {
          if(A[i][j] == '_') noOf_++;
          if(A[i][j] == 'X') noOfX++;
          if(A[i][j] == 'O') noOfO++;
      }
  }
  //cout<<noOf_<<noOfO<<noOfX<<winState(A);
  /*if(noOf_ == 0)
  {
      if(noOfX == 5 and noOfO == 4)
        cout<<1<<endl;
      else
        cout<<3<<endl;
  }else
  {
    if(((noOfX == noOfO+1) or(noOfO == noOfX)) and (winState(A) == 1))
      cout<<1<<endl;
    else{
      if((noOfX == noOfO+1) or(noOfO == noOfX) and (winState(A) < 2))
        cout<<2<<endl;
      else
        cout<<3<<endl;
    }
  }*/
  int wx = 0 , wo = 0;

  if(A[0][0] == 'X' and A[0][1] == 'X' and A[0][2] == 'X')
    wx=1;
  if(A[1][0] == 'X' and A[1][1] == 'X' and A[1][2] == 'X')
    wx=1;
  if(A[2][0] == 'X' and A[2][1] == 'X' and A[2][2] == 'X')
    wx=1;
  if(A[0][0] == 'X' and A[1][0] == 'X' and A[2][0] == 'X')
    wx=1;
  if(A[0][1] == 'X' and A[1][1] == 'X' and A[2][1] == 'X')
    wx=1;
  if(A[0][2] == 'X' and A[1][2] == 'X' and A[2][2] == 'X')
    wx=1;
  if(A[0][0] == 'X' and A[1][1] == 'X' and A[2][2] == 'X')
    wx=1;
  if(A[0][2] == 'X' and A[1][1] == 'X' and A[2][0] == 'X')
    wx=1;

  if(A[0][0] == 'O' and A[0][1] == 'O' and A[0][2] == 'O')
    wo=1;
  if(A[1][0] == 'O' and A[1][1] == 'O' and A[1][2] == 'O')
    wo=1;
  if(A[2][0] == 'O' and A[2][1] == 'O' and A[2][2] == 'O')
    wo=1;
  if(A[0][0] == 'O' and A[1][0] == 'O' and A[2][0] == 'O')
    wo=1;
  if(A[0][1] == 'O' and A[1][1] == 'O' and A[2][1] == 'O')
    wo=1;
  if(A[0][2] == 'O' and A[1][2] == 'O' and A[2][2] == 'O')
    wo=1;
  if(A[0][0] == 'O' and A[1][1] == 'O' and A[2][2] == 'O')
    wo=1;
  if(A[0][2] == 'O' and A[1][1] == 'O' and A[2][0] == 'O')
    wo=1;
  
  if((wx == 1 and wo == 1) or ((noOfX - noOfO) < 0)  or ((noOfX - noOfO) > 1))
    cout<<3<<endl;
  else if(noOfX == 0 and noOfO == 0 and noOf_ == 9)
    cout<<2<<endl;
  else if(wx == 1 and wo == 0 and noOfX > noOfO)
    cout<<1<<endl;
  else if(wx == 0 and wo == 1 and noOfX == noOfO)
    cout<<1<<endl;
  else if(wx == 0 and wo == 0 and noOf_ == 0)
    cout<<1<<endl;
  else if(wx == 0 and wo == 0 and noOf_>0)
    cout<<2<<endl;
  else
    cout<<3<<endl;
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