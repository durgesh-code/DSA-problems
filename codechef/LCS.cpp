#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int dp[s1.length()][s2.length()];
    for(int i = 0 ;i<s1.length();i++)
        for(int j = 0;j<s2.length();j++)
            dp[i][j]  = 0;
    int max = 0 ;
    string result = "";
    cout<<s1.length()<<" "<<s2.length();
    for(int i = 0 ;i<s1.length();i++)
    {
        for(int j = 0;j<s2.length();j++)
        {
            if(s1[i] == s2[j])
            {
                if(i == 0 || j == 0) dp[i][j] = 1;
                else dp[i][j]=dp[i-1][j-1]+1;
                if(dp[i][j]>max){
                    max = dp[i][j];//if finde longer comman sustiring re-iniialize max and update result
                    result = s1.substr(i-max+1,i+1);

                }
                else if(dp[i][j] == max)
                {
                    result = s1.substr(i-max+1,i+1);
                }
                
            }
            else{
                    dp[i][j] = 0;
            }
        } 
        cout<<max<<endl;
    }
    cout<<max<<"  "<<result<<endl;
    for(int i = 0 ;i<s1.length();i++)
    {
        for(int j = 0;j<s2.length();j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}