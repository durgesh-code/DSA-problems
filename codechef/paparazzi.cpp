#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<pair<long long , long long>> p , st;
        for(long long i = 0; i<n;i++){
            long long h;
            cin>>h;
            p.push_back({i+1 , h});
        }
        if(n == 2){
            cout<<1<<endl;
        }
        else{
            st.push_back(p[0]);
            st.push_back(p[1]);
            long long ans = 1,sz = st.size();
            for(long long i = 2;i<n;i++)
            {
                while(st.size()>=2)
                {
                    double s = ((double)st[sz - 1].second - (double)st[sz - 2].second)/((double)st[sz-1].first - (double)(st[sz-2].first));
                    double s1 = ((double)p[i].second - (double)st[sz - 1].second)/((double)p[i].first - (double)st[sz - 1].first);
                    if(s<=s1)
                    {
                        st.pop_back();
                        sz--;
                    }
                    else{
                        break;
                    }
                }
                st.push_back(p[i]);
                sz++;
                ans = std::max(ans , st[sz - 1].first - st[sz - 2].first);
            }
            cout<<ans<<endl;
        }
    }
}