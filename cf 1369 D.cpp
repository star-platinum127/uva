#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
const int mod=1e9+7;
ll dp[2000005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	dp[1]=0;
	dp[2]=0;
	for(int i=3;i<=2e6+5;i++){
		dp[i]=(dp[i-1]+2*dp[i-2]+(i%3==0)*4)%mod; 
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}
