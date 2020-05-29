#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int val[105];
int wei[105];
ll dp[101];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n){
		memset(dp,-1e9,sizeof(dp));
		for(int i=0;i<n;i++){
			cin>>wei[i];
			cin>>val[i];
		}
		for(int i=0;i<n;i++){
			for(int j=100;j>=wei[i];j--){
				dp[j]=max(dp[j],dp[j-wei[i]]+val[i]); 
			}
		}
		cout<<dp[100]<<endl;	
	}
	
	return 0;
}
