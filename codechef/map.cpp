#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int w[n],l[n];
		for(int i = 0 ;i<n;i++)cin>>w[i];
		for(int i=0;i<n;i++)cin>>l[i];
		map<int ,pair<int , int>> pos;
		for(int i = 0 ;i<n;i++){
			pos[w[i]] = {i , l[i]};
		}
		//for(auto it  = pos.begin();it != pos.end();it++){
		//	cout<<it->first<<" "<<pos[it->first].first<<" "<<pos[it->first].second<<endl;
		//}
		int ref[n];
		for(int i = 0 ;i<n;i++){
			ref[i] = w[i];
		}
		sort(ref , ref+n);
		//cout<<"sort of ref"<<endl;
		//for(int i = 0;i<n;i++){
		//	cout<<ref[i]<<" "<<endl;
		//}
		int ans = 0,dis = 0,mov = 0;
		for(int i = 0;i<n-1;i++){
			if(pos[ref[i]].first>pos[ref[i+1]].first){
				dis = abs(pos[ref[i]].first - pos[ref[i+1]].first);
				//cout<<"dis b/n"<<pos[ref[i]].first<<"and"<<pos[ref[i+1]].first<<" "<<dis<<endl;
				mov = ceil(float(dis)/float(pos[ref[i+1]].second));
				//cout<<"mov"<<mov<<endl;
				ans+=mov;
				pos[ref[i+1]].first+=mov*pos[ref[i+1]].second;
				if(pos[ref[i]].first == pos[ref[i+1]].first){
					pos[ref[i+1]].first+=pos[ref[i+1]].second;
					ans++;
				}

			}
		}
		//for(auto it  = pos.begin();it != pos.end();it++){
		//	cout<<it->first<<" "<<pos[it->first].first<<" "<<pos[it->first].second<<endl;
		//}
		cout<<ans<<endl;
	}
}