#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	while(cin>>n>>m){
		ll v[m],p[m];
		for(int i=0;i<m;i++){
			cin>>v[i]>>p[i];
		}
		ll dp[n+1];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<m;i++){
			for(int j=n;j>=v[i];j--){
				dp[j]=max(dp[j],dp[j-v[i]]+(v[i]*p[i]));
			}
		}	
		cout<<dp[n]<<endl;
	}
	return 0;
}
