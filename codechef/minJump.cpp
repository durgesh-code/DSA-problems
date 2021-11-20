#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        int sum = 0;
        int* step;
        int count = 0;
        bool ch = false;
        if(arr[0] == 0)
            return -1;
        count++;
        while(1)
        {
            step = max_element(arr + sum +1 , arr + arr[sum] + 1);
            sum  = sum + arr[sum];
        }
        // Your code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends