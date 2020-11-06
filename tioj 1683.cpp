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
vector<int> edge[N], redge[N];
vector<int> ans;
vector<int> ng[N];
int vis[N];
int in[N];
int nw;
int mx;
int sz[N];
vector<int>st;
void dfs(int pos) {
	vis[pos] = nw;
	for (auto e : edge[pos]) {
		if (vis[e]!=nw) dfs(e);
	}
	st.emplace_back(pos);
}
void dfs2(int pos, int t) {
	ans[pos] = t;
	sz[t]++;
	vis[pos] = nw;
	for (auto e : redge[pos]) {
		if (vis[e]!=nw) dfs2(e, t);
	}
}
void dfs3(int pos, int t) {
	mx = max(mx, t);
	for (auto e : ng[pos]) {
		if (vis[e]!=nw) {
			vis[e] = nw;
			dfs3(e, t + sz[e]);
			vis[e] = 0;
		}
	}
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		mx = 0;
		int n, m;
		cin >> n >> m;
		for (int i = 0;i <= n;i++) {
			edge[i].clear();
			redge[i].clear();
			ng[i].clear();
		}
		mem(sz, 0);
		mem(vis, 0);
		for (int i = 0;i < m;i++) {
			int x, y;
			cin >> x >> y;
			edge[x].emplace_back(y);
			redge[y].emplace_back(x);
		}
		ans.resize(n + 2);
		st.clear();
		int cnt = 0;
		nw = 1;
		for (int i = 1;i <= n;i++)if(vis[i]!=nw) dfs(i);
		int len = st.size();
		nw++;
		for (int i = len - 1;i >= 0;i--) {
			if (vis[st[i]] != nw) dfs2(st[i], ++cnt);
		}
		mem(in, 0);
		for (int i = 1;i <= n;i++) {
			for (auto j : edge[i]) {
				if (ans[i] != ans[j]) {
					ng[ans[i]].emplace_back(ans[j]);
					in[ans[j]]++;
				}
			}
		}
		for (int i = 1;i <=cnt;i++) {
			if (!in[i]) {
				nw++;
				dfs3(i, sz[i]);
			}
		}
		cout << mx << "\n";
	}
	return 0;
}
