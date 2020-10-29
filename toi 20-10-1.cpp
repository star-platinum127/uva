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
	int s, e, a;
	cin >> s >> e >> a;
	for (int i = 1;i;i++) {
		if (!a) {
			cout << "unsalable" << "\n";
			break;
		}
		int pos = i % 10;
		if (s >= e) {
			cout << i << "\n";
			break;
		}
		if (pos == 9 || pos == 0) continue;
		if (pos == 1 && i > 10) {
			a--;
			continue;
		}
		if (i % 3 == 0) s += (s / 3);
		else s += (s / 10);
	}
	return 0;
}
