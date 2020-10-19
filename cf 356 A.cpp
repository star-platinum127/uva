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
int seg[1200005];
struct e {
	int a, b, c;
};
e arr[300005];
int n, m;
void pd(int rt) {
	if (seg[rt]) {
		seg[rt << 1] = seg[rt];
		seg[rt << 1 | 1] = seg[rt];
	}
	seg[rt] = 0;
}
void modify(int L,int R,int l,int r,int x,int rt) {
	if (l >= L && r <= R) {
		seg[rt] = x;
		return;
	}
	pd(rt);
	int m = (l + r) >> 1;
	if(L<=m) modify(L, R, l, m, x, rt<< 1);
	if(R>=m+1)modify(L, R, m + 1, r, x, rt << 1 | 1);
}
int query(int p, int l, int r, int rt) {
	if (l == r) return seg[rt];
	pd(rt);
	int m = (l + r) >> 1;
	if (p <= m) query(p, l, m, rt << 1);
	else query(p, m + 1, r, rt << 1 | 1);
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0;i <=n<<1;i++) seg[i] = 0;
 	for (int i = 0;i < m;i++) {
		int x, y, z;
		cin >> arr[i].a>> arr[i].b >> arr[i].c;
		
	}
	for (int i = m - 1;i >= 0;i--) {
		int x = arr[i].a, y = arr[i].b, z = arr[i].c;
		if (arr[i].a < arr[i].c) modify(x, z - 1, 1, n, z, 1);
		if(y>z) modify(z + 1, y,1,n,z,1);
	}
	for (int i = 0;i < n;i++) cout<<query(i+1,1,n,1)<<" ";
	cout << "\n";
	return 0;
}
