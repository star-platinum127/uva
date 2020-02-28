#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
		int n;
		cin>>n;
		if(n==0){
			cout<<0<<endl;
			continue;
		}
		ll wei[2*n];
		memset(wei,0,sizeof(wei));
		for(int i=n-1;i>=0;i--) cin>>wei[i];
		for(int j=0;j<n;j++){
			wei[j+n]=wei[n-j-1];	
		}
		int dp[2*n];
		int max1=0;
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i=1;i<2*n;i++){
			max1=0;
			for(int j=0;j<i;j++){
				if(wei[i]>wei[j]){
					max1=max(max1,dp[j]);
				}
			}	
			dp[i]=max1+1;	
		}
		max1=0;
		for(int i=1;i<2*n;i++) max1=max(max1,dp[i]);
		cout<<max1<<endl;	
	}
	
	return 0;
}
