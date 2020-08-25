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
#define MOD 1000000007
vector<int> v[50005];
vector<int> ans;
void dfs(int fa, int pos) {
	ans.pb(pos);
	for (int e : v[pos]) {
		if (e == fa) continue;
		dfs(pos, e);
		ans.pb(pos);
	}
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	int sum1=0;
	ans.clear();
	for (int i = 0;i < n;i++) v[i].clear();
	for (int i = 0;i < n - 1;i++) {
		int x, y, u;
		cin >> x >> y >> u;
		v[x].pb(y);
		v[y].pb(x);
		sum1 += u;
	}
	for (int i = 0;i < n;i++) sort(v[i].begin(), v[i].end());
	dfs(-1,0);
	cout << sum1 * 2 << endl;
	int len = ans.size();
	for (int i = 0;i < len;i++) cout << ans[i] << " ";
	cout << endl;
	return 0;
}
