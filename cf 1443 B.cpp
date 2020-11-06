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

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		string s1;
		cin >> s1;
		int pos;
		for (int i = 0;i < s1.length();i++) {
			if (s1[i] == '1') {
				pos = i;
				break;
			}
		}
		bool flag = 0;
		int ans = 0,cnt=10005;
		for (int i = pos;i < s1.length();i++) {
			if (s1[i] == '1') {
				if (!flag) {
						ans += min(a, b * cnt);
						flag = 1;
						cnt = 0;
				}
			}
		
			else {
				flag = 0;
				cnt++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
