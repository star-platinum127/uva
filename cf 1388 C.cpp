#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define maxn 200005
#define pb push_back
bool flag;
vector<int> v[maxn];
int p[maxn],h[maxn],good[maxn];
int sum1[maxn];
void dfs(int fa,int nw){
	sum1[nw]=p[nw];
	int s1=0;
	for(int i=0;i<v[nw].size();i++){
		if(v[nw][i]==fa) continue;
		dfs(nw,v[nw][i]);
		sum1[nw]+=sum1[v[nw][i]];
		s1+=good[v[nw][i]];
	}
	int buf=h[nw]+sum1[nw];
	if(buf%2!=0){
		flag=1;
		return;
	}
	good[nw]=buf/2;
	if(s1>good[nw] ||good[nw]>sum1[nw] || good[nw]<0 ){
		flag=1;
		return;
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		flag=0;
		for(int i=1;i<=n;i++){
			v[i].clear();
			sum1[i]=0;
			good[i]=0;
			cin>>p[i];
		}
		for(int i=1;i<=n;i++) cin>>h[i];
		for(int i=0;i<n-1;i++){
			int r,t;
			cin>>r>>t;
			v[r].pb(t);
			v[t].pb(r);
		}
		dfs(0,1);
		if(flag==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
