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
		ll n,m;
		cin>>n>>m;
		if(n>m){
			cout<<m<<endl;
			continue;
		}
		ll cnt=m/(n-1),buf=m%(n-1);
		if(buf==0) cout<<cnt*(n-1)+cnt+buf-1<<endl;
		else cout<<cnt*(n-1)+cnt+buf<<endl;
		
		
	}
	return 0;
}
