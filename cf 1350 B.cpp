#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100005;
int arr[maxn];
int dp[maxn];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			
		}
		int ans=0;
		for(int i=n;i>0;i--){
			dp[i]=1;
			for(int j=i*2;j<=n;j+=i){
				if(arr[j]>arr[i]) dp[i]=max(dp[i],dp[j]+1);
			}
			ans=max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
