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
 
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s1;
		cin >> n;
		cin >> s1;
		ll cnt = 1, tmp = 0;
		vector<ll>arr;
		arr.clear();
		s1[n] = -1;
		for (int i = 1;i < n + 1;i++) {
			if (s1[i] == s1[i - 1]) {
				cnt++;
			}
			else {
				arr.push_back(cnt);
				cnt = 1;
				tmp++;
			}
		}
		if (tmp == 1) {
			cout << 1 << "\n";
			continue;
		}
		ll l = 0, r=0;
		ll ans = 0;
		while (l <= r && l <tmp) {
			if (arr[l] >= 2) {
				ans ++;
				l++;
				while (r < l) r++;
				continue;
			}
			else {
				while (r<tmp) {
					if (arr[r] == 1) r++;
					else break;
				}
				if (r <tmp && arr[r] >=1) {
					arr[r] --;
					l++;
				}
				else l += 2;
				ans++;
			}
			while (r < l) r++;
		}
		cout << ans << "\n";
	}
	return 0;
}
