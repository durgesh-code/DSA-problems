#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        cout<<"Enter entry: ";
        float entry;
        cin>>entry;
        cout<<endl<<"enter stop loss: ";
        float stopLoss;
        cin>>stopLoss;
        cout<<endl<<"first target: "<<(entry+(entry - stopLoss));
        cout<<endl<<"second target: "<<(entry+(entry - stopLoss)*2);
        cout<<endl<<"third target: "<<(entry+(entry - stopLoss)*3);
        cout<<endl<<"fourth target: "<<(entry+(entry - stopLoss)*4);
        cout<<endl<<"fifth target: "<<(entry+(entry - stopLoss)*5)<<endl;
    }
}