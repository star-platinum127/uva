#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	int c=0;
	while(cin>>n>>m){
		if(n==m && n==0) break;
		c++;
		ll up1[n+1],dow[m+1];
		for(int i=1;i<=n;i++) cin>>up1[i];
		for(int i=1;i<=m;i++) cin>>dow[i];
		ll dp[n+1][m+1];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(up1[i]==dow[j]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<"Twin Towers #"<<c<<endl;
		cout<<"Number of Tiles : "<<dp[n][m]<<endl;
		cout<<endl;
	}
	return 0;
}
