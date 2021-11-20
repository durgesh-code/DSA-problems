#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n ,m , k;
        cin>>n>>m>>k;
        vector<long long> g(n+1);
        for(long long i = 0;i<n;i++)
            cin>>g[i+1];
        vector<vector<pair<long long , long long>>> arr(n+1) , dp(n+1);
        for(long long i = 0; i<m;i++)
        {
            long long u , v , d;
            cin>>u>>v>>d;
            arr[u].push_back(make_pair(i , d));
            arr[v].push_back(make_pair(i , d));
            cout<<"i am in 1 loop"<<endl;
        }
        dp[0].push_back(make_pair(0 , 0));
        for(long long i = 1;i<=n;i++)
        {
            cout<<"i am exite tihis sec loop start with i = "<<i<<endl;

            vector<pair<long long ,long long>> temp;
            temp.insert(temp.end() , dp[i-1].begin(),dp[i-1].end());
            long long carry = 0, mask = 0;
            set<long long> open;
            for(long long j = i;j>=1;j--)
            {
                carry+=g[j];
                mask^=1LL<<k;
                for(auto & x:arr[j])
                {
                    if(open.count(x.first))
                        carry+=x.second;
                    else
                        open.insert(x.first);
                     cout<<"i am in 5 loop"<<endl;   
                }
                if(j>1)
                {
                    for(auto & xj:dp[j-2])
                    {
                        temp.push_back(make_pair(xj.first+carry,mask^xj.second));
                        cout<<"i am in 4 loop"<<endl;
                    }
                }
                else{
                    temp.push_back(make_pair(carry , mask));
                }
                cout<<"i am in 2 loop"<<endl;
            }
            cout<<"i am exite tihis loop"<<endl;
            sort(temp.begin() , temp.end());
            reverse(temp.begin() , temp.end());
            cout<<"i am pass this two stetment"<<endl;
            set<long long> set;
            long long fill = 0;
            cout<<"i am pass this two stetment"<<endl;
            for(long long j = 0;(j<temp.size() && fill<k);j++)
            {
                cout<<"i am in sec loop"<<endl;
                if(set.count(temp[j].second));
                    continue;
                dp[i].push_back(temp[j]);
                fill++;
                set.insert(temp[j].second);
                cout<<"i am in 3 loop"<<endl;
            }
            cout<<"i am exite tihis sec loop end with i = "<<i<<endl;

        }
        cout<<"out of final loop"<<endl;
        //cout<<dp[n][1].first<<"k"<<k<<endl;
        //for(int i = 0 ; i<temp.size();i++)
                //cout<<"temp = "<<temp[i].first<<" "<<temp[i].second<<endl;
        for(long long i = 0 ;i<n;i++)
            for(long long j = 0 ; j<k;j++)
                cout<<"dp["<<i<<"]"<<"["<<j<<"] = "<<dp[i][j].first<<endl;
        for(long long i = 0;i<k;i++)
            cout<<dp[n][i].first<<" ";
        cout<<endl;
    }
}