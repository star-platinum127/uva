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
ll arr[200005];
ll ans[200005];
bool flag[200005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1;i <= n;i++) cin >> arr[i];
		mem(ans, 0);
		mem(flag, 0);
		for (int i = 2;i < n;i++) {
			ans[i] = ans[i - 1];
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
				ans[i]++;
				flag[i] = 1;
			}
		}
		ans[n] = ans[n - 1];
		ll maxi = 0;
		int cnt = 1;
		int buf;
		for (int i =m;i <=n;i++) {
			if (ans[i - 1] - ans[i - m + 1] > maxi) {
				cnt = i - m+1;
				maxi = ans[i - 1] - ans[i - m + 1];
			}
		}
		cout << maxi+1<< " " << cnt << endl;
	}
	return 0;
}
