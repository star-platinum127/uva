#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
map<ll,ll> mp;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int buf;
		mp.clear();
		int n,k;
		ll ans=-1;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>buf;
			buf%=k;
			if(buf) ans=max(ans,k-buf+mp[buf]*k);
			mp[buf]++;
		}
		cout<<ans+1<<endl;
		
	}
	return 0;
}
