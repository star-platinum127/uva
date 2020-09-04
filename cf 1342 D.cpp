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
int b[200005];
int arr[200005];
int cnt[200005];
vector<int> v[200005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1;i <=n;i++) v[i].clear();
	mem(cnt, 0);
	for (int i = 1;i <= n;i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	int ans = 0;
	sort(arr + 1, arr+n + 1);
	for (int i = 1;i <= m;i++) cin >> b[i];
	for (int i = m;i >= 1;i--) {
		cnt[i] += cnt[i + 1];
		ans = max(ans, (int)ceil(1.0*cnt[i] / b[i]));
	}
	for (int i = 1;i <= n;i++) {
		v[i % ans].pb(arr[i]);
	}
	cout << ans << endl;
	for (int i = 0;i < ans;i++) {
		int len = v[i].size();
		cout << len << " ";
		for (int j = 0;j < len;j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
