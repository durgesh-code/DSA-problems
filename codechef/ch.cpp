#include<bits/stdc++.h>
using namespace std;
int getIndex(vector<int> a , int ele)
{
    auto it = find(a.begin() , a.end() , ele);
    int index = it - a.begin();
    return index;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> wie;
        vector<int> li;
        int ele;
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            wie.push_back(ele);
        }
        //cout<<"pass wie loop"<<endl;
        for(int i = 0;i<n;i++)
        {
            cin>>ele;
            li.push_back(ele);
        }
        //cout<<"pass li loop"<<endl;
        vector<int> pos(n);
        for(int i = 0;i<n;i++)
        {
            pos[i] = i;
        }
        //cout<<"pass pos loop"<<endl;
        vector<int> ref(n);
        for(int i = 0;i<n;i++)
        {
            ref[i] = wie[i];
        }
        //cout<<"pass ref loop"<<endl;
        sort(ref.begin() , ref.end());
        //cout<<"pass sorting loop"<<endl;
        int ans = 0;
        for(int i  = 1 ;i<n;i++){
            int index = getIndex(wie , ref[i]);
            //cout<<"pass index loop"<<endl;
            int p = pos[getIndex(wie , ref[i - 1])];
            int c = index;
            while(c<=p){
                c+=li[index];
                pos[index] = c;
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}