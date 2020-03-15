#include <iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int num;
	while(cin>>num){
		for(int t=0;t<num;t++){
			int n,m,sx,sy,tx,ty;
			cin>>n>>m>>sx>>sy>>tx>>ty;
			sx--;
			sy--;
			tx--;
			ty--;
			int dx[4]={0,0,-1,1};
			int dy[4]={1,-1,0,0};
			string str;
			int dp[n][m];
			for(int i=0;i<n;i++){
				cin>>str;
				for(int j=0;j<m;j++){
					dp[i][j]=str[j]-'0';
				}
			}
			int arr[n][m];
			memset(arr,-1,sizeof(arr));
			queue<pair<int,int> > q;
			q.push({sx,sy});
			arr[sx][sy]=1;
			while(!q.empty()){
				pair<int,int>now;
				now=q.front();
				q.pop();
				for(int i=0;i<4;i++){
					if(now.first+dx[i]>=0 && now.first+dx[i]<n && now.second+dy[i]>=0 && now.second+dy[i]<m){
						if(dp[now.first+dx[i]][now.second+dy[i]]==0 && arr[now.first+dx[i]][now.second+dy[i]]==-1){
							q.push({now.first+dx[i],now.second+dy[i]});
							arr[now.first+dx[i]][now.second+dy[i]]=arr[now.first][now.second]+1;
						}
					}
				}
			}
			if(arr[tx][ty]==-1) cout<<0<<endl;
			else cout<<arr[tx][ty]<<endl;
		}
	}
	return 0;
}
