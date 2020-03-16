#include <iostream>
#include<queue>
using namespace std;
const int maxn=100;
#define pii pair<int,int>
#define F first
#define S second
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n,m;
char ma[maxn][maxn];
int cnt[26];
void bfs(int x,int y){
	queue<pii> q;
	q.push({x,y});
	char target=ma[x][y];
	while(!q.empty()){
		pii now=q.front();
		q.pop();
		x=now.F;
		y=now.S;
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			for(int j=0;j<4;j++){
				if(nx>=0 && ny>=0 && nx<n && ny<m && ma[nx][ny]==target){
					q.push({nx,ny});
					ma[nx][ny]='0';
				}
			}
		}
	}	
		cnt[target-'a']++;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int h;
	string s;
	cin>>h;
	for(int k=1;k<=h;k++){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<m;j++){
				ma[i][j]=s[j];
			}
		}
	
		for(int i=0;i<26;i++){
			cnt[i]=0;
		}
		while(true){
			bool flag=false;
			int x=0,y=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(ma[i][j]!='0'){
						flag=true;
						x=i;
						y=j;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) bfs(x,y);
			else break;
		}
		int mx=0;
		for(int i=0;i<26;i++){
			mx=max(mx,cnt[i]);
		}
		cout<< "World #" <<k<<endl;
		while(mx){
			for(int i=0;i<26;i++){
				if(cnt[i]==mx){
					cout<<char(i+'a')<< ": " <<cnt[i]<<endl;
				}
			}
			mx--;
		}
	}
	return 0;
}
