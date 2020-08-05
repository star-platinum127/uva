#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll dp[40005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll a,b,q;
		ll l,r;
		ll cnt=0;
		cin>>a>>b>>q;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=a*b;i++){
			cnt++;
			dp[i]=dp[i-1];
			if(i%a%b!=i%b%a)dp[i]++;
		}
		for(int i=0;i<q;i++){
			cin>>l>>r;
			ll ans=dp[a*b]*(r/(a*b))+dp[r%(a*b)];
			ans-=dp[a*b]*((l-1)/(a*b))+dp[(l-1)%(a*b)];
			cout<<ans<<endl;
		}
	}
	return 0;
}
