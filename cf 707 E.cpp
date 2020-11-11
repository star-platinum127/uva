#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
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
const int N = 2005;
struct p {
	ll x, y, w;
};
int n, m, k,len;
p arr[N][N];
ll l[N];
bool t[N], flag[N];
struct Fenwicktree {
	ll bit[N][N];
	void modify(int x, int y, int w) {
		for (int i = x;i <=n;i+=lowbit(i)) {
			for (int j = y;j <=m;j+=lowbit(j)) {
				bit[i][j] += w;
			}
		}
	}
	ll query(int x, int y) {
		ll tmp = 0;
		for (int i = x;i;i -= lowbit(i)) {
			for (int j = y;j;j -= lowbit(j)) {
				tmp += bit[i][j];
			}
		}
		return tmp;
	}
}BIT;
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n >> m >> k;
	mem(flag, 0);
	for (int i = 0;i < k;i++) {
		cin >> l[i];
		for (int j = 0;j < l[i];j++) {
			cin >> arr[i][j].x>>arr[i][j].y>>arr[i][j].w;
		}
		t[i] = 1;
	}
	int q;
	cin >> q;
	while (q--) {
		string s1;
		cin >> s1;
		if (s1 == "SWITCH") {
			int c;
			cin >> c;
			c--;
			t[c] ^= 1;
		}
		else {
			for (int i = 0;i < k;i++) {
				if (t[i]) {
					for (int j = 0;j < l[i];j++) {
						BIT.modify(arr[i][j].x, arr[i][j].y, arr[i][j].w * (flag[i] ==1 ? (-1) : 1));
					}
					flag[i] ^= 1;
					t[i] = 0;
				}
			}
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			ll ans = 0;
			ans += BIT.query(x2, y2);
			ans -= BIT.query(x1 - 1, y2);
			ans -= BIT.query(x2, y1 - 1);
			ans += BIT.query(x1 - 1, y1 - 1);
			cout << ans << "\n";
		}
	}
	return 0;
}
