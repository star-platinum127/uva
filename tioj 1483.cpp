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
const int N = 1005;
int n, m;
int dp[N][N];
vector<pii> arr[N];
struct Fenwicktree {
	int bit[N][N];
	ll query(int x,int y) {
		int tmp = 0;
		for (int i = x;i;i -= lowbit(i)) {
			for (int j = y;j;j -= lowbit(j)) {
				tmp += bit[i][j];
				tmp %= MOD;
			}
		}
		return tmp;
	}
	void modify(int x, int y, int z) {
		for (int i = x;i <N;i += lowbit(i)){
			for (int j = y;j <N;j += lowbit(j)) {
				bit[i][j]+=z;
				bit[i][j] %= MOD;
			}
		}
	}
	
}BIT;
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		mem(BIT.bit, 0);
		for (int i = 0;i <N;i++) arr[i].clear();
		for (int i = 1;i <=n;i++) {
			for (int j = 1;j <=m;j++) {
				int x;
				cin >> x;
				arr[x].pb({ i, j });
			}
		}
		for (int i = 0;i < N;i++) {
			if (!arr[i].empty()) {
				for (auto e : arr[i]) dp[e.first][e.second] = 1 +BIT.query(e.first, e.second);
				for (auto e : arr[i]) BIT.modify(e.first, e.second, dp[e.first][e.second]);
			}
		}
		int ans = 0;
		for (int i = 1;i <= n;i++) {
			for (int j = 1;j <= m;j++) {
				ans += dp[i][j];
				ans %= MOD;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}
