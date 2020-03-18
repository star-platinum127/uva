#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
map<int,vector<pair<int,int> > > mp;
int start,num,q;
int arr[5005];
typedef long long ll;
int dfs(int n,int last,int mini){
	for(pair<int,int> p : mp[n]){
		if(p.first==last) continue;
		else{
			arr[p.first]=min(mini,p.second);
			dfs(p.first,n,min(mini,p.second));
		}
	}
}
int main(int argc, char** argv) {
	
	while(cin>>num>>start>>q){
		mp.clear();
		int ans=0;
		int maxi=0;
		int a,b,c;
		for(int i=0;i<num-1;i++){
			cin>>a>>b>>c;
			if(c>maxi) maxi=c;
			mp[a].push_back({b,c});
			mp[b].push_back({a,c});
		}
		dfs(start,num+1,maxi);
		for(int i=1;i<=num;i++){
			if(i==start) continue;
			if(arr[i]>=q) ans++;
		}
		cout<<ans<<endl;
	}
}
