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
int arr[3005];
int cnt[3005];
int n;
ll ans,tmp;
void solve(){
	for (int i = 0;i < n;i++) {
		tmp = 0;
		mem(cnt, 0);
		for (int j = i + 1;j < n;j++) cnt[arr[j]]++;
		for (int j = i - 1;j >= 0;j--) {
			if (arr[i] == arr[j]) {
				ans += tmp;
			}
			tmp += cnt[arr[j]];
		}
	}
	cout << ans << endl;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ans = 0;
		tmp = 0;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		solve();
	}
	return 0;
}
