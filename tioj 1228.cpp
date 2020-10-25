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
int n,m,cnt;
pii mp[N];
vector<pii> tree[N];
int bit[N],dmp[N],arr[N];
void fold(int pos) {
	mp[pos].F = cnt;
	for (auto e : tree[pos]) {
		dmp[e.F] = cnt;
		arr[cnt++] = e.second;
		fold(e.F);
	}
	mp[pos].S = cnt;
}
void motify(int x,int y) {
	for (;x<=n;x += lowbit(x)) {
		bit[x] += y;
	}
}
void build() {
	for (int i = 0;i < n;i++) {
		motify(i + 1, arr[i]);
	}
}
int query(int x) {
	int tmp=0;
	for (;x;x -= lowbit(x)) {
		tmp += bit[x];
	}
	return tmp;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0;i < n-1;i++) {
		int x, y, u;
		cin >> x >> y >> u;
		tree[x].pb({ y,u });
	}
	cnt = 0;
	fold(0);
	build();
	for (int i = 0;i < m;i++) {
		int type;
		cin >> type;
		if (type) {
			int pos;
			cin >> pos;
			int ans = query(mp[pos].second) - query(mp[pos].first);
			cout << ans*2 << "\n";
		}
		else {
			int x, y;
			cin >> x >> y;
			motify(dmp[x] + 1, y - arr[dmp[x]]);
			arr[dmp[x]] = y;
		}
	}
	return 0;
}
