#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n , flag = 0 , ans = 0;
        cin>>n;
        long long arr[n];
        for(long long i = 0; i<n;i++)
            cin>>arr[i];
        sort(arr , arr+n);
        for(long long i = 0 ; i<n;i++)
        {
            if(arr[i]>(i+1))
            {
                flag = 1;
                break;
            }
            else{
                ans+=((i+1) - arr[i]);
            }
        }
        if(flag == 1)
        {
            cout<<"Second"<<endl;

        }
        else if(ans%2 == 0)
        {
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}