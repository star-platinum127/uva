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
const int N = 10005;
void no() {
	cout << "NO" << "\n";
	exit(0);
}
int arr[N];
vector<int> edge[N];
vector<int> ans;
bool flag[N];
void dfs(int p,int fa) {
	flag[p] = 1;
	for (auto e : edge[p]) {
		if (fa == e) continue;
		dfs(e, p);
	}
}
bool bst(int p,int fa) {
	int r=0, l=0;
	bool k = 1;
	for (auto e : edge[p]) {
		if (fa == e) continue;
		if (arr[e] >=arr[p]) {
			if (r) return 0;
			r =e;
		}
		else {
			if (l) return 0;
			l = e;
		}
	}
	if (l) k &= bst(l, p);
	ans.pb(arr[p]);
	if (r) k &= bst(r, p);
	return k;
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	int n, m;
	cin >> n >> m;
	for (int i = 1;i <=n;i++) cin >> arr[i];
	set<pii>s;
	int w = 0;
	for (int i = 0;i < m;i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) swap(a, b);
		if (s.count({ a,b })) continue;
		w++;
		s.insert({ a,b });
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	if (w != n - 1) {
		no();
	}
	dfs(1, -1);
	int ok = 0;
	for (int i = 1;i <= n;i++) if (!flag[i]) no();
	for (int i = 1;i <= n;i++) {
		ans.clear();
		if (bst(i, 0) && is_sorted(ans.begin(),ans.end())) ok = 1;
	}
	if (!ok) no();
	else cout << "YES" << "\n";
	return 0;
}
