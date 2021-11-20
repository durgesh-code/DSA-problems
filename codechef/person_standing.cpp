#include<bits/stdc++.h>
using namespace std;
int get(vector<int> &parent , int a)
{
    return parent[a] = (parent[a] == a? a:get(parent , parent[a]));
}

void union(vector<int> &parent , int left , int right){
    left = get(parent , left);
    right = get(parent , right);
    parent[left] = right;
}
int main()
{
    vector<int> parent(n+1);
    for(int i = 0;i<n+1;i++)
        parent[i] = i;
    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        int x; 
        cin>>x
        if(ch == '-')
        {
            union(parent,x,x+1);
        }else{
            int result = get(parent , x)
            if(result = n+1)
            {
                cout<<-1<<endl;

            }
            else{
                cout<<result<<endl;
            }
        }
    }
}