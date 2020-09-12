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
#define MOD 1000000007
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int a[100005], b[100005];
vector<int> v;
ll dp[100005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		v.clear();
		v.pb(0);
		for (int i = 1;i <=m;i++) {
			cin >> a[i] >> b[i];
			v.pb(a[i]);
		}
		dp[m + 1] = 0;
		sort(v.begin(), v.end());
		for (int i = m;i >=1;i--) {
			dp[i] = dp[i + 1] + v[i];
		}
		ll maxi = 0,tmp=0;
		for (int i = 1;i <=m;i++) {
			int pos = upper_bound(v.begin(), v.end(), b[i])-v.begin();
			pos = max(pos, m - n + 1);
			tmp = dp[pos];
			pos = n - (m - pos + 1);
			if (b[i] >= a[i]) {
				pos--;
				tmp += a[i];
			}
			tmp += (ll)b[i] * pos;
			maxi = max(maxi, tmp);
		}
		cout << maxi<<endl;
	}
	return 0;
}
