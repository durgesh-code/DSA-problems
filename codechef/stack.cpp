#include<iostream>
using namespace std;
class stack{
    
    char data[100];
    int ind = -1;
    public:
    void push(char ele)
    {
        ind++;
        data[ind] = ele;
    }
    void pop()
    {
        ind--;
    }
    char top()
    {
        return data[ind];
    }
    bool empty()
    {
        if(ind == -1)
            return true;
        else
            return false;
        
    }
    bool full()
    {
        if(ind == 100)
            return true;
        else 
            false;
    }

};
int main()
{
    stack s;
    string str;
    cin>>str;
    for(auto i : str)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

}