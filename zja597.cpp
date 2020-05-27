#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
int c;
int n,m;
int counter;
int mp[505][505];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int bfs(int x,int y){
	int c=0;
	queue<pii> q;
	q.push({x,y});
	pii now;
	while(!q.empty()){
		now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			if(now.F+dx[i]>=0 && now.S+dy[i]>=0 && now.F+dx[i]<n && now.S+dy[i]<m && mp[now.F+dx[i]][now.S+dy[i]]=='J'){
				q.push({now.F+dx[i],now.S+dy[i]});
				mp[now.F+dx[i]][now.S+dy[i]]='#';
				c++;
			}
		}
	}
	return c;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		int max1=-1e9;
		counter=0;
		string s1;
		for(int i=0;i<n;i++){
			cin>>s1;
			for(int j=0;j<m;j++){
				mp[i][j]=s1[j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mp[i][j]=='J'){
					counter++;
					int al=bfs(i,j);
					if(max1<al) max1=al; 
				}
			}
		}
		cout<<counter<<" "<<max1<<endl;		
	}

	return 0;
}
