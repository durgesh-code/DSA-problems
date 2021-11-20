#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    int cur = 0 , maxTillNow = 0;
    for(int i = 0;i<n;i++)
    {
        cur+=arr[i];
        if(maxTillNow < cur)
            maxTillNow = cur;
        if(cur < 0)
            cur = 0;
        cout<<maxTillNow<<" "<<cur<<endl;
    }
    cout<<maxTillNow;
}