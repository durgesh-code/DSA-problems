#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "";
    if (n >= 4)
    {
        /*the solution apporch is put the all add no in front and all even no in back*/
        for(int i = 1;i<=n;i++)
        {
            if(i%2 == 0)
                cout<<i<<" ";
            else
                str+=to_string(i)+" ";
        }
        cout<<str;
    }
    else if (n == 1)
        cout<<1;
    else
        cout << "NO SOLUTION";
}