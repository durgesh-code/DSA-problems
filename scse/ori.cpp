#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 1;i<=n;i++)
        cin>>arr[i];
    int arrO[n+1];
    int sum = 0,temp = 0;
    for(int i = 1;i<=n;i++)
    {
        temp = arr[i]*i;
        //cout<<temp<<" ";
        arrO[i] = temp - sum;
        sum+=arrO[i];
        //cout<<sum<<endl;
    }
    for(int i = 1;i<=n;i++)
        cout<<arrO[i]<<" ";
}