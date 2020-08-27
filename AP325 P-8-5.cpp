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
int in[105];
int arr[200005];
int lc[200005];
int rc[200005];
int dfs(int a) {
	if (a >= n) return arr[a];
	arr[a] = dfs(lc[a]) + dfs(rc[a]);
	return arr[a];
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cin >> n >> m;
	mem(arr, 0);
	for (int i = n;i <= 2*n - 1;i++) cin >> arr[i];
	for (int i = 0;i < m;i++) cin >> in[i];
	for (int i = 0;i < n - 1;i++) {
		int x, y, z;
		cin >> x >> y >> z;
		lc[x] = y;
		rc[x] = z;
	}
	int tmp = 1;
	arr[1] = dfs(1);
	for (int i = 0;i < m;i++) {
		tmp = 1;
		while (tmp < n) {
			if (arr[lc[tmp]] > arr[rc[tmp]]) {
				tmp = rc[tmp];
			}
			else tmp = lc[tmp];
			arr[tmp] += in[i];
		}
		if (i > 0) cout << " ";
		cout << tmp;
	}
	cout << endl;
	return 0;
}
