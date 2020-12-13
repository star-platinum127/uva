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
vector<pll> arr;
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		ll n, w;
		cin >> n >> w;
		arr.clear();
		for (int i = 1;i <=n;i++) {
			ll a;
			cin >> a;
			arr.push_back({ a,i });
		}
		sort(arr.begin(), arr.end());
		deque<ll> v;
		ll tmp = 0,cnt=0;
		for (int i = 0;i <n&&tmp<(w+1)/2;i++) {
			tmp += arr[i].first;
			v.push_back(arr[i].S);
			cnt = i;
		}
		for (int i = 0;i<cnt&&tmp>=w;i++) tmp -= arr[i].first, v.pop_front();
		if (tmp < (w+1) / 2 || v.empty()|| tmp>w) cout << -1 << "\n";
		else {
			cout << v.size() << "\n";
			for (auto e : v) cout << e << " ";
			cout << "\n";
		}
	}
	return 0;
}
