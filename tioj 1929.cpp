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
const int N = 1000005;
int n;
vector<int> edge[N],redge[N];
vector<int>ans(n+1);
bool vis[N];
stack<int> st;
void dfs(int pos) {
	if (vis[pos]) return;
	vis[pos] = 1;
	for (auto e : edge[pos]) {
		dfs(e);
	}
	st.push(pos);
}
void dfs2(int pos,int t) {
	if (ans[pos]) return;
	ans[pos] = t;
	for (auto e : redge[pos]) {
		dfs2(e, t);
	}
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> n >> m;
	for (int i = 0;i <= n;i++) {
		edge[i].clear();
		redge[i].clear();
	}
	for (int i = 0;i < m;i++) {
		int x, y;
		cin >> x >> y;
		edge[x].pb(y);
		redge[y].pb(x);
	}
	ans.resize(n + 1);
	for (int i = 1;i <= n;i++) dfs(i);
	int c = 0;
	while (st.size()) {
		if (!ans[st.top()]) dfs2(st.top(), ++c);
		st.pop();
	}
	cout << c << "\n";
	for (int i = 1;i <= n;i++) cout << ans[i] << " ";
	cout << "\n";
	return 0;
}
