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
		cin >> n;
		bool flag = 0;
		for (int i = 0;i * 3<=n;i++) {
			for (int j = 0;j* 5 <=n;j++) {
				if ((n - 3 * i - 5 * j) % 7 == 0) {
					cout << i << " " << j << " " << (n - 3 * i - 5 * j) / 7 << "\n";
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
		if (!flag) cout << -1 << endl;
	}
	return 0;
}
