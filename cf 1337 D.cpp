#include <bits/stdc++.h>
using namespace std;
#define miku mywaifu
#define misaka mywaifu
typedef long long ll;
ll r[100005],b[100005],g[100005];
ll mini(ll r[],ll b[],ll g[],int rn,int bn,int gn){
	ll min1=3e19;
	for(int i=0;i<rn;i++){
		ll buf=r[i];
		int pos1=lower_bound(b,b+bn,buf)-b;
		int pos2=upper_bound(g,g+gn,buf)-g;
		if(pos2==0 || pos1>=bn) continue;
		pos2--;
		ll dx=b[pos1];
		ll dy=g[pos2];
		min1=min(min1,(dx-buf)*(dx-buf)+(dx-dy)*(dx-dy)+(dy-buf)*(dy-buf));
	}
	return min1;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int rn,bn,gn;
		cin>>rn>>bn>>gn;
		for(int i=0;i<rn;i++) cin>>r[i];
		for(int i=0;i<bn;i++) cin>>b[i];
		for(int i=0;i<gn;i++) cin>>g[i];
		ll ans=3e18;
		sort(r,r+rn);
		sort(b,b+bn);
		sort(g,g+gn);
		ans=min(ans,mini(r,b,g,rn,bn,gn));
		ans=min(ans,mini(r,g,b,rn,gn,bn));
		ans=min(ans,mini(b,r,g,bn,rn,gn));
		ans=min(ans,mini(b,g,r,bn,gn,rn));
		ans=min(ans,mini(g,r,b,gn,rn,bn));
		ans=min(ans,mini(g,b,r,gn,bn,rn));
		cout<<ans<<endl;
	}
	return 0;
}
