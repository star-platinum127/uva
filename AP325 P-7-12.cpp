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
int fa[10005];
struct e {
	int x;
	int y;
	int u;
};
int find(int a) {
	if (fa[a] == a) return a;
	else {
		fa[a] = find(fa[a]);
		return fa[a];
	}
}
bool cmp(e x, e y) {
	return x.u < y.u;
}
vector<e> v;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) fa[i] = i;
	for (int i = 0;i < m;i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v.pb({ a,b,c });
	}
	sort(v.begin(), v.end(), cmp);
	int tmp = n - 1;
	ll ans = 0;
	for (int i = 0;i < m;i++) {
		int x1 = find(v[i].x);
		int y1 = find(v[i].y);
		if (x1 == y1) continue;
		else {
			fa[y1] = x1;
			tmp -= 1;
			ans += v[i].u;
		}
	}
	if (tmp) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}
