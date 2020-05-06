#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
struct e{
	int x;
	int y;
	int u;
};
int x1,y1;
int f[100000];
int find(int a){
	if(f[a]==a) return a;
	else{
		f[a]=find(f[a]);
		return f[a];
	}
}
vector<e> v;
ll ans;
bool cmp(e x,e y){
	return x.u<y.u;
}

int l,s,q;
int p[200000];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m){
		v.clear();
		ans=0;
		int to=n-1;
		for(int i=0;i<n;i++) f[i]=i;
		for(int i=0;i<m;i++){
			cin>>l>>s>>q;
			v.push_back({l,s,q});
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<m;i++){
			x1=find(v[i].x);
			y1=find(v[i].y);
			if(x1==y1) continue;
			else{
				to-=1;
				f[y1]=x1;
				ans+=v[i].u;
			}
		}
		if(to==0) cout<<ans<<endl;
		else cout<<-1<<endl; 
	}
	return 0;
}
