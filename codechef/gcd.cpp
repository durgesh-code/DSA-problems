#include<iostream>
using namespace std;
long long gcd(long long a  , long long b)
{
    long long c;
    int count = 0;
    while(b)
    {
        a%=b;
        c = a + b;
        a = c - a;
        b = c - a;
        count++;
    
    }    
    cout<<"count"<<count;
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a , b , c;
        cin>>a>>b>>c;
        long long g = gcd(a , b);
        //cout<<c<<" "<<g<<" c and g"<<" " <<c %g<<endl;
        cout<<"g  = "<<g<<endl;
        if(c % g == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}