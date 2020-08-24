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
int arr[100005];
bool flag[100005];
vector<pii> v[10005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) v[i].clear();
	for (int i = 0;i < m;i++) {
		int x, y, u;
		cin >> x >> y >> u;
		v[x].pb({y,u});
		v[y]. pb({x,u});
	}
	mem(flag, 0);
	int s = 0;
	for (int i = 0;i < n;i++) arr[i] = 1e9;
	arr[s] = 0;
	priority_queue<pii> pq;
	pq.push({arr[s],s });
	while (!pq.empty()) {
		auto p = pq.top();
		pq.pop();
		int tmp = p.S;
		if (flag[tmp]) continue;
		flag[tmp] = 1;
		for (auto buf : v[tmp]) {
			int u = buf.F;
			int w = buf.S;
			if (arr[tmp] + w < arr[u]) {
				arr[u] = arr[tmp] + w;
				pq.push({ -arr[u], u });
			}
		}
	}
	int maxi = -1e9;
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] < 1e9) {
			if (arr[i] > maxi) maxi = arr[i];
		}
		else cnt++;
	}
	cout << maxi << " " << cnt << endl;
	return 0;
}
