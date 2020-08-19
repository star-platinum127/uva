#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int val[105];
int arr[105];
int dp[105][100005]={0};
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++) cin>>val[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<arr[i];j++) dp[i][j]=dp[i-1][j];
		for(int j=arr[i];j<=m;j++) dp[i][j]=max(dp[i-1][j-arr[i]]+val[i],dp[i-1][j]);
	}
	cout<<dp[n][m]<<endl;
	return 0;
}
