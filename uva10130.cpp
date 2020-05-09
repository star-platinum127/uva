#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int val[10050],wei[10050];
int dp[300];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	int mw;
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		cin>>n;
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>val[i]>>wei[i];
		}
		cin>>m;
		for(int l=0;l<m;l++){
			memset(dp,0,sizeof(dp));
			cin>>mw;
			for(int i=0;i<n;i++){
				for(int j=mw;j>=wei[i];j--){
					dp[j]=max(dp[j],dp[j-wei[i]]+val[i]);
				}
			}
			int mx=0;
			for(int i=0;i<=mw;i++){
				mx=max(mw,dp[i]);
			}
			ans+=mx;
		}
		cout<<ans<<endl;
	}
	return 0;
}
