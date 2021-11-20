#include<bits/stdc++.h>
using namespace std;
vector<bool> visited(10000 , false);
int inTime[10000], outTime[10000];
int t = 0;
int t1 = 0;
vector<vector<int>> graph;
vector<int> order;
void dfs(int u)
{
    visited[u] = true;
    inTime[u] = t;
    t++;
    order.push_back(u);
    for(auto c : graph[u])
    {
        if(!visited[c])
        {
            dfs(c);
        }
    }
    outTime[u] = t1;
    t1++;
}
void graphConstruction(int u , int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int main()
{
    int v , e;
    cin>>v>>e;
    graph.reserve(10);
    for(int i = 0;i<v;i++)
    {
        int u , V;
        cin>>u>>V;
        graphConstruction(u , V);
    }
    dfs(0);
    for(auto node : order)
    {
        cout<<node<<" "<<inTime[node]<<" "<<outTime[node]<<endl; 
    } 
}