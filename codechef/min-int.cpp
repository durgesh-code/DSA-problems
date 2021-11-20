#include<bits/stdc++.h>
using namespace std;
constexpr int MAXN = (int)1e6; 
long long dp[MAXN+2],dp1[MAXN+2];
long long next0[MAXN+2],next1[MAXN+2];
void solution()
{
        string str;
        cin>>str;
        long long n = str.length();
        long long pos = -1;
        for(long long i = 0; i<n;i++)
        {
            if(str[i]=='0')
            {
                for(long long j = pos+1;j<=i;j++)
                next0[j] = i;
                pos = i;
            }
        }

        for(long long i = pos+1;i<n;i++)
        {
            next0[i] = n;
        }
        if(next0[0] == n)
        {
            cout<<"0\n";
            return;
        }

        pos = -1;
        for(long long i = 0;i<n;i++)
        {
            if(str[i] == '1')
            {
                for(long long j = pos+1;j<=i;j++)
                next1[j] = i;
                pos = i;
            }
        }
        for(long long i = pos+1;i<n;i++)
            next1[i] = n;

        dp[n] = dp[n+1]= 0;
        dp1[n] = dp1[n+1] = 0;
        for(long long i = n-1 ; i>=0 ; i--)
        {
            dp[i] = dp[i+1];
            if(str[i] == '0' && next1[i]<n)
                dp[i] = std::max(dp[i] , dp[next1[i]+1]+1);
            if(str[i] == '1' && next0[i]<n)
                dp[i] = std::max(dp[i] , dp[next0[i]+1]+1);
            dp1[i] = dp1[i+1];
            if(next1[i]<n)
                dp1[i] = std::max(dp1[i] , dp[next1[i]+1]+1);
            //cout<<dp[i]<<" "<<dp1[i]<<endl;
        }

        long long len = dp1[0]+1;
        //cout<<len<<endl;
        long long curind = next1[0]+1;
        string ans = "1";

        for(long long i = 1;i<len;i++)
        {
            if(curind>=n)
            {
                ans.push_back('0');
                continue;
            }
            if(next0[curind]>=n)
            {
                ans.push_back('0');
                curind = next0[curind] + 1;
                continue;
            }
            if(dp[next0[curind]+1]<(len-i-1))
            {
                ans.push_back('0');
                curind = next0[curind] +1;
            }
            else{
                ans.push_back('1');
                curind = next1[curind] + 1;
            }
        }
    cout<<ans<<endl;

}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}