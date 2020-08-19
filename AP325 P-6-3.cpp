#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu 
int arr[100005];
ll dp[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	dp[0]=arr[0];
	dp[1]=arr[1];
	dp[2]=arr[2]+min(dp[0],dp[1]);
	for(int i=3;i<n;i++){
		dp[i]=arr[i]+min(dp[i-1],min(dp[i-2],dp[i-3]));
	}
	cout<<min(dp[n-1],dp[n-2])<<endl;
	return 0;
}
