#include<bits/stdc++.h>
using namespace std;
vector<vector<int >> graph;
void nod(int v , int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}
void bfs(int root,int n)
{
    queue<int> node;
    vector<bool> visited(n , false);
    node.push(root);
    visited[root] = true;
    while(!node.empty())
    {
        int current = node.front();
        node.pop();
        cout<<current<<" ";
        for(auto no : graph[current])
        {
            if(!visited[no])
            {
                node.push(no);
                visited[no] = true;
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    graph.reserve(n);
    for(int i = 0;i<n;i++)
    {
        int v , u;
        cin>>v>>u;
        nod(v,u);
    }
    bfs(3 , n);
}