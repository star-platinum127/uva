#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ll dp[105][105];
	ll n;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>dp[i][j];
				dp[i][j]+=dp[i][j-1];
			}
		}
		ll tmp=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<=n;j++){
				int total=0;
				for(int k=1;k<=n;k++){
					total+=dp[k][j]-dp[k][i];
					if(total>=tmp) tmp=total;
					if(total<0) total=0;
				}
			}
		}
		cout<<tmp<<endl;
	}
	return 0;
}
