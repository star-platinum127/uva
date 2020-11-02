#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
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
ll gcd(ll a, ll b) {
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
constexpr ll N = 100025;
struct Fenwicktree {
	ll sum1[N], n;
	void init(ll arr[], int _n) {
		n = _n;
		for (int i = 1;i <= n;i++) sum1[i] = arr[i] - arr[i-(i&-i)];
	}
	ll query(int p) {
		ll tmp = 0;
		for (;p;p -=(p&-p)) tmp += sum1[p];
		return tmp;
	}
	void modify(int p, ll x) {
		for (;p <= n;p +=(p&-p)) sum1[p] += x;
	}
}BIT;
struct segmenttree{
	ll seg[N << 1],n;
	void init(ll arr[], int _n) {
		n = _n;
		for (int i = 0;i < n;i++){
			seg[i + n] = arr[i];
		}
		for (int i = n - 1;i > 0;i--) seg[i] =__gcd(seg[i << 1], seg[i << 1 | 1]);
	}
	ll query(int l, int r) {
		ll tmp=0;
		for (l += n, r += n;r > l;r >>= 1, l >>= 1) {
			if (l & 1) tmp=__gcd(tmp, seg[l++]);
			if (r & 1) tmp =__gcd(tmp, seg[--r]);
		}
		return abs(tmp);
	}
	void modify(int p,ll x) {
		for (seg[p += n]+=x;p > 1;p >>= 1) {
			seg[p >> 1] =__gcd(seg[p], seg[p ^ 1]);
		}
	}
}sgt;
ll arr[N];
int n, q;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> q;
	for (int i = 1;i <=n;i++) cin >> arr[i];
	BIT.init(arr, n);
	arr[0] = 0;
	for (int i = 0;i < n;i++) arr[i] = arr[i + 1] - arr[i];
	sgt.init(arr, n);
	while (q--) {
		int t,l,r;
		ll d;
		cin >> t;
		if (t == 1) {
			cin >> l >> r >> d;
			BIT.modify(l, d);
			BIT.modify(r + 1, -d);
			sgt.modify(l-1, d);
			sgt.modify(r, -d);
		}
		else {
			cin >> l >> r;
			cout << abs(__gcd(BIT.query(r), sgt.query(l, r)))<<"\n";
		}
	}
}
