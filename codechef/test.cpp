#include<iostream>
using namespace::std;
int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    int elem,rep;
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        if(elem != arr[elem])
            arr[elem] = elem;
        else
        {
            rep = elem;
        }
    }
    cout<<rep<<"is repeat";
}