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
const ll MOD = 1000000007;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const int LINF = 4611686018427387903;
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
string s1;
ll qpow[100010];
ll arr[100010];
ll cal(ll x) {
	return (x * (x - 1)/ 2)%MOD;
}
ll solve(string s) {
	qpow[0] = 1;
	int len = s.length();
	arr[0] = 1;
	for (int i = 1;i <= 100005;i++) {
		qpow[i] = qpow[i - 1] * 10;
		qpow[i] %= MOD;
	}
	for (int i = 1;i <= 100005;i++) {
		arr[i] = arr[i - 1] + (i + 1) * qpow[i];
		arr[i] %= MOD;
	}
	ll ans = 0;
	for (int i = 0;i < len;i++) {
		ans += ((cal(i + 1) * qpow[len-i-1])%MOD * (s[i] - '0'))%MOD;
		ans += ((s[i] - '0') * arr[len-i-2])%MOD;
		ans %= MOD;
	}
	return ans;

}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> s1;
	cout<<solve(s1)<<endl;
	return 0;
}
