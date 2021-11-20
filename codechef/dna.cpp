#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> a;
    int count = 0;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
            count++;
        else
        {
            a.push_back(count+1);
            count = 0;
        }
    }
    cout<<*max_element(a.begin() , a.end());
}