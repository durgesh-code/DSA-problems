#include<bits/stdc++>
using namespace std;
int main()
{
    int n; //no of vertices
    int m; //no of edge
    cin>>n>>m;
    vector<vector<int>> adjmat(n , vector<int> v(n , 0));
    for(int i = 0;i<m;i++)
    {
        int from , to;
        cin>>from>>to;//this is repersent there is edge from -> to
        adjmat[form][to] = 1;
    }
}