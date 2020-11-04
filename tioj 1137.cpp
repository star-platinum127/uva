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
const int N = 10005;
vector<int>arr[N];
vector<int>ans;
int dfn[N], low[N];
int cnt, tmp;
void dfs(int pos, int fa) {
	cnt = 0;
	tmp++;
	bool flag = 0;
	dfn[pos] = tmp, low[pos] = tmp;
	for (auto e : arr[pos]) {
		if (e == fa) continue;
		if (dfn[e]) low[pos] = min(low[pos], dfn[e]);
		else {
			cnt++;
			dfs(e, pos);
			low[pos] = min(low[e], low[pos]);
			if (low[e] >= dfn[pos]) flag = 1;
		}
	}
	if (pos == 1 && cnt > 1) ans.push_back(1);
	else if (pos != 1 && flag) ans.push_back(pos);
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0;i <= n;i++) {
			arr[i].clear();
			low[i] = 0;
			dfn[i] = 0;
		}
		for (int i = 0;i < m;i++) {
			int x, y;
			cin >> x >> y;
			arr[x].push_back(y);
			arr[y].push_back(x);
		}
		ans.clear();
		tmp = 0;
		dfs(1, 0);
		sort(ans.begin(), ans.end());
		if (!ans.size()) cout << 0 << "\n" << 0 << "\n";
		else{
			cout << ans.size() << "\n";
			for (auto e : ans) cout << e << " ";
			cout << "\n";
		}
	}
	return 0;
}
