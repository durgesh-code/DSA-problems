#include<bits/stdc++.h>
using namespace std;
void merge(int arr[] , int l , int mid , int r);
void mergSort(int arr[] , int l , int r)
{
    if(l<r)
    {
        int mid = l+ (r-l)/2;
        mergSort(arr , l , mid);
        mergSort(arr , mid+1,r);
        merge(arr , l , mid, r);
    }
}
void merge(int arr[] , int l , int mid , int r)
{
    int sizeOne = mid - l + 1;
    int sizeTow = r - mid;
    int indexOne = 0 , indexTwo = 0;
    int left[sizeOne] , right[sizeTow];
    
    while(i<=mid and j<=r)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
    while(j<=r)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    for(int i = 0;i<=r;i++)
        cout<<temp[i];
    cout<<endl;
    for(int i = l,p = 0;i<=r;i++,p++ )
        arr[i] = temp[i];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergSort(arr , 0 , n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i];
    }
}