#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n , m,dif =0,sumc = 0, sumj = 0 ,swap = 0;
		long long flag = 0;
	    cin>>n>>m;
	    long long a[n] , b[m];
	    for(long long i =0 ;i<n;i++)
	    {
	        cin>>a[i];
	        sumc+=a[i];
	    }
	    for(long long i = 0;i<m;i++)
	    {
	        cin>>b[i];
	        sumj += b[i];
	    }
	    if(sumc>sumj)
	        cout<<0<<endl;
	    else
	    {
	        sort(a , a+n);
	        sort(b , b+m);
	        for(long long i= 0;i<n;i++)
	        {
	            dif =  abs(a[i] - b[(m-1) - i]);
                //cout<<"diff = "<<dif<<endl;
	            sumc+=dif;
	            sumj-=dif;
	            if(sumc>sumj)
	            {
	                swap = i+1;
					flag = 1;
	                break;
	            }
	        }
	        if(flag == 1)
				cout<<swap<<endl;
			else
				cout<<-1<<endl;
	    }
	}
	
	return 0;
}
