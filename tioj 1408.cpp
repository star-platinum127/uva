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
const int MOD = 1000000009;
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
const int N=100025;
int seg[N<<1],tag[N];
struct e{
	int l,r,u;
}arr[N];
bool cmp(e x,e y){
	return x.r<y.r;
}
void upd(int p,int d,int h){
	seg[p]+=d*(1<<h);
	if(p<N) tag[p]+=d;
}
void pull(int p){
	for(int h=0;p>1;p>>=1,h++) seg[p>>1]=seg[p]+seg[p^1]+tag[p>>1]*(2<<h);
}
void push(int p){
	for(int h=__lg(N);h>=0;h--){
		int i=p>>h;
		if(!tag[i>>1]) continue;
		upd(i,tag[i>>1],h);
		upd(i^1,tag[i>>1],h);
		tag[i>>1]=0;
	}
}
void modify(int l,int r,int u){
	int L=l,R=r,cnt=0;
	for(l+=N,r+=N;r>l;r>>=1,l>>=1,cnt++){
		if(l&1) upd(l++,u,cnt);
		if(r&1) upd(--r,u,cnt);
	}
	pull(L+N),pull(R-1+N);
}
int query(int l,int r){
	push(l+N),push(r+N-1);
	int tmp=0;
	for(l+=N,r+=N;r>l;r>>=1,l>>=1){
		if(l&1) tmp+=seg[l++];
		if(r&1) tmp+=seg[--r];
	}
	return tmp;
}
vector<pii> stk;
void ins(int l,int r,int u){
	u-=query(l,r);
	if(u<=0) return;
	int nw=r;
	while(stk.size() && nw-stk.back().S<=u){
		u-=nw-stk.back().S;
		nw=stk.back().F;
		modify(stk.back().F,stk.back().S,-1);
		stk.pop_back();
	}
	stk.pb({nw-u,r});
	modify(nw-u,r,1);
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n  && n){
		for(int i=0;i<n;i++) cin>>arr[i].l>>arr[i].r>>arr[i].u;
		sort(arr,arr+n,cmp);
		stk.clear();
		mem(seg,0),mem(tag,0);
		for(int i=0;i<n;i++) ins(arr[i].l,arr[i].r,arr[i].u);
		int len=stk.size();
		ll ans=0;
		for(int i=0;i<len;i++) ans+=stk[i].S-stk[i].F;
		cout<<ans<<"\n";
	}
	return 0;
}
