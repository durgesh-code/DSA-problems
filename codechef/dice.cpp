#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long ans = 0;
        if(n<4)
        {
            if(n==1)
                ans = 20;
            if(n == 2)
                 ans = 40;
            if(n == 3)
                ans = 51;
        }
        else
        {    ans = (n/4)*44+(4-n%4)*4;
            if(n%4 == 1 or n%4 == 2)
                ans+=(n%4)*20;
            if(n%4 == 3)
                ans+=51;
        }
        cout<<ans<<endl;
	}
	return 0;
}
