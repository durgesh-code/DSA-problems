#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
    cin>>t;
	while(t--)
	{
	    long long n , k , x,y,x1,y1,x2,y2;
	    int rem;
	    cin>>n>>k>>x>>y;
	    if(x == y)
	        cout<<n<<" "<<n<<endl;
	    else
	    {
	        rem = k % 4;
	        if(x<y){
	                x1 = 0;
	                y1 = y - x;
	            }
	            else
	            {
	                y1 = 0;
	                x1 = x - y;
	            }
	        if(x > y)
	        {
	            x2 = n;
	            y2 = y +(n - x);
	        }
	        else{
	            y2 = n;
	            x2 = x +(n - y);
	        }
	        if(rem == 0)
	        {
	            cout<<x1<<" "<<y1<<endl;
	            
	        }
	        if(rem == 1)
	        {
	            cout<<x2<<" "<<y2<<endl;
	        }
	        if(rem == 2)
	        {
	            cout<<y2 <<" "<<x2<<endl;
	        }
	        if(rem == 3)
	        {
	            cout<<y1<<" "<<x1<<endl;
	        }
	    }
	}
	return 0;
}

