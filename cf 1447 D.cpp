#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define mikumywaifu ios_base::sync_with_stdio(0)
#define misakamywaifu cin.tie(0)
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000007;
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
const int N = 5005;
int dp[N][N];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int n, m;
	cin >> n >> m;
	string s1, s2;
	cin >> s1 >> s2;
	mem(dp, 0);
	int mx = -INF;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			if (s1[i-1] == s2[j-1]) dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 2);
			else dp[i][j] = max(dp[i][j], dp[i - 1][j] - 1), dp[i][j] = max(dp[i][j], dp[i][j - 1] - 1);
			mx = max(mx, dp[i][j]);
		}
	}
	cout << mx << "\n";
	return 0;
}
