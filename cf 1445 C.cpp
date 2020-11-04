#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const ll MOD = 1000000007;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
template<typename _Size>
inline _Size
__lg(_Size __n)
{
	_Size __k;
	for (__k = 0; __n != 0; __n >>= 1)
		++__k;
	return __k - 1;
}
/*-----------------------------------------------*/
ll p,q;
ll query(ll x){
	if(x==1) return x;
	ll t=p;
	while(t%q==0) t/=x;
	return t;
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		ll ans=0;
		cin>>p>>q;
		for(ll i=1;i*i<=q;i++){
			if(q%i==0){
				ll b=q/i;
				ans=max(ans,query(i));
				ans=max(ans,query(b));
			}
		}
		if(ans!=0) cout<<ans<<"\n";
		else cout<<1<<"\n";
	}
	return 0;
}
