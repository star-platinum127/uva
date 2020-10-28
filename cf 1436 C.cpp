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
const int N=1005;
ll frac[N],fpow[1005];
ll qpow(ll a,ll x){
	ll tmp=1;
	while(x){
		if(x&1){
			tmp=tmp*a%MOD;
		}
		x>>=1;
		a=a*a%MOD;
	}
	return tmp;
}
void init(ll n){
	frac[0]=1;
	for(int i=1;i<=n;i++){
		frac[i]=frac[i-1]*i%MOD;
	}
	fpow[n]=qpow(frac[n],MOD-2)%MOD;
	for(int i=n-1;i>=0;i--){
		fpow[i]=fpow[i+1]*(i+1)%MOD;
	} 
}
ll C(ll n,ll k){
	if(k<0 || k>n) return 0;
	return frac[n]%MOD*fpow[k]%MOD*fpow[n-k]%MOD;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,x,pos;
	cin>>n>>x>>pos;
	ll ba=n-x,sa=x-0-1;
	ll l=0,r=n;
	ll bc=0,sc=0;
	init(n);
	while(l<r){
		ll mid=(l+r)>>1;
		if(mid>pos) bc++,r=mid;
		else if(mid<=pos){
			if(mid!=pos) sc++;
			l=mid+1;
		}

	}
	ll ca=n-sc-bc-1;
	ll ans=C(ba,bc)%MOD*frac[bc]%MOD*C(sa,sc)%MOD*frac[sc]%MOD*frac[ca]%MOD;
	cout<<ans<<"\n";

}
