#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int dp[2005][2005];
int arr[2005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,h,l,r;
	cin>>n>>h>>l>>r;
	dp[0][0]=0;
	for(int i=1;i<h;i++){
		dp[0][i]=-1;
	}
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		for(int hr=0;hr<h;hr++){
			dp[i+1][hr]=-1;
		}
		for(int hr=0;hr<h;hr++){
			if(dp[i][hr]==-1) continue;
			int h1=(hr+arr[i])%h;
			int h2=(hr+arr[i]-1)%h;
			dp[i+1][h1]=max(dp[i+1][h1],dp[i][hr]+(h1>=l && h1<=r));
			dp[i+1][h2]=max(dp[i+1][h2],dp[i][hr]+(h2>=l && h2<=r));
		}
	}
	int ans=0;
	for(int i=0;i<h;i++){
		if(dp[n][i]!=-1) ans=max(ans,dp[n][i]);
	}
	cout<<ans<<endl;
	return 0;
}
