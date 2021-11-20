#include<bits/stdc++.h>
using namespace std;
int  merge(int arr[] , int l , int mid , int r)
{
    int i = l;
    int j = mid+1;
    int k = 0;
    int count;
    int temp[1000];
    while(i<=l && j<=r)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[i];
            j++;
            k++;
            count+=(mid - i);
        }
    }
    while(i<=l)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=r) 
    {
        temp[k] =  arr[i];
        k++;
        j++;
    }
    for(int i = l,k = 0;i<=r;i++,k++)
        arr[i] = temp[k];
    return count;
}
int mergeSort(int arr[] , int l , int r)
{
    int count = 0;
    if(l<r)
    {
        int mid = (l + r)/2;
        count += mergeSort(arr , l , mid);
        count += mergeSort(arr , mid+1 , r);
        count += merge(arr , l , mid , r);
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    int res = mergeSort(arr , 0 , n-1);
    cout<<res;
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
}