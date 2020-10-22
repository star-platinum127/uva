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
const ll MOD = 1000000007;
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
vector<ll> arr;
vector<ll> ans;
void modify(ll x,ll y) {
	ll len = ans.size();
	for (;x < len;x += lowbit(x)) {
		ans[x] += y;
	}
}
ll query(ll x) {
	ll cnt=0;
	for (;x;x -= lowbit(x)) {
		cnt += ans[x];
	}
	return cnt;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int num = 1;
	while (cin >> n && n) {
		set<ll> s;
		ans.clear();
		map<ll, ll> mp;
		arr.resize(n + 1);
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			s.insert(arr[i]);
		}
		ll cnt = 1;
		for (auto e : s) {
			mp[e] = cnt++;
		}
		for (auto &e : arr) {
			e = mp[e];
		}
		ans.resize(s.size() + 1);
		ll pos = 0, ans = 0;
		for (int i = 0;i < n;i++) {
			ans += pos++ - query(arr[i]);
			modify(arr[i], 1);
		}
		cout << "Case #"<< num++ << ": ";
		cout << ans << "\n";
	}
	return 0;
}
