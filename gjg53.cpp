#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int dis[201][201],mp[201][201];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int ti;
	int min1=1e9;
	int u;
	cin>>ti;
	for(int k=0;k<ti;k++){
		int n,m;
		int x,y,z;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j){
					mp[i][j]=0;
					dis[i][j]=0;
				} 
				else{
					mp[i][j]=1e9;
					dis[i][j]=1e9;
				} 
			}
		}
		for(int i=0;i<m;i++){
			cin>>x>>y>>z;
			mp[x-1][y-1]=z;
			mp[y-1][x-1]=z;
			dis[x-1][y-1]=z;
			dis[y-1][x-1]=z;
		}
		for(int v=0;v<n;v++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					
					dis[i][j]=min(dis[i][j],max(dis[i][v],dis[v][j]));
				}	
			}
		}
		cout<<dis[0][n-1]<<endl;
	}
	return 0;
}
