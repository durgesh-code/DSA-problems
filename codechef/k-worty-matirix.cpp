#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n , m  , k;
        cin>>n>>m>>k;
        long long mat[n+1][m+1];
        memset(mat , 0 ,sizeof(mat));
        for(long long i = 1; i<=n ;i++)
        {
            for(long long j = 1 ;j<=m;j++)
            {
                cin>>mat[i][j];
            }
        }
        for(long long i = 1 ; i<=n;i++)
        {
            for(long long j = 1;j<=m;j++)
            {
                mat[i][j]+=mat[i][j-1];
            }
        }
        for(long long j = 1 ; j<=m;j++)
        {
            for(long long i = 1;i<=m;i++)
            {
                mat[i][j]+=mat[i-1][j];
            }
        }

        long long ans = 0;
        for(long long si = 1;si<=n;si++)
        {
            for(long long i = 1; i<=n - si+1;i++)
            {
                long long lo = 1 , hi = n - si +1,mid,p,flag = 0;
                while(lo <= hi)
                {
                    mid = (hi + lo)/2;
                    long long sum = mat[i+si-1][mid+si-1] - mat[i+si-1][mid - 1] - mat[i-1][mid+si-1]+mat[i-1][mid-1];
                    if(sum >= k*si*si)
                    {
                        hi = mid - 1;
                        p = mid;
                        flag = 1;
                    }
                    else{
                        lo = mid + 1;

                    }
                }
                if(flag == 1)
                {
                    ans+=(m - si - p +2);
                }
            }
        }
        cout<<ans<<"\n";

    }
}