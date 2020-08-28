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
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll a,b;
		cin >> a>>b;
		ll cnts, cntw;
		cin >> cnts >> cntw;
		ll s, w;
		cin >> s >> w;
		if (s < w) {
			swap(s, w);
			swap(cnts, cntw);
		}
		ll ans = -1e9;
		for (ll i = 0;i <= cntw && w * i <= a;i++) {
			ll ans1 = min((a - i * w) / s, cnts);
			ll ans2 = min(b / w, cntw - i);
			ll ans3 = min(cnts - ans1, (b - ans2 * w) / s);
			ans = max(ans, ans1 + ans2 + ans3 + i);
		}
		cout << ans << endl;
	}
	return 0;
}
