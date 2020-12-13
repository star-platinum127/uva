#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define mikumywaifu ios_base::sync_with_stdio(0)
#define misakamywaifu cin.tie(0)
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000007;
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

ll exgcd(ll a, ll b, ll &x,ll &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	ll d=exgcd(b, a % b, x, y);
	ll e = x;
	x = y;
	y = e - a / b * y;
	return d;
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	ll n, t, d, w;
	//d<w;
	cin >> n >> t >> w >> d;
	ll g = gcd(w,d);
	ll a=t/w;
	t%= w;
	ll b = t / d;
	t %= d;
	if (t % g) {
		cout << -1 << "\n";
	}
	else {
		ll x1, y1;
		ll s = t / g;
		exgcd(w, d, x1, y1);
		a+= x1 * s;
		b += y1 * s;
		while (a + b > n && b >= 0|| a< 0 ) {
			a += d / g;
			b -= w / g;
		}
		while (b < 0) {
			a -= d / g;
			b += w / g;
		}
		if (a >= 0 && b >= 0 && a + b <= n) cout << a << " " << b << " " << n - a - b << "\n";
		else cout << -1 << "\n";
	}
	return 0;
}
