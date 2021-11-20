#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n],ax,ay,az,ans;
	    for(long long i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    ax=a[n-1];
	    ay = a[0];
	    az = a[n-2];
	    ans = abs(ax-ay)+abs(ay-az)+abs(az-ax);
	    cout<<ans<<endl;
	}
	return 0;
}
