#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int mp[55][55];
int n,m;
int visit[55][55];
int x1[4]={1,-1,0,0};
int y1[4]={0,0,1,-1};
void dfs(int x,int y){
	if(visit[x][y]!=0) return;
	if(mp[x][y]=='B' || mp[x][y]=='#'){
		visit[x][y]=-1;
		return;
	}
	for(int i=0;i<4;i++){
		int dx=x+x1[i];
		int dy=y+y1[i];
		if(dx>=0 && dx<n && dy>=0 && dy<m){
			if(mp[dx][dy]=='B'){
				visit[x][y]=-1;
				return;
			}
		}
	}
	visit[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+x1[i];
		int dy=y+y1[i];
		if(dx>=0 && dx<n && dy>=0 && dy<m){
			if(!visit[dx][dy]) dfs(dx,dy);
		}
	}
}
int solve(){
	string s1;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			visit[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		cin>>s1;
		for(int j=0;j<m;j++){
			mp[i][j]=s1[j];
		}
	}
	dfs(n-1,m-1);
	bool flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[i][j]=='G' && visit[i][j]!=1){
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
