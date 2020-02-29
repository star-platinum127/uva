#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		if(n==0) break;
		ll sco[n+1];
		for(int i=0;i<n;i++) cin>>sco[i];
		ll dp[10000];
		ll max1=0;
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++){
			dp[i+1]=max(dp[i+1],dp[i]+sco[i]);
			dp[i+2]=max(dp[i+2],dp[i]+sco[i]*2);
		}
		cout<<max(dp[n+1],dp[n])<<endl;
	}
	return 0;
}
