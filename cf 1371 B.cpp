#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	ll ans;
	while(t--){
		ll n,r;
		cin>>n>>r;
		if(n>r) ans=(r+1)*r/2;
		else if(n==r) ans=r*(r-1)/2+1;
		else ans=((n+1-1)*(n-1))/2+1;
		cout<<ans<<endl;
	}
	
	return 0;
}
