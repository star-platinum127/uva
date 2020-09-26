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
#define MOD 1000000007
const int MOD2=998244353;
const int MAX = 100005;
const int INF= 0x3F3F3F3F;
const ll mod = 998244353;
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

ll frac[300005];
ll invf[300005];
ll fpow(ll a, ll k) {
	ll res = 1;
	while (k) {
		if (k & 1) res = (res * a) % mod;
		k >>= 1;
		a = a * a % mod;
	}
	return res;
}

void init(int n) {
	frac[0] = 1;
	for (int i = 1;i <= n;++i) {
		frac[i] = frac[i - 1] * i % mod;
	}
	invf[n] = fpow(frac[n], mod - 2);
	for (int i = n - 1;i >= 0;--i) {
		invf[i] = invf[i + 1] * (i + 1) % mod;
	}
}
ll C(int n, int k) {
	if (k<0 || k>n) return 0;
	return frac[n] * invf[k] % mod * invf[n - k] % mod;
}
struct e {
	int l;
	int r;
}arr[300005];
bool cmp(e a, e b) {
	if (a.l == b.l) return a.r > b.r;
	return a.l < b.l;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	init(n);
	for (int i = 0;i < n;i++) {
		cin >> arr[i].l>>arr[i].r;
	}
	sort(arr, arr+n,cmp);
	multiset<int> mst;
	ll ans = 0;
	for (int i = 0;i <n;i++) {
		while (!mst.empty() && *mst.begin() <arr[i].l) {
			mst.erase(mst.begin());
		}
		int k = mst.size();
		ans += C(k, m-1) % mod;
		mst.insert(arr[i].r);
	}
	ans %= mod;
	cout << ans << endl;
	return 0;
}
