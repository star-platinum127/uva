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
int n, m;
vector<int> pa[100005];
int arr[100005];
int ch[100005];
vector<int> v;
void dfs(int a) {
	int buf=0;
	for (auto e : pa[a]) {
		buf = ch[a];
		ch[a] = 0;
		dfs(e);
		ch[a] += ch[e];
		int cnt =(n - ch[a])*(ch[a]) * 2 * arr[e];
		v.pb(cnt);
	}
	ch[a] += buf;
	ch[a]++;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cin >> n;
	mem(ch, 0);
	for (int i = 0;i <= n;i++) pa[i].clear();
	for (int i = 2;i <= n;i++) {
		int tmp;
		cin >> tmp;
		pa[tmp].pb(i);
	}
	arr[1] = 0;
	for (int i = 2;i <=n ;i++) {
		cin >> arr[i];
	}
	dfs(1);
	int len = v.size();
	ll ans = 0;
	for (int i = 0;i < len;i++) ans += v[i];
	cout << ans << endl;
	return 0;
}
