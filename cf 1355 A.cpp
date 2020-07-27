#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll n,m;
int solve(ll a){
	ll mini=1e9,maxi=-1e9;
	while(a){
		ll buf=a%10;
		mini=min(mini,buf);
		maxi=max(maxi,buf);
		a/=10;
	}
	return maxi*mini;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<m-1;i++){
			ll cnt=solve(n);
			if(cnt==0) break;
			n+=cnt;
		}
		cout<<n<<endl;
	}
	return 0;
}
