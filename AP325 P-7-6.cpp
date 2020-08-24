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
int in[100005];
int d[100005];
int p[100005];
vector<pii> v[10005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	for (int i = 0;i < 10005;i++) v[i].clear();
	int n, m;
	cin >> n >> m;
	int s, t;
	mem(in, 0);
	cin >> s >> t;
	for (int i = 0;i < m;i++) {
		int x, y, u;
		cin >> x >> y >> u;
		v[x].pb({ y,u });
		in[y]++;
	}
	queue<int> q;
	for (int i = 0;i < n;i++) d[i] = 1e9;
	for (int i = 0;i < n;i++) p[i] = -1e9;
	d[s] = 0;
	p[s] = 0;
	for (int i = 0;i < n;i++) {
		if (in[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int pos = q.front();
		q.pop();
		for (auto tmp : v[pos]) {
			d[tmp.F] = min(d[tmp.F], d[pos] + tmp.S);
			p[tmp.F] = max(p[tmp.F], p[pos] + tmp.S);

			if (--in[tmp.F] == 0) q.push(tmp.F);
		}
	}
	if (d[t] == 1e9) cout << "NO path" << endl;
	else cout << d[t] << " " << p[t] << endl;
	return 0;
}
