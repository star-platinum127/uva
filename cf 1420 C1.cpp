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
const int MAX = 100005;
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
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
ll arr[300005];
ll dp[300005][2];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		for (int i = 1;i <=n;i++) cin >> arr[i];
		dp[0][0] = 0;
		dp[0][1] = 0;
		for (int i = 1;i <= n;i++) {
			dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + arr[i]);
			dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - arr[i]);
		}
		cout << max(dp[n][1], dp[n][0]) << endl;
	}
	return 0;
}
