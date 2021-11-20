#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int , int>>> graph;
void file_i_o()
{
    std::ios_base::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void addEdge(int u , int v, bool bidirection = true , int wt = 0)
{
    graph[u].push_back(make_pair(v , wt));
    //cout<<"after 1"<<endl;
    if(bidirection)
    {
        graph[v].push_back(make_pair(u , wt));
        //cout<<"after 2"<<endl;
    }
}
void display()
{
    for(auto i : graph)
    {
        for(auto j : i)
        {
            cout<<"{"<<j.first<<","<<j.second<<"}";
        }
        cout<<endl;
    }
}
void bfs(int src , int vertecs)
{
    queue<int> qu;
    vector<bool> visited(vertecs , false);
    qu.push(src);
    visited[src] = true;
    while(!qu.empty())
    {
        int current = qu.front();
        qu.pop();
        cout<<current<<" ";
        for(auto ne : graph[current])
        {
            if(!visited[ne.first])
            {
                qu.push(ne.first);
                visited[ne.first] = true;
            }
        }   
    }
}
int main()
{
    file_i_o();
    int vertecs,edge;
    cin>>vertecs>>edge;
    int u , v,wt;
    graph.resize(vertecs);
    while(edge--)
    {
        cin>>u>>v>>wt;
        
        addEdge(u , v , true , wt);
    }
    display();
    bfs(0 , vertecs);
}