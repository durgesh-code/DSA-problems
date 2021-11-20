#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , n;
    cin>>m>>n;
    string magezin[m];
    string note[n];
    for(int i = 0;i<m;i++)
        cin>>magezin[i];
    for(int i = 0;i<n;i++)
        cin>>note[i];
    vector<pair<bool , vector<string>>> check(5*'z');
    check[0].first = true;
    check[0].second.push_back("durgesh");
    cout<<check[0].first<<" "<<check[0].second[0];
    int ind = 0;
    for(auto i : magezin)
    {
        ind = 0;
        for(auto j : i)
        {
            ind+=j;
        }
        check[ind].first = true;
        check[ind].second.push_back(i);
    }
    bool ch = false;
    for(auto i : note)
    {
        ind = 0;
        for(auto j : i)
        {
            ind+=j;
        }
        if(check[ind].first)
        {
            ch = false;
            for(auto k : check[ind].second)
            {
                if(i == k)
                {
                    ch = true;
                    break;
                }
            }
            if(ch)
                continue;
            else
                break;        
        }
        else
            break;
    }

}