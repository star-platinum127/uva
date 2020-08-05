#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll x,y;
		ll a,b;
		cin>>x>>y;
		cin>>a>>b;
		int maxi=max(x,y),mini=min(x,y);
		if(a*2<=b) cout<<a*(x+y)<<endl;
		else{
			cout<<min(mini*b+(maxi-mini)*a,maxi*b+abs(mini-maxi)*a)<<endl;
		}
	}
	return 0;
}
