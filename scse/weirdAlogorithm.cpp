#include<bits/stdc++.h>
using namespace std;
long long weirdAlogorithm(long long n)
{
    if(n == 1)
    {
        cout<<1<<" ";
        return 1;
    }
    if(n %2 == 0)
    {
        cout<<n<<" ";
        weirdAlogorithm(n/2);
    }
    if(n % 2 != 0)
    {
        cout<<n<<" ";
        weirdAlogorithm(n*3+1);
    }
}
int main()
{
    long long n;
    cin>>n;
    weirdAlogorithm(n);
    return 0;

}