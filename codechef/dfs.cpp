#include<bits/stdc++.h>
using namespace std;
int inTime[1000];
int outTime[1000];
int inTm = 0 , outTm = 0;
int dfs(int s , vector<bool> & visited , vector<vector<int>> & adjcent)
{
    visited[s] = true;
    inTime[s] = inTm++;
    for(int adjNode: adjcent[s])if(!visited[adjNode]){
        dfs(adjNode , visited , adjcent);
    }
    outTime[s] = outTm++;
}
int main()
{
    int n , m;
    cin>>n>>m;
    vector<<vector<int>> adjcent(n);
    for(int i = 0;i<m;i++)
    {
        int form ,to;
        cin>>form>>to;
        adjcent[form].push_back(to);
    }
}