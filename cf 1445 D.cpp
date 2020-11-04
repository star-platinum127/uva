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
const int mod = 998244353;
const int N = 150000;
int arr[N<<1];
ll frac[N << 1], qpw[N << 1];
ll qpow(ll n,ll x) {
	ll tmp = 1;
	while (x) {
		if (x & 1) tmp =tmp%mod*n%mod;
		n=n%mod*n%mod;
		x >>=1;
	}
	return tmp;
}
void init(ll n) {
	frac[0] = 1;
	for (int i = 1;i <= n;i++) {
		frac[i] = frac[i - 1] * i%mod;
	}
	qpw[n] = qpow(frac[n],mod-2)%mod;
	for (int i = n - 1;i >= 0;i--) {
		qpw[i] = qpw[i + 1]%mod * (i + 1) % mod;
	}
}
ll C(ll a, ll b) {
	return frac[a] % mod * qpw[a - b] % mod * qpw[b] % mod;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0;i < n *2;i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 2 * n);
	ll ans = 0;
	for (int i = 0;i < n;i++) {
		ans += arr[i + n] - arr[i];
	}
	init(n *2);
	ans = (ans%mod * C(2 * n, n)%mod)%mod;
	cout << ans << "\n";
	return 0;
}
