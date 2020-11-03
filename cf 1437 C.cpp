#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000009;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
template<typename _Size>
inline _Size
__lg(_Size __n)
{
	_Size __k;
	for (__k = 0; __n != 0; __n >>= 1)
		++__k;
	return __k - 1;
}
/*-----------------------------------------------*/
int arr[205];
int dp[205][525];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1;i <=n;i++) cin >> arr[i];
		sort(arr+1, arr + n+1);
		mem(dp, INF);
		for (int k = 1;k <=n;k++) {
			for (int i = 1;i <=2 * n;i++) {
				for (int j = 1;j <i;j++) {
					dp[k][i] = min(dp[k][i], dp[k-1][j]);
				}
				if (k == 1) dp[k][i] = 0;
				dp[k][i] += abs(i-arr[k]);
			}
		}
		int ans = INF;
		for (int i = 0;i <=n * 2;i++) {
			ans = min(ans, dp[n][i]);
		}
		cout << ans << "\n";
	}
	return 0;
}
