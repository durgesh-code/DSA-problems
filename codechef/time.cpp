#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
   string hour = s.substr(0,2);
   string id = s.substr(6,2);
   int iHour = stoi(hour.c_str());

   if( id == "PM" )
   {
       if( iHour != 12 )
           iHour += 12;

       hour = to_string(iHour);
   }

   if( id == "AM" )
   {
       if( iHour == 12 )
           hour = "00";
       else if( iHour < 10 )
           hour = "0" + to_string(iHour);
       else
           hour = to_string(iHour);
   }

   return hour + s.substr(2,3);
}
const vector<string> explode(const string& s, const char& c)
{
	string buff{""};
	vector<string> v;
	
	for(auto n:s)
	{
		if(n != c) buff+=n; else
		if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);
	
	return v;
}
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        string mtime,ans = "";
        cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' ); 
        getline(cin,mtime);
        //cout<<mtime;
        mtime = timeConversion(mtime);
        vector<string> te{explode(mtime , ':')};
        mtime = te[0]+te[1];
        int t = stoi(mtime.c_str());
        int n;
        cin>>n;
        while(n--)
        {
            string str;
            cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' ); 
            getline(cin,str);
            vector<string> st;
            st.push_back(str.substr(0 , 7));
            st.push_back(str.substr(9,16));
            str = timeConversion(st[0]);
            string str1 = timeConversion(st[1]);
            st = explode(str , ':');
            str = st[0]+st[1];
            st = explode(str1 , ':');
            str1 = st[0]+st[1];
            int li = stoi(str.c_str());
            int ri = stoi(str1.c_str());
            if(t>=li && t<=ri)
            {
                ans+='1';
            }else{
                ans+='0';
            }

             
        }
        cout<<ans<<endl;
    }
}