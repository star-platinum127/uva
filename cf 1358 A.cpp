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
		int n,m;
		cin>>n>>m;
		int ans=0;
		ans+=(n/2)*m;
		ans+=(n%2)*m/2;
		if(n%2!=0) ans+=m%2;
		cout<<ans<<endl;
	}
	return 0;
}
