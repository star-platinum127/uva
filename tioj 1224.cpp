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
const int N = 1000005;
struct seg {
	int pos,d,u,t;
};
bool cmp(seg x, seg y) {
	return x.pos < y.pos;
}
int laz[N << 1], st[N << 1];
vector<seg> v;
void pu(int x,int l,int r) {
	if (laz[x]) st[x] = r - l + 1;
	else if (r != l) st[x] = st[x << 1] + st[x << 1 | 1];
	else st[x] = 0;
}
void update(int x,int l,int r,int nl,int nr,int d) {
	if (l >= nl && nr >= r) {
		laz[x] += d;
		pu(x, l,r);
		return;
	}
	int mid = (l + r) >>1;
	if (nl <= mid) update(x << 1, l, mid, nl, nr, d);
	if (nr > mid) update(x << 1 | 1, mid + 1, r, nl, nr, d);
	pu(x, l, r);
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	v.clear();
	for (int i = 0;i < n;i++) {
		int l, r, d, u;
		cin >> l >> r >> d >> u;
		v.push_back({l, d + 1, u, 1});
		
		v.push_back({r,d + 1,u,-1});
	}
	/*for (int i = 0;i < v.size();i++) {
		seg e = v[i];
		cout << e.pos << " " << e.d << " " << e.u << endl;
	}*/
	sort(v.begin(), v.end(),cmp);
	int pre = 0;
	ll ans = 0;
	for (auto e : v) {
		if (e.pos != pre) {
			ans += 1LL * (e.pos - pre) * st[1];
			pre = e.pos;
		}
		update(1, 1, 1000000, e.d, e.u, e.t);
	}
	cout << ans << "\n";
	return 0;
}
