#include <bits/stdc++.h>
using namespace std;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define maxn 200005
typedef long long ll;
vector<int> v[maxn];
ll buf[maxn];
ll deep[maxn];
ll ans[maxn];
void dfs(int u,int fa,int dep){
	deep[u]=dep;
	buf[u]=1;
	for(int i=0;i<v[u].size();i++){
		int dx=v[u][i];
		if(dx==fa) continue;
		dfs(dx,u,dep+1);
		buf[u]+=buf[dx];
	}
	ans[u]=deep[u]-buf[u]+1;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,r,t,m;
	cin>>n>>m;
	for(int i=0;i<maxn;i++){
		v[i].clear();
		buf[i]=0;
		deep[i]=0;
	}
	for(int i=0;i<n-1;i++){
		cin>>r>>t;
		v[r].pb(t);
		v[t].pb(r);
	}
	dfs(1,-1,0);
	sort(ans+1,ans+n+1);
	reverse(ans+1,ans+n+1);
	ll cnt=0;
	for(int i=1;i<=m;i++){
		cnt+=ans[i];
	}
	cout<<cnt<<endl;
	return 0;
}
