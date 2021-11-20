#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1;i<=n;i++)
        cin>>arr[i];
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        if(arr[i] == 0)
            ans = 1;
    }
    if(ans == 1)
    {
        cout<<ans<<endl;
    }
    else
    {
        int dp[n][n] = {0};
        for(int i = 1;i<=n;i++)
            dp[i][i] = arr[i];
        int i = 1 , k = 1;
        while(k<n)
        {
            while(i+k<=n)
            {
                if((dp[i+k][i] = dp[i+k-1][i] + dp[i+k][i+k] ) == 0)
                {
                    ans = 1;
                    break;
                }
                else
                {
                    ans = 0;
                }
                i++;
            }
            if(ans == 1)
                break;
            k++;
            i=1;
        }
        /*for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<ans<<endl;
    }
    return 0 ;
}