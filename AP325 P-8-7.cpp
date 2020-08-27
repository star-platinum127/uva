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
int arr[200005];
int buf[200005];
vector<int> v[200005];
map<int, int> mp;
int ans;
void dfs(int pos) {
	int tmp = mp[arr[pos]];
	buf[tmp]++;
	ans = max(ans, buf[tmp]);
	for (int e : v[pos]) {
		dfs(e);
	}
	buf[tmp]--;
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	ans =-1e9;
	cin >> n;
	mem(buf, 0);
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = 0;i < n - 1;i++) {
		int x, y;
		cin >> x >> y;
		v[x].pb(y);
	}
	for (int i = 0;i < n;i++) mp.insert({ arr[i],0 });
	int cnt = 0;
	for (auto &e : mp) {
		e.S = cnt;
		cnt++;
	}
	dfs(0);
	cout << ans << endl;
	return 0;
}
