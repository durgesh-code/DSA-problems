#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll i;
    scanf("%ld",&i);
    while(i--){
        ll c,y = 0,pre = 0,ja = 0;
        scanf("%ld",&c);
        float p = log2(c);
        int pw = ceil(p);
        //cout<<pw<<endl;
        //cout<<pow(2 , pw);
        if(pw == (int)log2(c))
            pw++;
        for(ll j=pow(2 , pw);j>0;j--)
        {
            y = (j^c);
            //cout<<"y = "<<y<<endl;
            if(y<=pow(2 , pw))
            {
                if(pre<(j*y)){
                    pre = j*y;
                    ja = j;
                }    
            }
        }
        printf("%ld\n",pre);
        cout<<ja<<" "<<y<<endl;
    }
    
}