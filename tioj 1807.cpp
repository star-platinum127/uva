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
map<pii, int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> m >> n;
	mp.clear();
	for (int i = 0;i < n;i++) {
		int x, y;
		cin >> x >> y;
		if (x == y) {
			cout << "Yes" << "\n";
			return 0;
		}
		if (x > y) swap(x, y);
		if (mp[{x, y}]) {
			cout << "Yes" << "\n";
			return 0;
		}
		mp[{x, y}]++;
	}
	cout << "yes" << "\n";
	return 0;
}
