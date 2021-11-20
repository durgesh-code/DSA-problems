#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,solve = 0,i = 0;
    cin>>n>>k;
    int a[n];
    for(i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    i=0;
    for(i = 0 ; i<n ;i++)
    {
        //cout<<a[i];
        if(a[i]<=k)
            solve++;
        else
        {
            break;
        }
    }
    for(int j = n-1; j>i ; j--)
    {
        if(a[j]<=k)
        {
            solve++;
        }
        else{
            break;
        }
    }
    cout<<solve<<endl;
}