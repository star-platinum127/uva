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
const int N = 100005;
ll arr[N];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll sum1 = 0;
		ll mx = 0;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			sum1 += arr[i];
			mx = max(mx,arr[i]);
		}
		int cnt = 0;
		if (sum1 % (n - 1)) cnt+= (n - 1) - (sum1 % (n - 1)),sum1 += (n - 1) - (sum1 % (n - 1));
		ll g = sum1 / (n - 1);
		if (g >= mx) cout << cnt << "\n";
		else {
			cout << (mx - g) * (n - 1)+cnt << "\n";
		}
	}
	return 0;
}
