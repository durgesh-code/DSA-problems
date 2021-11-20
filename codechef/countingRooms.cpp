#include<bits/stdc++.h>
using namespace std;
char arr[1000][1000];
vector<vector<int>> graph;
vector<bool> visited(1000000 , false);
void graphConstruction(int n , int m)
{
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
        {
            //if(arr[i][j] == '.')
            //{
                if(i != 0)
                {
                    if(arr[i-1][j] == '.')
                    {
                        graph[i*n+j].push_back((i-1)*n + j);
                    }
                }
                if(j != (m-1))
                {
                    if(arr[i][j+1] == '.')
                    {
                        graph[i*n + j].push_back(i*n + (j+1));
                    }
                }
                if(i != n-1)
                {
                    if(arr[i+1][j] == '.')
                    {
                        graph[i*n + j].push_back((i+1)*n + j);
                    }
                }
                if(j!= 0)
                {
                    if(arr[i][j-1] == '.')
                    {
                        graph[i*n + j].push_back(i*n +(j-1));
                    }
                }
           // }
        }
}
void bfs(int root)
{
    queue<int> qu;
    qu.push(root);
    visited[root] = true;
    int current;
    while(!qu.empty())
    {
        current = qu.front();
        qu.pop();
        for(auto ne : graph[current])
        {
            if(!visited[ne])
            {
                qu.push(ne);
                visited[ne] = true;
            }
        }
    }
}
int main()
{
    int n , m;
    cin>>n>>m;
    for(int i = 0;i<n;i++)
        for(int j =0;j<m;j++)
            cin>>arr[i][j];
    graph.reserve(n*m);
    graphConstruction(n , m);
    cout<<graph.size()<<endl;
    int cc = 0;
    int i = 0;
    for(auto no : graph)
    {
        for(auto ne : no)
        {
            cout<<ne<<" ";
        }
        
    }
    for(auto no : graph)
    {
        for(auto ne : no)
        {
            if(!visited[ne])
            {
                bfs(ne);
                cc++;
            }
        }
    }
    cout<<cc;

}