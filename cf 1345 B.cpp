#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int dp[100000];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	dp[0]=0;
	for(int i=1;i<100000;i++){
		dp[i]=dp[i-1]+3*i-1;
	}
	cin>>t;
	while(t--){
		int n;
		int c=0;
		int i=1;
		cin>>n;
		while(n>1){
			if(dp[i]>n){
				n-=dp[i-1];
				i=1;
				c++;
			}else i++;
		}
		cout<<c<<endl;
	}
	return 0;
}
