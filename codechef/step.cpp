#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int step = 0;
    int x = 0,y = 0;
    for(int i = 1;i<=n;i++)
    {
        if(i%6 == 0)
            step = 1;
        else
            step++;
        if(step == 1)
            x+=(i*10);
        if(step == 2)
            y+=(i*10);
        if(step == 3)
            x-=(i*10);
        if(step == 4)
            y-=(i*10);
        if(step == 5)
            x+=(i*10);
    }
    cout<<x<<" "<<y<<endl;
}