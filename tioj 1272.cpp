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
const int N = 100005;
int n, m;
vector<int> edge[N];
int st[N], ed[N];
int cnt;
void dfs(int p, int fa) {
	st[p] = cnt++;
	for (auto e : edge[p]) {
		if (e != fa) dfs(e, p);
	}
	ed[p] = cnt++;
}
struct Fenwicktree {
	int bit[N << 1],len;
	void init(int s) {
		mem(bit, 0);
		len = s;
	}
	void modify(int p, int x) {
		for (;p;p -= lowbit(p)) bit[p] += x;
	}
	int query(int p) {
		int tmp = 0;
		for (;p<len;p += lowbit(p)) {
			tmp += bit[p];
		}
		return tmp;
	}
}BIT;
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n >> m;
	cnt = 1;
	for (int i = 1;i <=n;i++) {
		int k;
		cin >> k;
		for (int j = 0;j < k;j++) {
			int x;
			cin >> x;
			edge[i].push_back(x);
			edge[x].push_back(i);
		}
	}
	dfs(1, 1);
	BIT.init(cnt);
	while (m--) {
		int type;
		cin >> type;
		if (!type) {
			int a;
			cin >> a;
			BIT.modify(st[a] - 1, -1);
			BIT.modify(ed[a]-1, 1);
		}
		else {
			int a;
			cin >> a;
			cout << (BIT.query(st[a])&1)<<"\n";
		}
	}
	return 0;
}
