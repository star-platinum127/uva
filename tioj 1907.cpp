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
bool cmp(pii x, pii y) {
	if (x.F == y.F) return y.S < x.S;
	return x.F < y.F;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pii> arr;
		for (int i = 0;i < n;i++) {
			int x, y;
			cin >> x >> y;
			arr.pb({ x,y });
		}
		sort(arr.begin(), arr.end(), cmp);
		vector<int> ans;
		for (int i = 0;i < n;i++) {
			auto pos = lower_bound(ans.begin(), ans.end(), arr[i].S);
			if (pos == ans.end()) ans.pb(arr[i].S);
			else *pos = arr[i].S;
		}
		cout << ans.size() << "\n";
	}
	return 0;
}
