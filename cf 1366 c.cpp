#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[105][105];
int f[105][3];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>arr[i][j];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(arr[i][j]==1) f[i+j][1]++;
				else f[i+j][0]++;
			}
		}
		int ans=0;
		int x=2,y=n+m;
		while(1){
			if(x==y) break;
			ans+=min(f[x][1]+f[y][1],f[x][0]+f[y][0]);
			x++;
			y--;
			if(x>y) break; 
		}
		cout<<ans<<endl;
	}
	return 0;
}
