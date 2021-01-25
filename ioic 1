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
const ll MOD = 1000000007;
const int INF = 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
void debuger() {
	cout << "DEBUG :";
}
/*-----------------------------------------------*/
ll n, q;
const int N = 500025;
ll arr[N];
struct segtree {
	ll seg[N << 2], tag[N << 2], s2[N << 2], t2[N << 2],add[N<<2],a2[N<<2];
	void push(ll p,ll l,ll r) {
		ll mid = l + r >> 1;
		if (add[p] != -1) {
			t2[p << 1] = t2[p << 1 | 1] = 0;
			s2[p << 1] = add[p] * (mid - l + 1);
			s2[p << 1 | 1] = add[p] * (r - mid);
			add[p << 1] = add[p << 1 | 1] = add[p];
			add[p] = -1;
		}
		if (t2[p]) {
			t2[p << 1] += t2[p];
			s2[p << 1] += t2[p]* (mid-l+1);
			t2[p << 1 | 1] += t2[p];
			s2[p << 1 | 1] += t2[p] * (r-mid);
		}
		t2[p] = 0;
	}
	void push2(ll p) {
		if (a2[p] != -1) {
			tag[p << 1] = tag[p << 1 | 1] = 0;
			seg[p << 1] = a2[p];;
			seg[p << 1 | 1]=a2[p];
			a2[p << 1] = a2[p << 1 | 1] = a2[p];
			a2[p] = -1;
		}
		if (tag[p]) {
			tag[p << 1] += tag[p];
			seg[p << 1] += tag[p] ;
			seg[p << 1 | 1] += tag[p];
			tag[p << 1 | 1] += tag[p];
		}
		tag[p] = 0;
	}
	void pull(ll p) {
		seg[p] = max(seg[p << 1], seg[p << 1 | 1]);
	}
	void p2(ll p) {
		s2[p] = s2[p << 1] + s2[p << 1 | 1];
	}
	void build(ll rt, ll l, ll r) {
		add[rt] = -1;
		a2[rt] = -1;
		if (l == r) {
			seg[rt] = arr[l];
			s2[rt] = arr[l];
			return;
		}
		ll mid = r + l >> 1;
		build(rt << 1, l, mid);
		build(rt << 1 | 1, mid + 1, r);
		pull(rt);
		p2(rt);
	}
	void modify1(ll rt, ll l, ll r, ll ql, ll qr,ll x) {
		if (ql <= l && qr >= r) {
			seg[rt] += x;
			tag[rt] += x;
			s2[rt] += x * (r - l + 1);
			t2[rt] += x;
			return;
		}
		push2(rt);
		push(rt,l,r);
		ll mid = l + r >> 1;
		if (qr > mid) modify1(rt << 1 | 1, mid + 1, r, ql, qr, x);
		if (ql <= mid) modify1(rt << 1, l, mid, ql, qr, x);
		pull(rt);
		p2(rt);
	}
	void modify2(ll rt, ll l, ll r, ll ql, ll qr, ll x) {
		if (ql<=l && qr>=r) {
			seg[rt] = x;
			s2[rt] = x *(r-l+1);
			tag[rt] = 0;
			t2[rt] = 0;
			add[rt] = x;
			a2[rt] = x;
			return;
		}
		push2(rt);
		push(rt, l,r);
		ll mid = l + r >> 1;
		if (qr > mid) modify2(rt << 1 | 1, mid + 1, r, ql, qr, x);
		if (ql <= mid) modify2(rt << 1, l, mid, ql, qr, x);
		pull(rt);
		p2(rt);
	}

	ll query1(ll rt, ll l, ll r, ll ql, ll qr) {
		//if (ql > r or qr < l) return 0;
		if (ql <= l && qr >= r) {
			return s2[rt];
		}
		push(rt,l,r);
		ll mid = l + r >> 1;
		ll tmp = 0;
		if (qr > mid) tmp += query1(rt << 1 | 1, mid + 1, r, ql, qr);
		if (ql <= mid) tmp += query1(rt << 1, l, mid, ql, qr);
		return tmp;
	}
	ll query2(ll rt, ll l, ll r, ll ql, ll qr) {
		//if (ql > r or qr < l) return 0;
		if (ql <= l && qr >= r) {
			return seg[rt];
		}
		push2(rt);
		ll mid = l + r >> 1;
		ll tmp = -LINF;
		if (qr > mid) tmp = max(tmp, query2(rt << 1 | 1, mid + 1, r, ql, qr));
		if (ql <= mid) tmp = max(tmp, query2(rt << 1, l, mid, ql, qr));
		return tmp;
	}
}sgt;
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n >> q;
	//sgt.build(1, 1, n);
	//for (int i = 0;i <= 4*n;i++) sgt.add[i] = -1, sgt.a2[i] = -1;
	for (int i = 1;i <= n;i++) cin >> arr[i];
	sgt.build(1, 1, n);
	int t;
	while (q--) {
		cin >> t;
		if (t == 1) {
			ll x, y, v;
			cin >> x >> y >> v;
			sgt.modify2(1, 1, n, x, y, v);
			//sgt.modify4(1, 1, N, x, y, v);
			//debuger();
			//for (int i = 1;i <= n;i++) cout << sgt.query1(1, 1, N,i,i)<<" ";
		}
		else if (t == 2) {
			ll x, y, v;
			cin >> x >> y >> v;
			sgt.modify1(1, 1, n, x, y, v);
			//sgt.modify3(1, 1, N, x, y, v);
			//debuger();
			//for (int i = 1;i <= n;i++) cout << sgt.query1(1, 1, N, i, i)<<" " ;
		}
		else if (t == 3) {
			ll x, y;
			cin >> x >> y;
			cout << sgt.query1(1, 1, n, x, y) << "\n";
		}
		else if (t == 4) {
			ll x, y;
			cin >> x >> y;
			cout << sgt.query2(1, 1, n, x, y) << "\n";
		}
	}
	return 0;
}
