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
const int MOD = 1000000009;
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
const int N = 200005;
vector<vector<int> > tre;
ll c[N], sum1[N],arr[N];
ll ans;
void dfs(int pos, int fa) {
	sum1[pos] = arr[pos];
	for (auto e : tre[pos]) {
		if (e == fa) continue;
		dfs(e, pos);
		c[pos] += c[e];
		sum1[pos] += sum1[e];
	}
	if (!tre[pos].size()) c[pos] = 1;
	ans = max(ans, sum1[pos] / c[pos] + (sum1[pos] % c[pos] != 0));
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ans = -LINF;
	tre.resize(n + 1);
	for (int i = 0;i <= n;i++) tre[n].clear();
	for (int i = 2;i <=n;i++) {
		int tmp;
		cin >> tmp;
		tre[tmp].push_back(i);
	}
	for (int i = 1;i <=n;i++) cin >> arr[i];
	dfs(1, 0);
	cout << ans << "\n";
	return 0;
}
