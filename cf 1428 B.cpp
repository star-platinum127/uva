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
#define lowbit(x) x&-x
const int MOD = 1000000009;
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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s1;
		cin >> s1;
		bool flag1 = 0, flag2 = 0;
		for (int i = 0;i < n;i++) {
			if (s1[i] == '>') flag1 = 1;
			else if (s1[i] == '<') flag2 = 1;
		}
		map<int, int> mp;
		int ans = 0;
		for (int i = 0;i < n;i++) {
			if (s1[i] == '-') {
				ans += (!mp[i]) + (!mp[(i + 1) % n]);
				mp[i] = 1;
				mp[(i + 1) % n] = 1;
			}
			else if (s1[i] == '>' && flag2 == 0) {
				ans += (!mp[i]);
				mp[i] = 1;
			}
			else if (s1[i] == '<' && flag1 == 0) {
				ans += (!mp[i]);
				mp[i] = 1;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
