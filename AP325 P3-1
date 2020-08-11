#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define ereshkigal mywiafu
vector<int> v[100005];
#define pb push_back
bool arr[100005];
int deep[100005];
int tmp;
void dfs(int fa,int u){
	if(fa==u) return;
	int len=v[u].size();
	for(int i=0;i<len;i++){
		dfs(u,v[u][i]);
		deep[u]=max(deep[u],deep[v[u][i]]+1);
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	int n,buf;
	memset(arr,0,sizeof(arr));
	int ti=t;
	for(int j=1;j<=t;j++){
		cin>>n;
		if(n==0) continue;
		v[j].clear();
		for(int i=1;i<=n;i++){
			cin>>buf;
			v[j].pb(buf);
			arr[buf]=1;
		}
	}
	memset(deep,0,sizeof(deep));
	for(int i=1;i<=ti;i++){
		if(arr[i]==0){
			cout<<i<<endl;
			tmp=i;
			break;
		}
	}	
	dfs(0,tmp);
	int ans=0;
	for(int i=1;i<=ti;i++){
		ans+=deep[i];
	}
	cout<<ans<<endl;
	return 0;
}
