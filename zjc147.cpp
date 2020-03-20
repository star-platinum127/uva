#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int dp[1000005];
	memset(dp,0,sizeof(dp));
	ll s1[2010];
	int c=0;
	while(cin>>s1[c]){
		c++;
	}
	int a1[1005],a2[1005];
	int half=(c-1)/2;
	for(int i=0;i<half;i++){
		a1[i]=s1[i];	
	} 
	for(int i=half;i<c-1;i++){
		a2[i-half]=s1[i];
	}
	ll ma=s1[c-1];
	for(int i=0;i<c/2;i++){
		for(int j=ma;j>0;j--){
			if(j-a1[i]>=0) dp[j]=max(dp[j],dp[j-a1[i]]+a2[i]);
		}
	}
	cout<<dp[ma]<<endl;
	return 0;
}
