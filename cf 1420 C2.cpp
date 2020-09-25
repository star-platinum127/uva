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
ll arr[300005];
ll dio[300005];
ll ans;
void add(int a, int b) {
	if (dio[a] > 0) {
		ans -= dio[a];
	}
	dio[a] = b;
	if (dio[a]> 0) ans += dio[a];
	return;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		ans = 0;
		arr[0] = 0;
		for (int i = 1;i <=n;i++) cin >> arr[i];
		for (int i = 1;i <= n;i++) {
			dio[i] = arr[i] - arr[i - 1];
			ans = max(ans, ans + dio[i]);
		}
		cout << ans << endl;
		while (m--) {
			int x, y;
			cin >> x >> y;
			swap(arr[x], arr[y]);
			add(x, arr[x] - arr[x - 1]);
			if (x + 1 <= n) add(x + 1, arr[x + 1] - arr[x]);
			if (y + 1 <= n) add(y + 1, arr[y + 1] - arr[y]);
			add(y, arr[y] - arr[y - 1]);
			cout << ans << endl;
		}
	}
	return 0;
}
