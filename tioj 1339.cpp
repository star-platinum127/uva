#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define S second
#define F first
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000009;
const int N = 1000000+10;
int n;
pll arr[N];
ll s[N];
ll bit1[N];
ll bit2[N];
void motify(ll x,ll y) {
	for (;x <=n;x += lowbit(x)) {
		bit1[x] += y;
		bit1[x] %= MOD;
		bit2[x]++;
	}
}
pii query(ll x) {
	ll tmp = 0,cnt=0;
	for (;x;x -= lowbit(x)) {
		tmp += bit1[x];
		tmp %= MOD;
		cnt += bit2[x];
	}
	return { tmp,cnt };
}
unordered_map<int, int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> arr[i].first >> arr[i].second;
		s[i] = arr[i].second;
	}
	
	sort(arr, arr + n);
	sort(s, s + n);
	ll cnt = 1;
	ll nn = n;
	n = unique(s, s + n) - s;
	for (int i = 0;i < n;i++) {
		mp[s[i]] = i + 1;
	}
	ll ans = 0;
	for (int i = 0;i < nn;i++) {
		auto e = query(mp[arr[i].S]);
		ans += (arr[i].first* arr[i].second % MOD * e.S % MOD- e.F+MOD)%MOD;
		ans %= MOD;
		motify(mp[arr[i].S], arr[i].second * arr[i].first % MOD);
	}
	cout << ans << "\n";
	return 0;
}
