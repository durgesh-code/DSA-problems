#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
   string hour = s.substr(0,2);
   string id = s.substr(5,7);
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
int main()
{
    string str;
    cin>>str;
    cout<<str.size()<<endl;
    cout<<str.substr();
    cout<<timeConversion(str);
}