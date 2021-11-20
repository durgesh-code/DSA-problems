#include<bits/stdc++.h>
using namespace std;
float angle(string str)
{
    int hr = stoi(str.substr(0 , 2));
    int min = stoi(str.substr(3 , 4));
    float angle = (float)(30*(float)hr - ((float)11/((2.0)*(float)min)));
    return (360.0 - angle);
}
int main()
{
    string str;
    cin>>str;
    cout<<angle(str);
}