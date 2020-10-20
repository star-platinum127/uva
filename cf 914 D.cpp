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
const int N=500005;
int n;
int arr[N];
int seg[N << 1];
void build() {
	for (int i = 0;i < n;i++) seg[i + n] = arr[i];
	for (int i = n - 1;i >= 0;i--) seg[i] = gcd(seg[i << 1], seg[i << 1 | 1]);
}
void modify(int p,int x) {
	for (seg[p += n] = x,p>>=1;p;p >>= 1) {
		seg[p] = gcd(seg[p<<1], seg[p<<1|1]);
	}
}
int pull(int p, int x) {
	while (p<n) {
		int a=seg[p *2]%x, b = seg[p*2+1]%x;
		if (a && b) return 2;
		p=p* 2 + (!a);
	}
	return 1;
}
bool query(int l, int r, int x) {
	int cnt = 0;
	for (l += n, r += n;r > l;l >>= 1, r >>= 1) {
		if (l & 1) cnt += (seg[l] % x) ? pull(l, x) : 0, l ++;
		if (r & 1) r --, cnt += (seg[r] % x) ? pull(r, x) : 0;
		if (cnt > 1) return 0;
	}
	return 1;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++) cin >> arr[i];
	int m;
	cin >> m;
	build();
	while (m--) {
		int t;
		cin >> t;
		if (t==1) {
			int l, r, q;
			cin >> l >> r >> q;
			if (query(l-1, r, q)) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		else {
			int p, y;
			cin >> p >> y;
			modify(p-1, y);
		}
	}
	return 0;
}
