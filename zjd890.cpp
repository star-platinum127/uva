#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,k;
	while(cin>>n>>k){
		int pri[n];
		ll total=0;
		for(int i=0;i<n;i++){
			cin>>pri[i];
			total+=pri[i];
		}
		ll half=total/2;
		ll dp[half+1];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++){
			for(int j=half;j>=pri[i];j--){
				dp[j]=max(dp[j],dp[j-pri[i]]+pri[i]);
			}
		}
		cout<<dp[half]<<" "<<total-dp[half];	
	}

	return 0;
}
