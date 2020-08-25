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
int n;
vector<pii> v[100005];
int arr[100005];
ll ans = 0;
int mid = -1;
void dfs(int pos) {
	for (auto e : v[pos]) {
		int u = e.F;
		int w = e.S;
		dfs(u);
		ans += min(arr[u], n - arr[u]) * w;
		arr[pos] += arr[u];
	}
	arr[pos]++;
	if (mid < 0 && arr[pos] >= n / 2) mid = pos;
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cin >> n;
	for (int i = 1;i < n ;i++) {
		int x, y;
		cin >> x >> y;
		v[x].pb({ i,y });
	}
	dfs(0);
	cout  << mid<< " " << ans << endl;
	return 0;
}
