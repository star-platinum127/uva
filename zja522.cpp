#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dp[10005];
int wei[25];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		int n;
		dp[0]=1;
		cin>>n;
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>wei[i];
		}
		for(int i=0;i<m;i++){
			for(int j=n;j>=wei[i];j--){
				if(dp[j-wei[i]]) dp[j]=1;
			}
		}
		if(dp[n]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
