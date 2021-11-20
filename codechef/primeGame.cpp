
#include<bits/stdc++.h> 
#include<chrono>
using namespace std; 
using namespace std::chrono;
vector<bool> prime(vector<bool> &mark)
{
    long long n = 1000000;
    mark[2] = true;
    for(long long i = 3;i<=n ; i+=2 )
        mark[i] = true;
    for(long long i = 3 ; i*i<=n;i++)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //auto start = chrono::steady_clock::now();
	long long t;
    cin>>t;
    vector<bool> primes(1000001) ;
    long long count = 0;
    //cout<<"before"<<endl;
    primes = prime(primes);
    //cout<<"after"<<endl;
    long long mark[1000001];
    for(long long i = 0; i<=primes.size();i++)
    {
        if(primes[i])
            count++;
        mark[i] = count;
    }
    //cout<<"after loop";
    while(t--){
        long long n , y , count = 0;
        cin>>n>>y;
		count = mark[n];
		//cout<<count;
		//if(count>y)
			//cout<<"Divyam"<<endl;
		//else
			//cout<<"Chef"<<endl;
        if(y==1){
            if(n>2)
                cout<<"Divyam"<<endl;
            else
                cout<<"Chef"<<endl;
        }else{
            if(count>y)
			    cout<<"Divyam"<<endl;
		    else
			    cout<<"Chef"<<endl;
        }

    }
    //auto stop = chrono::steady_clock::now();
   // auto diff = stop - start;
    //cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
} 
