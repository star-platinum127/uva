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
ll gcd(ll a, ll b) {
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
const int N = 200005;
int arr[N];
struct node {
	int l, r,mx,mn;
};
struct segtree {
	node seg[N << 2];
	void build(int k,int l,int r) {
		seg[k].l = l, seg[k].r = r;
		if (l == r) {
			cin >> seg[k].mx;
			seg[k].mn = seg[k].mx;
			return;
		}
		int mid = l + r >>1;
		build(k << 1, l, mid);
		build(k << 1 | 1, mid + 1, r);
		seg[k].mx = max(seg[k << 1].mx, seg[k << 1 | 1].mx);
		seg[k].mn = min(seg[k << 1].mn, seg[k << 1 | 1].mn);
	}
	int qmx(int k, int l, int r) {
		if (seg[k].l>r || seg[k].r<l) return -INF;
		if (seg[k].l >= l && seg[k].r <= r) return seg[k].mx;
		return max(qmx(k << 1, l, r), qmx(k << 1 | 1, l, r));
	}
	int qmn(int k, int l, int r) {
		if (seg[k].l>r || seg[k].r<l) return INF;
		if (seg[k].l >= l && seg[k].r <= r) return seg[k].mn;
		return min(qmn(k << 1, l, r), qmn(k << 1 | 1, l, r));
	}
}sgt;
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		sgt.build(1, 1, n);
		bool flag = 1;
		for (int i = 1;i < n - 1;i++) {
			if (!flag) break;
			int l = i + 1, r = n - 1;
			int mx1 = sgt.qmx(1, 1, i);
			while (r >=l) {
				int y = l + r >> 1;
				int mn1 = sgt.qmn(1, i + 1, y);
				int mx2 = sgt.qmx(1, y + 1, n);
				if (mx1 > mn1 || mx1 > mx2) r = y - 1;
				else if (mx1<mx2 || mn1>mx1) l = y + 1;
				else {
					cout << "YES\n";
					cout << i << " " << y - i << " " << n - y<<"\n";
					flag = 0;
					break;
				}
			}
		}
		if (flag) cout << "NO\n";
	}
	return 0;
}
