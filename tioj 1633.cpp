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
const int MOD = 1000000007;
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
const int N = 130025;
int n, q;
struct BST {
	struct node {
		int pri, sz, rev;
		int l, r;
	}s[N];
	void flip(int x) {
		s[x].rev = !s[x].rev;
		swap(s[x].l, s[x].r);
	}
	void pull(int x) {
		s[x].sz = s[s[x].l].sz + 1 + s[s[x].r].sz;
	}
	void push(int x) {
		if (!s[x].rev) return;
		flip(s[x].l), flip(s[x].r);
		s[x].rev = 0;
	}
	void split(int r,int &a,int &b,int k) {
		if (!r) return a = b = 0,void();
		push(r);
		int si = s[s[r].l].sz + 1;
		if (si > k) {
			b = r, split(s[r].l, a, s[b].l, k),pull(b);
		}
		else {
			a = r, split(s[r].r, s[a].r, b, k - si),pull(a);
		}
	}
	int join(int a,int b) {
		if (!a | !b) return a ? a : b;
		push(a), push(b);
		if (s[a].pri < s[b].pri) {
			return s[a].r = join(s[a].r, b), pull(a), a;
		}
		else return s[b].l = join(a,s[b].l), pull(b), b;
	}
	void dfs(int p) {
		if (!p) return;
		push(p);
		dfs(s[p].l);
		cout << p << " ";
		dfs(s[p].r);
	}
}trp;
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n >> q;
	int rt = 0;
	for (int i = 1;i <= n;i++) trp.s[i] = { rand(),1,0,0,0 },rt=trp.join(rt,i);
	while (q--) {
		string s1;
		cin >> s1;
		if (s1 == "REV") {
			int a, b, c, l, r;
			cin >> l >> r;
			trp.split(rt, b,c,r);
			trp.split(b, a, b, l - 1);
			trp.flip(b);
			rt = trp.join(a, trp.join(b, c));
		}
		else {
			int a, b, c, d,e;
			int l1, r1, l2, r2;
			cin >> l1 >> r1 >> l2 >> r2;
			trp.split(rt, d, e, r2);
			trp.split(d, c, d, l2 - 1);
			trp.split(c, b, c, r1);
			trp.split(b, a, b, l1 - 1);
			rt = trp.join(a, trp.join(d, trp.join(c, trp.join(b, e))));
		}
	}
	trp.dfs(rt);
	cout << "\n";
	return 0;
}
