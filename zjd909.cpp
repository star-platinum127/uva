#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
struct e{
	int x;
	int y;
	int u;
};
vector<e> v;
int f[10000];
bool cmp(e x, e y){
	return x.u<y.u;
}
int find(int a){
	if(f[a]==a) return a;
	else{
		f[a]=find(f[a]);
		return f[a];
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	int l,q,r;
	while(cin>>n>>m){
		int todo=n-1;
		ll ans=0;
		for(int i=0;i<n;i++) f[i]=i;
		for(int i=0;i<m;i++){
			cin>>l>>q>>r;
			v.push_back({l,q,r});
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<m;i++){
			int x1=find(v[i].x);
			int y1=find(v[i].y);
			if(x1==y1) continue;
			todo--;
			f[y1]=x1;
			ans+=v[i].u;
		}
		if(todo==0) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
