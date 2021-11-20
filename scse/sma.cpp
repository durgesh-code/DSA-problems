#include<bits/stdc++.h>
using namespace std;

char* mini(char *input1 , int input2)
{
    int n = stoi(input1) , k = input2;
    vector<int> nu;
    int a = 0;
    int len = 0;
    while(n != 0)
    {
        a = n%10;
        nu.push_back(a);
        n = n/10;
        len++;
    }
    char ch[len - k];
    sort(nu.begin() , nu.end());
    for(int i = 0;i<len - k;i++)
        ch[i] = nu[i];
    return ch;
}
int main()
{
    string str;
    int n;
    cin>>str;
    char ch[str.length()];
    cin>>n;
    for(int i = 0;i<str.length();i++)
        ch[i] = str[i];
    chr = mini(ch,n);
    for(auto i : chr)
        cout<<i;
}