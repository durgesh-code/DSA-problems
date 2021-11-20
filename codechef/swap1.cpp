#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long num;
    cin>>num;
    ostringstream str;
    str<<num;
    string str1 = str.str();
    long long i = 2;
    while(i<str1.length()-2)
    {
        str1 = str1.substr(0 , i) + str1[i+1] +str1[i] +  str1.substr(i+2);
        i+=2;
        if((str1.length()-i)<2)
            break; 
        //cout<<str1;
    }
    
    //cout<<str1;//<<str1.substr(i,i+1);
    num =  stoi(str1);
    cout<<num;
    

}