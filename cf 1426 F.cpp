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
const int MAXN = 100005;
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
/*-----------------------------------------------*/
ll dp[4];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string s1;
	cin >> n;
	cin >> s1;
	mem(dp, 0);
	dp[0] = 1LL;
	for (int i = 0;i < n;i++) {
		if (s1[i] == 'a') dp[1] = (dp[1] + dp[0]) % MOD;
		else if (s1[i] == 'b') dp[2] = (dp[2] + dp[1]) % MOD;
		else if (s1[i] == 'c') dp[3] = (dp[3] + dp[2]) % MOD;
		else {
			dp[3] = (dp[3] * 3 + dp[2]) % MOD;
			dp[2] = (dp[2] * 3 + dp[1]) % MOD;
			dp[1] = (dp[1] * 3 + dp[0]) % MOD;
			dp[0] = (dp[0] * 3)%MOD;
		}
	}
	cout << dp[3] << endl;
	return 0;
}
