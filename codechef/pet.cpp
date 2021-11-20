#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , n , p;
    cin>>m>>n>>p;
    if(m>=n)
        int rem = m - n;
    else
        rem = 0;
    int no = min(min(m , n) , rem+p );
    cout<<no;
}