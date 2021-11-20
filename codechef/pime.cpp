#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<0)
        return false;
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int diffrenceMaxMinPrime(vector<int> arr)
{
    int length = arr.size();
    int small , large;
    sort(arr.begin() , arr.end());
    int i = 0;
    for(i = 0 ;i<length;i++)
    {
        if(isPrime(arr[i]))
        {
            small = arr[i];
            break;
        }
    }
    if(i == length - 1)
        return 0;
    for(i = length -1;i>=0;i--)
    {
        if(isPrime(arr[i]))
        {
            large = arr[i];
            break;
        }
    }
    if(i == 0 || small == large)
        return 0;
    return large - small;
}
int main()
{
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i= 0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<diffrenceMaxMinPrime(num);
}