#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		if(n>m) swap(n,m);
		if(n==m){
			cout<<0<<endl;
			continue;
		} 
		ll cnt=m/n;
		ll ans=0;
		if(m%n==0 && (cnt&(cnt-1))==0){
			while(m>n){
				m/=8;
				ans++;
			}
		}else{
			cout<<-1<<endl;
			continue;
		}
		cout<<ans<<endl;
	}
	return 0;
}
