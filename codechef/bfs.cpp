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
void gra(int u , int v , bool bidir = true , int wt = 0)
{
        graph[u].push_back(make_pair(v, wt));
        if(bidir)
            graph[v].push_back(make_pair(u,wt));
        
}
void bfs(int root , int vertex)
{
    queue<int> qu;
    vector<bool> visited(vertex , false);
    qu.push(root);
    visited[root] = true;

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
  int e , v3;
  cin>>e>>v3;
  graph.resize(v3);
  int u , v;
  for(int i = 0;i<v3;i++)
  {
      cin>>u>>v;
      gra(u , v , true , 0);
  }
  bfs(0,v3);
  
}