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
int n;
int bit[1035][1035] = { 0 };
void modify(int x, int y,int z) {
	for (int i = x;i <=n;i += lowbit(i)) {
		for (int j = y;j <=n;j += lowbit(j)) {
			bit[i][j] += z;
		}
	}
}
int query(int x,int y) {
	int tmp = 0;
	for (int i = x;i;i -= lowbit(i)) {
		for (int j = y;j;j -= lowbit(j)) {
			tmp += bit[i][j];
		}
	}
	return tmp;
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n;
	int type;
	while (cin >> type) {
		if (type == 1) {
			int x, y, z;
			cin >> x >> y >> z;
			x++, y++;
			modify(x, y, z);
		}
		else {
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			x1++, y1++, x2++, y2++;
			int ans = query(x2, y2);
			ans += query(x1 - 1, y1 - 1);
			ans -= query(x1 - 1, y2);
			ans -= query(x2, y1 - 1);
			cout << ans << "\n";
		}
	}

	return 0;
}
