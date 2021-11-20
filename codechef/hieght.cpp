#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,k,l=0;
	    cin>>n>>k;
	    long long h[n],hieght2=0 , hieght1=0,sum=0,count = 0 , index = 0 , sum1 = 0;
		int flag = 0;
		vector<long long> v,v1,v2;
	    for(long long i = 0;i<n;i++)
	    {
	        cin>>h[i];
	        sum+=h[i];
	    }
	    if(sum<2*k)
	        cout<<-1<<"\n";
	   /* else if(sum == 2*k)
	    {
			sort(h , h+n,greater<long long>());
			for(long long i = 0; i<n;i++)
			{
				index = i;
				hieght1+=h[i];
				if(hieght1>=k)
				{
					break;
				}
			}
			for(long long i = index+1; i<n ; i++)
			{
				hieght2+=h[i];
				if(hieght2>=k)
				{
					break;
				}
			}
			if(hieght1>=k && hieght2>=k)
			{
				cout<<n<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}*/
	    else
	    {
	        sort(h , h+n , greater<long long>());
			if(h[0] >= k)
			{
				for(long long i = 1 ; i<n ; i++)
				{
					index = i;
					hieght2+=h[i];
					if(hieght2>=k)
					{
						break;
					}
				}
				cout<<index+1<<endl;
			}
			for(long long i = 0 ; i<n ; i++)
			{
				sum1+=h[i];
				v.push_back(h[i]);
				index = i;
				if(sum1 >= 2*k)
				{
					break;
				}
			}
			v1.push_back(v[0]);
			hieght1 = v[0];
			for(long long i = v.size() - 1; i > 0 ; i--)
			{
				flag = 1;
				if(hieght1>=k)
				{
					hieght1+=v[i];
					v1.push_back(v[i]);
					continue;

				}
				hieght2+=v[i];
				v2.push_back(v[i]);
			}
			if(hieght2 < k)
			{
				for(long long i = index+1;i<n; i++)
				{
					hieght2+=h[i];
					v2.push_back(h[i]);
					if(hieght2 >= k)
					{
						break;
					}
				}
			}
			if(flag == 1)
				cout<<v1.size() + v2.size()<<endl;
	    }
	}
	return 0;
}
