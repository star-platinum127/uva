#include <iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
	ll dp[101];
	int n;
	while(cin>>n){
		if(n==0) break;
		dp[0]=1;
		for(int i=1;i<n;i++){
			dp[i]=dp[i-1]+pow(i+1,2);
		}
		cout<<dp[n-1]<<endl;	
	}
	return 0;
}
