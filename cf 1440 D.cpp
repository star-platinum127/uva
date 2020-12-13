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

ll f[200005];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int> > edge(n + 1);
		vector<int> deg(n + 1);
		for (int i = 0;i < m;i++) {
			int x, y;
			cin >> x >> y;
			x--, y--;
			edge[x].push_back(y);
			edge[y].push_back(x);
		}
		queue<int> q;
		vector<int> vis(n+1);
		for (int i = 0;i < n;i++) {
			sort(edge[i].begin(), edge[i].end());
			deg[i] = edge[i].size();
			if (deg[i] < k) q.push(i), vis[i] = 1;
		}
		vector<int> cli;
		while (!q.empty()) {
			auto u = q.front();
			q.pop();
			vis[u] = 2;
			if (1LL * k * (k - 1) <= 2*m && cli.empty() && deg[u] == k - 1) {
				cli.push_back(u);
				for (auto e : edge[u]) {
					if (vis[e] < 2) cli.push_back(e);
				}
				bool flag = 1;
				for (auto x : cli) {
					for (auto y : cli) {
						if (x != y && !binary_search(edge[x].begin(), edge[x].end(), y)) flag = 0;
					}
				}
				if (!flag) cli.clear();
			}
			for (auto e : edge[u]) {
				if (--deg[e] < k && !vis[e]) vis[e] = 1, q.push(e);
			}
		}
		int cnt = 0;
		for (int i = 0;i < n;i++) cnt += (vis[i] == 0);
		if (cnt) {
			cout << 1 << " " << cnt << "\n";
			for (int i = 0;i < n;i++) if (!vis[i]) cout << i+1 << " ";
			cout << "\n";
		}
		else if (!cli.empty()) {
			cout << 2 << "\n";
			for (auto e : cli) cout << e+1 << " ";
			cout << "\n";
		}
		else cout << -1 << "\n";
	}
	return 0;
}
