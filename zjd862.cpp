#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	while(cin>>m){
		cin>>n;
		ll t[n];
		for(int i=0;i<n;i++){
			cin>>t[i];
		}
		ll dp[m+1];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++){
			for(int j=m;j>=t[i];j--){
				dp[j]=max(dp[j],dp[j-t[i]]+t[i]);
			}
		}
		cout<<m-dp[m];
	}
	return 0;
}
