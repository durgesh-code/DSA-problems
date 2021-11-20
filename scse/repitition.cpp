#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int largest = 0,length = 0;
    for(int i = 0;i<str.length()-1;i+=(length!=0?length:1))
    {
        length = 0;

        for(int j = i;j<str.length()-1;j++)
        {
            //cout<<str[j]<<" "<<str[j+1]<<endl;
            if(str[j] ==  str[j+1])
                length++;
            else 
                break;
        }
        //cout<<length<<endl;
        if(length>largest)
            largest = length;
        
    }
    cout<<largest+1;
}