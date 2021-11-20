#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , x , n,y,c;
    cin>>m>>x>>n>>y>>c;
    int de = m+1 , in = -1;
    bool che = false;
    while(1)
    {
        //cout<<(de*x + in*y)<<endl;
        if(de != 0)
            de--;
        if(in != n)
            in++;
        if((de*x + in*y) == c)
        {
            che = true;
            break;
        }
        
        if( de == 0 && in == n)
            break;
        //cout<<de<<" "<<in<<endl;
    }
    if(che)
        cout<<"possible";
    else
        cout<<"no posible";
}