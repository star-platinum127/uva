#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int dp[505][505];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	for(int i=0;i<=n;i++) dp[0][i]=0;
	for(int i=1;i<=n;i++){
		dp[i][0]=0;
		for(int j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
