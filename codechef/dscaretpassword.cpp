//https://codeforces.com/problemset/problem/1263/D
//connected component in graph by dsu
#include<bits/stdc++.h>
using namespace std;
int get(vector<int> &parent , int a)
{
    return parent[a] = (parent[a] == a? a:get(parent , parent[a]));
}
void union(vector<int> &parent , vector<int> &rank , int a , int b)
{
    a = get(parent , a);
    b = get(parent , b);
    if(rank[a] == rank[b]){
        rank[a]++;
    }
    if(rank[a] > rank[b])
    {
        rank[b] = a;
    }
    else{
        rank[a] = b;
    }
}
int main()
{
    vector<int> parent(27);
    vector<int> rank(27 , 1);
    
}