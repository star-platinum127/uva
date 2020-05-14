#include <iostream>
#include<queue>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define pii pair<int,int>
#define S second
#define F first
char mp[101][101];
int n,m;
int dx[8]={1,-1,0,0,-1,-1,1,1};
int dy[8]={0,0,1,-1,-1,1,-1,1};
int x,y;
int cnt;
void bfs(int i,int j){
	queue<pii>q;
	q.push({i,j});
	pii now;
	while(!q.empty()){
		now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			x=dx[i]+now.F;
			y=dy[i]+now.S;
			if(x>=0 && x<n && y>=0 && y<m && mp[x][y]=='@'){
				q.push({x,y});
				mp[x][y]='*';
			}
		}
	}
	
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		int cnt=0;
		if(n==0) break;
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<m;j++) mp[i][j]=s[j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mp[i][j]=='@'){
					cnt++;
					bfs(i,j);
				} 	
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
