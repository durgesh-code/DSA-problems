#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int [10];
    for(int i = 0;i<10;i++)
        cin>>a[i];
    int mid = 10/2;
    int left = 0 , right = 10-1 , i=0;
    while(i<mid)
    {
        swap(a[left] , a[right]);
        left++;
        right--;
        i++;
    }
    for(int i = 0;i<10;i++)
        cout<<a[i]<<" ";
}