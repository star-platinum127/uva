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
	cin >> t;;
	while (t--) {
		string s1;
		cin >> s1;
		int cnt1=0, cnt2=0;
		int ans = 0;
		for (int i = 0;i < s1.size();i++) {
			if (s1[i] == '[') cnt2++;
			else if (s1[i] == ']') {
				if (cnt2) ans++, cnt2--;
			}
			else if (s1[i] == '(') cnt1++;
			else {
				if (cnt1) ans++, cnt1--;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
