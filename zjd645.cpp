#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int dp[10000];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	memset(dp,0,sizeof(dp));
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(c==-1) c=m/b+1;
		for(int i=0;i<c;i++){
			for(int j=m;j>=b;j--){
				dp[j]=max(dp[j],dp[j-b]+a);
			}
		}
			
	}
	int ans=0;
	for(int i=0;i<=m;i++){
		ans=max(ans,dp[i]);
	}
	cout<<ans<<endl;
	return 0;
}
