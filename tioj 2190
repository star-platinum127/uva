#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define pll pair<long long,long long>
#define lowbit(x) x&-x
const ll mod = 1000000007;
const int INF = 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
void debug() {
	cout << "DEBUG :";
}
/*-----------------------------------------------*/
ll M, a, b, x1, x2, yy, y2;
ll qpow(ll a, ll b) {
	ll tmp = 1;
	while (b) {
		if (b & 1) tmp = tmp * a % M;
		a = a * a % M;
		b >>= 1;
	}
	return tmp;
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		cin >> M >> a >> b >> x1 >> yy >> x2 >> y2;
		ll m = (((y2 - yy + M)%M) * qpow(x2 - x1 + M, M - 2)) % M;
		//ll t = x3;
		ll x3 = qpow(m, 2);
		x3 = (x3 - x2 + M) % M;
		x3 = (x3 - x1 + M) % M;
		ll tmp = ((((yy - y2+M) % M)* ((x2 - x3+M) % M)%M) * qpow(x1 - x2+M, M - 2)) % M;
		tmp = tmp % M;
		ll y3 = (y2 - tmp + M) % M;
		cout << x3 << " " << y3 << "\n";
	}
	return 0;
}
