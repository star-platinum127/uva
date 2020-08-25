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
ll arr[35];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	arr[0] = 1;
	for (int i = 1;i <=30;i++) {
		arr[i] = arr[i - 1] * 2;
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll ans = 0;
		int tmp = n / 2;
		for (int i = n-1;i>=n-tmp;i--) {
			ans -= arr[i];
		}
		ans += arr[n];
		for (int i = 1;i <= tmp-1;i++) ans += arr[i];
		cout << ans << endl;
	}
	return 0;
}
