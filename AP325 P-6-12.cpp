#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[100005];
int dp[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int maxi=-1e9;
	for(int i=1;i<=n;i++) cin>>arr[i];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=m;i++) dp[i]=arr[i];
	for(int i=m+1;i<=n;i++){
		for(int j=0;j<=i-m-1;j++){
			dp[i]=max(dp[j]+arr[i],dp[i]);
			maxi=max(dp[i],maxi);
		}
	}
	cout<<maxi<<endl;
	return 0;
}
