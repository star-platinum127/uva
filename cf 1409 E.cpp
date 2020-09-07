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
#define pll pair<long,long>
int arr[200005];
int dp[200005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, buf,k;
		cin >> n >> k;
		for (int i = 1;i <= n;i++) cin >> arr[i];
		for (int i = 1;i <= n;i++) cin >> buf;
		sort(arr + 1, arr + 1 + n);
		mem(dp, 0);
		for (int i = n;i >= 1;i--) {
			int nw = upper_bound(arr + 1, arr + n + 1, arr[i] + k)-arr;
			dp[i] = max(dp[i + 1], nw - i);
		}
		int ans = 0;
		for (int i = 1;i <= n;i++) {
			int nw = upper_bound(arr + 1, arr + n + 1, arr[i] + k) - arr;
			ans = max(ans, nw - i + dp[nw]);
		}
		cout << ans << endl;
	}

	return 0;
}
