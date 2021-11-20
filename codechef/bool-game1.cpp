#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n , m , k;
        cin>>n>>m>>k;
        vector<long long> g(n+1);
        for(long long i =0 ; i<n;i++)
        {
            cin>>g[i+1];
        }
        vector<vector<pair<long long , long long>>> arr(n+1);
        for(long long i = 0;i<m;i++)
        {
            long long u , v , d;
            cin>>u>>v>>d;
            arr[u].push_back(make_pair(i , d));
            arr[v].push_back(make_pair(i,d));

        }
        vector<vector<pair<long long , long long>>> dp(n+1);
        dp[0].push_back(make_pair(0 , 0));
        vector<long long> ans;
        for(long long i = 1;i<=n;i++)
        {
            vector<pair<long long , long long>> temp;
            temp.insert(temp.end() , dp[i-1].begin() , dp[i-1].end());
            long long curr = 0 , mask = 0;
            set<long long>open;
            for(long long j = i;j>=1;j--)
            {
                curr+=g[j];
                mask^=1LL<<j;
                for(auto & [idx , w] : arr[j])
                {
                    if(open.count(idx))
                    {
                        curr+=w;
                    }
                    else{
                        open.insert(idx);
                    }
                }
                if(j>1)
                {
                    for(auto & [val , old_mask] : dp[j-2])
                    {
                        temp.push_back(make_pair(val+curr , mask^old_mask));
                    }
                }
                else{
                    temp.push_back(make_pair(curr , mask));
                }
            }
            sort(temp.begin() , temp.end());
            reverse(temp.begin() , temp.end());
            for(auto ele : temp)
                ans.push_back(ele.first);
            set<long long > sel;
            long long filled = 0;
            for(long long j = 0;j<temp.size() && filled<k ; j++)
            {
                if(sel.count(temp[j].second)) continue;
                dp[i].push_back(temp[j]);
                filled++;
                sel.insert(temp[j].second);
            }
        }
       // sort(ans.begin() , ans.end() , greater<>());
        
        for(long long i = 0;i<k;i++)
            cout<<dp[n][i].first<<" ";
        cout<<endl;
    }
}