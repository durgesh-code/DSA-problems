#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    string ele;
    int n;
    for(int i = 0;i<n;i++)
    {
        cin>>ele;
        str.push_back(ele);

    }
    int count = 0;
    for(auto i : str)
    {
        if(i[0] == 'a')
            count++;
    }
    cout<<count;
}