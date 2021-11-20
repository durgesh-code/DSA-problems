#include<bits/stdc++.h>
#include<vector>
using namespace std;
void permutation(vector<int>& per,vector<int>& ele,vector<bool>& position)
    {
       // cout<<"permution fun is called";
        //cout<<"size of ele"<<ele.size();
        static int find = 0;
        //cout<<find++<<"\n";
        
        if(per.size() == ele.size())
        {
            /*for(auto& it : per)
                cout<<it<<" ";
           // c/out<<"in if part";*/
           int i = 0;
            for(i = 0;i<(per.size() - 1);i++)
            {
                //cout<<per[i] - per[i+1]<<" ";

                if(abs(per[i] - per[i+1]) != 1)
                {
                    
                    continue;
                }
                else
                    break;
                
            }
            if( i == (per.size() - 2 ) && (abs(per[i] - per[i+1])) != 1)
                {
                    for(int j = 0;j<per.size();j++)
                        cout<<per[j]<<" ";
                    cout<<endl;
                }
                

            //cout<<"\n";
        }
        else
        {
            
            //cout<<"in else part";
            for(int i =0 ;i<ele.size();i++)
            {
                //cout<<"permution part is executed";
                if(position[i])
                    continue;
                position[i] = true;
                per.push_back(ele[i]);
                permutation(per,ele,position);
                per.pop_back();
                position[i] = false;
            }
            
        }
    }

int main()
{
    int n;
    cin>>n;
    vector<int> per,ele;
    //static int find = 0;
    int num;
    vector<bool> position(n , false);
    for(int i = 1;i<=n;i++)
    {
        //cin>>num;
        ele.push_back(i);
    }
    permutation(per,ele,position);
    
}