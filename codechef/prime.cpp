#include<bits/stdc++.h>
#include<math.h>
using namespace std;
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
        long long n;
        cin>>n;
        vector<bool> mark(n + 1, false);
        mark = prime(n , mark);
        long long count = 0;
        for(long long i = 0; i<=n;i++)
        {
            if(mark[i])
            {
                if((i - 1) == (sqrt(i - 1) * sqrt(i - 1)))
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}