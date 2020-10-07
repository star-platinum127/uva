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
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const int LINF = 4611686018427387903;
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
int n;
int dp[1000005];
vector<vector<int>> arr;
vector<int> ans;
int maxi;
void dfs(int pos,int fa) {
	for (auto e : arr[pos]) {
		if (e == fa) continue;
		dfs(e, pos);
		ans[pos] = max(ans[pos], dp[e] + 1);
		dp[pos] += dp[e]+1;
	}
	ans[pos] = max(ans[pos], n - dp[pos] - 1);
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	ans.resize(n+1);
	maxi = 1e9;
	mem(dp, 0);
	arr.resize(n + 1);
	for (int i = 0;i < n - 1;i++) {
		int x, y;
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
	}
	dfs(0, 0);
	for (int i = 0;i < n;i++) maxi = min(maxi, ans[i]);
	cout << maxi << endl;
	return 0;
}
