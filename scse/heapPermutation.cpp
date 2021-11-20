#include<bits/stdc++.h>
using namespace std;
void printArr(int *arr , int n)
{
    cout<<endl;
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
}
 void heapPermutation(int *arr, int size , int n)
 {
     if(size == 1)
     {
         printArr(arr , n);
         return;
     }
     else{
         for(int i = 0; i<size;i++)
         {
             heapPermutation( arr ,  size -1,  n);
             if(size%2 == 1)
                swap(arr[0] , arr[size - 1]);
            else
                swap(arr[i] , arr[size - 1]);
         }
     }
 }
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i = 0;i<n;i++)
     {
         arr[i] = i;
     }
     heapPermutation(arr , n ,n);
 }