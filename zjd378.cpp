#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	int c=0;
	int w;
	while(cin>>n>>m){
		ll dp[n+2][m+2];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>dp[i][j];
			}
		}
		for(int i=1;i<=m+1;i++) dp[1][i]+=dp[1][i-1];
		for(int i=1;i<=n+1;i++) dp[i][1]+=dp[i-1][1];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(dp[i-1][j]>dp[i][j-1]) dp[i][j]+=dp[i][j-1];
				else dp[i][j]+=dp[i-1][j];
			}	
		}
		c++;
		cout<<"Case #"<<c<<" :"<<endl;
		cout<<dp[n][m]<<endl;
	}
	return 0;
}
