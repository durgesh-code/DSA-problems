#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long count1 = 1;
vector<bool> prime(long long n , vector<bool> &mark)
{
    mark[2] = true;
    for(long long i = 3;i<=n ; i+=2 )
        mark[i] = true;
    for(long long i = 3 ; i*i<n;i++)
    {
        if(mark[i])
        {
            for(long long j = i*i ; j<=n;j+=i)
            {
                mark[j] = false;
                count1++;
            }
        }
    }
    return mark;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n , y;
        cin>>n>>y;
        vector<bool> mark(n + 1, false);
        mark = prime(n , mark);
        long long count = 0;
        for(long long i = 0; i<=n;i++)
        {
            if(mark[i]){
                count++;
            }
        }
        cout<<count<<"   "<<count1;
        if(count>y){
            cout<<"Divyam"<<endl;
        }else{
            cout<<"Chef"<<endl;
        }
    }
}