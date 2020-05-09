#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int f[100005];
struct e{
	int x;
	int y;
	int u;
};
vector<e> v;
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
	int t;
	cin>>t;
	while(t--){
		v.clear();
		int n,m;
		cin>>n>>m;
		int todo=n-1;
		int ans=0;
		for(int i=1;i<=n;i++) f[i]=i;
		for(int i=0;i<m;i++){
			int a,b,c;
			cin>>a>>b>>c;
			v.push_back({a,b,c});
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<m;i++){
			int x1=find(v[i].x);
			int y1=find(v[i].y);
			if(x1==y1) continue;
			todo--;
			f[y1]=x1;
			ans=max(ans,v[i].u);
			if(todo==0) break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
