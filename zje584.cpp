#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
int mp[110][110];
int n,m;
int k;
int len;
int dx[8]={1,-1,0,0,1,-1,1,-1};
int dy[8]={0,0,1,-1,-1,1,1,-1};
int bfs(int i,int j){
	int c=0;
	queue<pii> q;
	q.push({i,j});
	while(!q.empty()){
		pii now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=now.F+dx[i];
			int ny=now.S+dy[i];
			if(nx>=0 && ny>=0 && nx<k && ny<len && mp[nx][ny]=='W'){
				q.push({nx,ny});
				mp[nx][ny]='#';
				c++;
			}
		}
	}
	return c;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s1;
		getline(cin,s1);
		k=0;
		while(cin>>s1){
			if(s1[0]!='W' && s1[0]!='L') break;
			len=s1.length();
			for(int i=0;i<s1.length();i++){
				mp[k][i]=s1[i];
			}
			k++;
		}
		n=int(s1[0])-47-1;
		cin>>m;
		m--;
		if(mp[n][m]=='W') cout<<bfs(n,m)<<endl;
		while(cin>>n>>m){
			n--;
			m--;
			if(mp[n][m]=='W') cout<<bfs(n,m)<<endl;
		}	
	}
	return 0;
}
