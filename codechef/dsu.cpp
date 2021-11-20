#include<bits/stdc++.h>
using namespace std;
int get(vector<int> &parent , int a)
{
    return parent[a] = (parent[a] == a? a:get(parent , a));
}

int union(vector<int> &parent , vector<int> &rank , int a, int b)
{
    a = get(parent , a);
    b = get(parent , b);
    if(rank[a] == rank[b])
    {
        rank[a]++;
    }
    if(rank[a] > rank[b])
    {
        parent[b] = a;
    }else
    {
        parent[a] = b;
    }
}

int main()
{
    vector
}