#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
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
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
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

signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n,c0,c1,h;
		cin >> n >> c0 >> c1 >> h;
		string s1;
		cin >> s1;
		int cnt1=0, cnt2 = 0;
		for (int i = 0;i < n;i++) {
			if (s1[i] == '1') cnt2++;
			else cnt1++;
		}
		int ans = min(h * (n - cnt1) + n * c0, h * (n - cnt2) + n * c1);
		ans = min(ans, c0 * cnt1 + c1 * cnt2);
		cout << ans << "\n";
	}
	return 0;
}
