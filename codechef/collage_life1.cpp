#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll minv(ll a , ll b){
    if(a<b)
        return a;
    return b;
}

ll maxv(ll a , ll b)
{
    if(a>b)
        return a;
    return b;
}

ll res(ll n , ll e , ll h , ll a ,ll b , ll c){

    ll ans = 1e15;
    if(n<=0){
        return 0 ;
    }

    if((n<=e) && (n<=h)){
        ans = minv(ans , n*c);
    }

    if((3*n)<=h){
        ans = minv(ans , n*b);
    }

    if((2*n)<=e){
        ans = minv(ans , n*a);
    }
    if((((h-n)/2)>=1)&&(((h-n)/2)>=(n-e))){
        if((b-c)<0){
            ll temp = minv(n-1,(h-n)/2);
            ans = minv(ans , (b-c)*temp+n*c);
        }else{
            ll temp = maxv(1 , n-e);
            ans = minv(ans , (b-c)*temp+n*c);
        }
    }
    if((e-n)>=1 && (e-n)>=(n-h)){
        if((a-c)<0){
            ll temp = minv(n-1,e-n);
            ans = minv(ans,(a-c)*temp+n*c);
        }else{
            ll temp = maxv(1 , n - h);
            ans = minv(ans , (a - c)*temp+n*c);
        }
    }
    if((e/2>=1)&&(e/2 >= (3*n-h+2)/3)){
        if(a-b<0){
            ll temp = minv(n-1,e/2);
            ans = minv(ans , (a-b)*temp+n*b);
        }
        else{
            ll temp = maxv(1 , (3*n - h +2)/3);
            ans = minv(ans , (a-b)*temp+n*b);
        }
    }
    if((e>=3)&&(h>=4)&&(n>=3)){
        ans = minv(ans , a+b+c+res(n-3,e-3,h-4,a,b,c));
    }
    
    return ans;

}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n , e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;

        ll ans = res(n , e, h ,a ,b , c);
        if(ans == 1e15)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
    }
}