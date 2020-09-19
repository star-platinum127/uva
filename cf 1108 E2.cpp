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
#define MOD 1000000007
const int MAX = 100005;
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
struct node {
	ll maxi;
	ll mini;

}s[MAX<<2],pres[MAX<<2];
ll arr[MAX];
ll add[MAX << 2], prea[MAX << 2];
int lc[MAX];
int rc[MAX];
void pu(int rt) {
	s[rt].maxi = max(s[rt << 1].maxi, s[rt << 1 | 1].maxi);
	s[rt].mini = min(s[rt << 1].mini, s[rt << 1 | 1].mini);
}
void build(int l, int r, int rt) {
	if (l == r) {
		s[rt].maxi = arr[l];
		s[rt].mini = arr[l];
		return;
	}
	int mid = (l + r) / 2;
	build(l, mid, rt << 1);
	build(mid + 1, r, rt << 1|1);
	pu(rt);
}
void pd(int rt) {
	if (add[rt]) {
		add[rt << 1] += add[rt], add[rt << 1 | 1] += add[rt];
		s[rt << 1].maxi += add[rt], s[rt << 1 | 1].maxi += add[rt];
		s[rt << 1].mini += add[rt], s[rt << 1 | 1].mini += add[rt];
		add[rt] = 0;
	}
}
void update(int L,int R,int c,int l,int r,int rt) {
	if (L <=l && R >= r) {
		s[rt].maxi += c;
		s[rt].mini += c;
		add[rt] += c;
		return;
	}
	int mid = (l + r) >> 1;
	pd(rt);
	if (L <= mid) update(L, R, c, l, mid, rt << 1);
	if (R > mid) update(L, R, c, mid + 1, r, rt << 1 | 1);
	pu(rt);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n>>m;
	ll pmax = -INF, pmin = INF;
	for (int i = 1;i <=n;i++) {
		cin >> arr[i];
		pmax = max(pmax, arr[i]);
		pmin = min(pmin, arr[i]);
	}
	vector<int> v,s1;
	for (int i = 1;i <=m;i++) {
		cin >> lc[i] >> rc[i];
		s1.pb(lc[i]);
		s1.pb(rc[i]);
	}
	sort(s1.begin(), s1.end());
	s1.erase(unique(s1.begin(), s1.end()), s1.end());
	int ans = pmax - pmin;
	build(1, n, 1);
	memcpy(pres, s, sizeof(s)), memcpy(prea, add, sizeof(add));
	vector<int> tp;
	int len = s1.size();
	for (int i = 0;i < len;i++) {
		tp.clear();
		memcpy(s, pres, sizeof(pres)), memcpy(add, prea, sizeof(prea));
		for (int j = 1;j <=m;j++) {	
			if (lc[j] <=s1[i] && rc[j] >= s1[i]) {
				update(lc[j], rc[j], -1, 1, n, 1);
				tp.pb(j);
			}
		}
		if (s[1].maxi - s[1].mini>ans) {
			ans = s[1].maxi - s[1].mini;
			v = tp;
		}
	}
	cout << ans << endl;
	len = v.size();
	cout << len << endl;
	for (int i = 0;i < len;i++) {
		cout << v[i]<<" ";
	}
	cout << endl;
	return 0;
}
