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
const int N = 1000005;
int st[N],ed[N];
int cnt,n;
vector<int> edge[N];
void dfs(int p,int fa) {
	st[p] = cnt++;
	for (auto e : edge[p]) {
		if(e!=fa) dfs(e, p);
	}
	ed[p] = cnt++;
}
struct Fenwicktree {
	int bit[N*2];
	void modify(int p, int x) {
		for (;p <=cnt;p += lowbit(p)) {
			bit[p] += x;
		}
	}
	int query(int p) {
		int tmp=0;
		for (;p;p -= lowbit(p)) {
			tmp += bit[p];
		}
		return tmp;
	}
	int query2(int l,int r) {
		return query(r - 1) - query(l - 1);
	}
}BIT[3];
signed main() {
	mikumywaifu;
	misakamywaifu;
	cin >> n;
	for (int i = 0;i <= n;i++) edge[i].clear();
	cnt = 1;
	for (int i = 0;i < n - 1;i++) {
		int x, y;
		cin >> x >> y;
		edge[x].push_back(y);
		edge[y].push_back(x);
	}
	dfs(1, 1);
	int m;
	cin >> m;
	while (m--) {
		string s1;
		cin >> s1;
		if (s1 == "Grow") {
			int w, k, c;
			cin >> w >> k >> c;
			if (((k == 0 || k == 1) && w == 1) || (k == 2 && ed[w] - st[w] == 1)) {
				cout << "Error" << "\n";
			}
			else BIT[k].modify(st[w], c);
		}
		else if (s1 == "Drop") {
			int w, c, k;
			cin >> w >>k>>c;
			if (BIT[k].query2(st[w],st[w]+1)<c) cout << "Error" << "\n";
			else BIT[k].modify(st[w], -c);
		}
		else if(s1=="Query") {
			int w;
			cin >> w;
			for (int i = 0;i < 3;i++) cout << BIT[i].query2(st[w], ed[w]) << " ";
			cout << "\n";
		}
	}
	return 0;
}
