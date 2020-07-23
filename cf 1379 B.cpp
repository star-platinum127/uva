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
		ll l,r,m;
		cin>>l>>r>>m;
		for(ll i=l;i<=r;i++){
			if(m>=i && m%i<=r-l){
				cout<<i<<" "<<l+m%i<<" "<<l<<endl;
				break;
			}
			else if(m%i-i>=l-r){
				cout<<i<<" "<<r+(m%i-i)<<" "<<r<<endl;
				break;
			}
		}
	}
	return 0;
}
