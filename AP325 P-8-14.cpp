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
vector<int> v[100005];
int dp[100005];
int ans;
bool bct[100005];
void dfs(int pos) {
	for (int e : v[pos]) {
		dfs(e);
		ans = max(ans, dp[e] + 1 + dp[pos]);
		dp[pos] = max(dp[pos], dp[e] + 1);
	}
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	ans = -1e9;
	cin >> n;
	mem(dp, 0);
	mem(bct, 0);
	for (int i = 1;i < n;i++) {
		int x, y;
		cin >> x >> y;
		v[x].pb(y);
		bct[y] = 1;
	}
	int k = 0;
	while (bct[k]) k++;
	dfs(k);
	cout << ans << endl;
	return 0;
}
