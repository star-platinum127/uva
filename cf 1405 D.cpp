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
vector<vector<int>> v;
int dp[100005];
int rt;
void dfs(int pos,int fa,int deep) {
	dp[pos] = deep;
	if (deep > dp[rt]) rt = pos;
	for (int e : v[pos]) {
		if (e == fa) continue;
		dfs(e,pos,deep+1);
	}
}
int dis(int a, int b) {
	dfs(b, b, 0);
	return dp[a];
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		rt = 1;
		mem(dp, 0);
		int n,a,b,da,db;
		cin >> n >> a>>b>>da>>db;
		v.clear();
		v.resize(n + 1);
		for (int i = 0;i < n - 1;i++) {
			int x,y;
			cin >> x>>y;
			v[x].pb(y);
			v[y].pb(x);
		}
		int ans = dis(a, b);
		dfs(b, b, 0);
		int maxi = 0;
		for (int i = 1;i <= n;i++) maxi = max(maxi, dp[i]);
		if (maxi >= 2 * da + 1 && db >= 2 * da + 1 && ans>da) {
			cout << "Bob" << endl;
		}
		else cout << "Alice" << endl;
	}
	return 0;
}
