#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		ll dp[n+2][n+2];
		memset(dp,0,sizeof(dp));
		dp[0][1]=1;
		for(int i=1;i<=n+1;i++){
			for(int j=i;j<=n+1;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		cout<<dp[n+1][n+1];
	}
	return 0;
}
