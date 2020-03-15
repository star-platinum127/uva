#include <iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int s;
	int c=0;
	while(cin>>s){
		int dx[4]={1,0,0,-1};
		int dy[4]={0,-1,1,0};
		int n,m;
		cin>>n>>m;
		int ma[n][m];
		int arr[n][m];
		memset(ma,0,sizeof(ma));
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>ma[i][j];
			}
		}
		int sx,sy;
		for(int i=0;i<m;i++){
			if(ma[0][i]==1){
				sx=0;
				sy=i;
				break;
			}
		}
		int nx,ny;
		queue<pair<int,int> >q;
		q.push({sx,sy});
		arr[sx][sy]=1;
		while(!q.empty()){
			sx=q.front().first;
			sy=q.front().second;
			q.pop();
			for(int i=0;i<5-s;i++){
				nx=sx+dx[i];
				ny=sy+dy[i];
				if(nx>=n || ny>=m || nx<0|| ny<0) continue;
				if(ma[nx][ny]==0) continue;
				if(arr[nx][ny]>0) continue;
				q.push({nx,ny});
				arr[nx][ny]=arr[sx][sy]+1;
			}
		}
		c++;
		cout<<"Case "<<c<<":"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
