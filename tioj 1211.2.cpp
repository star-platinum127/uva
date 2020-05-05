#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct e{
	int x,y,cost;
};
int k,l,g;
bool cmp(e x,e y){
	return x.cost<y.cost;
}
vector<e> v;
int p[10005];
int find(int a){
	if(p[a]==a) return a;
	else{
		p[a]=find(p[a]);
		return p[a];
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0) break;
		int ans=0;
		v.clear();
		for(int i=1;i<=n;i++) p[i]=i;
		for(int i=0;i<m;i++){
			cin>>k>>l>>g;
			v.push_back({k,l,g});	
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<m;i++){
			k=find(v[i].x);
			l=find(v[i].y);
			if(k==l) continue;
			p[l]=k;
			ans+=v[i].cost;
			n--;
		}
		if(n>1) cout<<-1<<endl;
		else cout<<ans<<endl; 
	}
	return 0;
}
