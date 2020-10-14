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
const ll MOD = 1000000007;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const int LINF = 4611686018427387903;
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
 
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n; 
		vector<ll> b;
		b.clear();
		priority_queue<ll > pq;
		if (n == 2) {
			cout << 2 << "\n";
			cout << 1 << " " << 2 << "\n";
			continue;
		}
		ll cnt = (n - 2 + n) / 2;
		b.pb(n - 2);
		b.pb(n);
		pq.push(cnt);
		for (int i = 1;i <n;i++) {
			if (i != n - 2) pq.push(i);
		}
		while (pq.size()>1) {
			auto u = pq.top();
			pq.pop();
			auto v = pq.top();
			pq.pop();
			ll tmp = (u + v) / 2;
			if ((u + v) % 2) tmp++;
			pq.push(tmp);
			b.pb(u);
			b.pb(v);
		}
		ll ans = pq.top();
		cout << ans << "\n";
		for (int i = 0;i < b.size()-1;i+=2) {
			cout << b[i] << " " << b[i + 1] << "\n";
		}
	}
	return 0;
}
