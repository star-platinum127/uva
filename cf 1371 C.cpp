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
		ll a,b,n,m;
		cin>>a>>b>>n>>m;
		if(a+b<n+m) cout<<"NO"<<endl;
		else if(m>min(a,b)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
