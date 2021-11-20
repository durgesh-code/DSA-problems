#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1005][1005],b[1005][1005];
bool check(ll a[1005][1005],ll b[1005][1005],ll r ,ll c)
{
    for(ll i= 0 ;i<r;i++)
    {
        for(ll j = 0;j<c;j++)
        {
            if(a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c,x;
        cin>>r>>c>>x;
        for(ll i = 0;i<r;i++)
        {
            for(ll j = 0; j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i = 0;i<r;i++)
        {
            for(ll j = 0; j<c;j++)
            {
                cin>>b[i][j];
            }
        }
        ll dif = 0;
        if(r<x && c<x)
        {
            if(check(a , b, r, c))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(r<x)
        {
            for(ll i = 0;i<r;i++)
            {
                for(ll j = 0 ;j<=(c-x);j++)
                {
                    if(a[i][j]==b[i][j])
                        continue;
                    else{
                        dif = b[i][j] - a[i][j];
                        a[i][j] += dif;
                        ll k = 1;
                        while(k<x)
                        {
                            a[i][j+k]+=dif;
                            k++;
                        }
                    }
                }
            }
            if(check(a , b ,r ,c))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(c<x)
        {
            for(ll i = 0;i<c;i++)
            {
                for(ll j = 0;j<=(r-x);j++)
                {
                    if(a[j][i] == b[j][i])
                        continue;
                    else
                    {
                        dif = b[j][i] - a[j][i];
                        a[j][i]+=dif;
                        ll k = 1;
                        while(k<x)
                        {
                            a[j+k][i]+=dif;
                            k++;
                        }
                    }
                }
            }
            if(check(a , b,r,c))
                cout<<"Yes"<<endl;
            else 
                cout<<"No"<<endl;
            
        }
        else if(c>=x && r>=x)
        {
            for(ll i = 0;i<r;i++)
            {
                for(ll j = 0 ;j<=(c-x);j++)
                {
                    if(a[i][j]==b[i][j])
                        continue;
                    else{
                        dif = b[i][j] - a[i][j];
                        a[i][j] += dif;
                        ll k = 1;
                        while(k<x)
                        {
                            a[i][j+k]+=dif;
                            k++;
                        }
                    }
                }
            }
            for(ll i = 0;i<c;i++)
            {
                for(ll j = 0;j<=(r-x);j++)
                {
                    if(a[j][i] == b[j][i])
                        continue;
                    else
                    {
                        dif = b[j][i] - a[j][i];
                        a[j][i]+=dif;
                        ll k = 1;
                        while(k<x)
                        {
                            a[j+k][i]+=dif;
                            k++;
                        }
                    }
                }
            }
            if(check(a,b,r,c))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }
    }
}