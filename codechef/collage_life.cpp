#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
ll totalItem(ll e , ll h)
{
        ll de = e,dh = h , totalitem = 0,om = 0, mi = 0 , cak = 0 ;
        cak =  std::min(e , h);
        de = de-cak;
        dh = dh-cak;
        
        om = (de/2);
        de = de - om*2;
        mi=(dh/3);
        dh = dh - mi*3;
        totalitem = om+mi+cak;
        return totalitem;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n , e , h , a , b , c , cost = 0;
        cin>>n>>e>>h>>a>>b>>c;
        vector<pair<char , int>> vec;
        vec.push_back(make_pair('a' , a));
        vec.push_back(make_pair('b' , b));
        vec.push_back(make_pair('c' , c));
        sort(vec.begin() , vec.end() , sortbysec);
        //for(int i = 0 ; i<3 ;i++)
        //{
            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
        //}
        
        
        if(n>totalItem(e,h)){
            cout<<"-1"<<endl;
        }
        else{
            ll i = 0;
            while(n!=0)
            {
               // cout<<"e "<<e<<"h "<<h<<endl;
                if(vec[i].first == 'a')
                {
                    if(n!=0)
                    {
                        ll noOfOme = e/2;
                        if(noOfOme>=n)
                        {
                            cost+=(n*vec[i].second);
                            n = 0;
                        }
                        else{
                            cost+=(noOfOme*vec[i].second);
                            e = e-(2*noOfOme);
                            n = n - noOfOme;
                        }
                        if(n>totalItem(e,h))
                        {
                            cost-=(noOfOme*vec[i].second);
                            e = e + (2*noOfOme);
                            n = n + noOfOme;
                        }
                    }
                }
                if(vec[i].first == 'b')
                {
                    if(n!=0)
                    {
                        ll milk = h/3;
                        if(milk>=n)
                        {
                            cost+=(n*vec[i].second);
                            n = 0;
                        }
                        else{
                            cost+=(milk*vec[i].second);
                            h = h-(3*milk);
                            n = n - milk;
                        }
                        if(n>totalItem(e,h))
                        {
                            cost-=(milk*vec[i].second);
                            h =h + (3*milk);
                            n = n + milk;
                        }
                    }
                }
                if(vec[i].first == 'c')
                {
                    if(n!=0)
                    {
                        ll cake = std::min(e , h);
                        if(cake>=n)
                        {
                            cost+=(n*vec[i].second);
                            n = 0;
                        }
                        else{
                            cost+=(cake*vec[i].second);
                            e = e - cake;
                            h  = h - cake;
                            n = n - cake;
                        }
                        if(n>totalItem(e,h))
                        {
                            cost-=(cake*vec[i].second);
                            e =e + cake;
                            h = h+cake;
                            n = n + cake;
                        }
                    }
                }
                i++;
                i=(i%3);
            }
            cout<<cost<<endl;
        }
    }
}