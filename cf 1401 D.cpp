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
vector<ll> ans;
ll arr[100005];
ll fac[100005];
int x, y;
int n,m;
void dfs(int pos, int fa) {
	arr[pos] = 0;
	for (int e : v[pos]) {
		if (e == fa) continue;
		dfs(e, pos);
		ans.pb( arr[e] * (n - arr[e]));
		arr[pos] += arr[e];
	}
	arr[pos]++;
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1;i <= n ;i++) {
			v[i].clear();
		}
		ans.clear();
		for (int i = 0;i < n-1;i++) {
			
			cin >> x >> y;
			v[x].pb(y);
			v[y].pb(x);
		}
		dfs(1, 0);
		sort(ans.begin(), ans.end());
		cin >> m;
		for (int i = 0;i < m;i++) {
			cin >> fac[i];
		}
		if (m <= n - 1) {
			for (int i = m;i < n-1 ;i++) fac[i] = 1;
			sort(fac, fac + n-1);
		}
		else {
			sort(fac, fac + m);
			for (int i = m-1 ;i >= n-1;i--) {
				fac[n- 2] *= fac[i];
				fac[n-2] %= MOD;
			}
		}
		
		ll cnt = 0;
		for (int i = 0;i < n-1;i++) {
			cnt += ans[i] * fac[i];
			cnt %= MOD;
		}
		cout << cnt << endl;
	}
	return 0;
}
