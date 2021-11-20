#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
    {
        long long n , k ,sum = 0, hieght1 = 0, hieght2 = 0 ,totalhieght = 0,index1 = 0,index = 0;
        cin>>n>>k;
        long long ele,h[n];
        vector<long long> v;
        for(long long i = 0;i<n;i++)
        {
            cin>>h[i];
            sum+=h[i];
        }
        if(sum<2*k)
            cout<<-1<<endl;
        else if(sum == 2*k)
            cout<<n<<endl;
        else{
            sort(h , h + n , greater<long long>());
            for(long long i = 0;i<n;i++)
            {
                totalhieght+=h[i];
                v.push_back(h[i]);
                index = i;

                if(totalhieght>=2*k)
                {
                    break;
                }

                
            }
            for(long long i = 0;i<v.size();i++)
            {
                hieght1+=v[i];
                index1 = i;
                if(hieght1>=k)
                    break;
            }
            for(long long i = index1+1;i<v.size();i++)
            {
                hieght2+=h[i];

            }
            if(hieght1>=k && hieght2>=k)
            {
                cout<<v.size()<<endl;

            }

        }
    }
	    
	return 0;
}
