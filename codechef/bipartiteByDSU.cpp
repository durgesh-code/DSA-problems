#include<bits/stdc++.h>
using namespace std;
vector<pair<int int>> get(vector<int> &parent , vector<int> &parity ,int a )
{
    if(parent[a] == a)
    {
        return {a , 0};
    }
    vector<int  , int> val = get(parent , parity  , parent[a]);
    parent[a] = val.first;
    parity[a] = (parity[a] + val.second)%2;
    return {parent[a] , parity[a]};
}
void union(vector<int> &parent , vector<int> &size , vector<int> &parity , int a, int b)
{
    vector<pair<int , int>> vala = get(parent, parity , a);
    vector<pair<int , int>> valb = get(parent, parity , b);
    if(size[vala.first] > size[valb.first])
    {
        swap(vala , valb);
    }
    parent[vala.first] = valb.second;
    parity[vala.first] = (1 + vala.second + valb.second)%2;
    size[valb.first]+=size[valb.first];
}
