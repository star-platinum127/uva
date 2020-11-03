#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
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
struct P {
	int l, h, t;
};
bool cmp(P a, P b) {
	return b.l > a.l;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n && n) {
		
		multiset<int,greater<int> > mst{ 0 };
		vector<P>v;
		vector<pii> ans;
		for (int i = 0;i < n;i++) {
			int l, r, h;
			cin >> l >> h>>r;
			v.push_back({ l, h, 1 });
			v.push_back({ r,h,2 });
		}
		sort(v.begin(), v.end(),cmp);
		int len = v.size();
		int nw=0;
		for (int i = 0;i < len;) {
			int pos = i;
			while (pos < len && v[pos].l == v[i].l) {
				if (v[pos].t == 1) mst.insert(v[pos].h);
				else mst.erase(mst.find(v[pos].h));
				pos++;
			}
			if (*mst.begin() != nw) {
				nw = *mst.begin();
				cout << v[i].l << " " << nw<<" ";
			}
			i = pos;
		}
		cout << "\n";
	}
	return 0;
}
