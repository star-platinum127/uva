#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int house,box,times,path;
int a,b,c;
int paths[51][51];
ll mx,total=0;
vector<int> v[51];
void dfs(int now,int timeleft,ll ans){
	mx=max(mx,ans);
	for(int i : v[now]){
		if(timeleft==0 || timeleft*box+ans<=mx || total==mx) return;
		else{
			int num=min(paths[now][i],box);
			paths[now][i]-=num;
			paths[i][now]-=num;
			dfs(i,timeleft-1,ans+num);
			paths[now][i]+=num;
			paths[i][now]+=num;
		}
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(paths,-1,sizeof(paths));
	while(cin>>house>>box>>times>>path){
		for(int i=0;i<51;i++){
			v[i].clear();
		}
		for(int i=0;i<path;i++){
			cin>>a>>b>>c;
			paths[a][b]=c;
			paths[b][a]=c;
			total+=c;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		mx=0;
		dfs(1,times,0);
		cout<<mx;
	}
	return 0;
}
