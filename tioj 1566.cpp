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

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	ll k;
	cin >> n >> m >> k;
	deque<pair<ll,int> > mx, mn;
	queue<pair<ll,int> > ans;
	ll tmp;
	int d = 1;
	for (int i = 1;i <= n;i++) {
		cin >> tmp;
		if (i > m) d++;
		while (mx.size() && i - mx.front().second >= m) mx.pop_front();
		while (mn.size() && i - mn.front().second >= m) mn.pop_front();
		while (mx.size() && mx.back().first < tmp) mx.pop_back();
		while (mn.size() && mn.back().first > tmp) mn.pop_back();
		mx.push_back({ tmp, i }), mn.push_back({ tmp, i });
		if (mx.front().first - mn.front().first == k) ans.push({ d, i });
	}
	for (int i = n - m + 2;i <n;i++) {
		while (mx.size() && mx.front().second < i) mx.pop_front();
		while (mn.size() && mn.front().second < i) mn.pop_front();
		if (mx.front().first - mn.front().first == k) ans.push({ i, n });
	}
	int len = ans.size();
	cout << len << "\n";
	while (len) {
		cout << ans.front().first << " " << ans.front().second << "\n";
		ans.pop();
		len--;
	}
	return 0;
}
