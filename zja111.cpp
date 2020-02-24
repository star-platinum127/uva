#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
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
