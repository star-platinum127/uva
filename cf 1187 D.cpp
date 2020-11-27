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
const int N = 300005;
int n;
int arr[N],brr[N];
struct segtree {
	int s[N<<1];
	void build(int n) {
		for (int i = 0;i < n;i++) s[i + n] = arr[i];
		for (int i = n - 1;i;i--) s[i] = min(s[i << 1], s[i << 1 | 1]);
	}
	void modify(int p, int x) {
		for (s[p += n] = x;p > 1;p >>= 1) {
			s[p>>1] = min(s[p], s[p^1]);
		}
	}
	int query(int l,int r) {
		int tmp=INF;
		for (l += n, r += n;r > l;r >>= 1, l >>= 1) {
			if (l & 1) tmp =min(tmp,s[l++]);
			if (r & 1) tmp = min(tmp,s[--r]);
		}
		return tmp;
	}
}sgt;
vector<int> a[N], b[N];
map<int, int> mp;
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		map<int, int>mp2;
		mp.clear();
		for (int i = 0;i <= n;i++) {
			a[i].clear();
			b[i].clear();
		}
		for (int i = 0;i <n;i++) {	
			cin >> arr[i];
			arr[i]--;
			mp2[arr[i]]++;
			a[arr[i]].pb(i);
		}
		for (int i = 0;i < n;i++) {
			cin >> brr[i];
			brr[i]--;
			mp2[brr[i]]++;
			b[brr[i]].pb(i);
		}
		bool flag = 0;
		for (int i = 0;i < n;i++) {
			if (a[i].size() != b[i].size()) {
				flag = 1;
				break;
			}
			else {
				for (int j = 0;j < a[i].size();j++) {
					mp[b[i][j]] = a[i][j];
				}
			}
		}
		if (flag) {
			cout << "NO" << "\n";
			continue;
		}
		sgt.build(n);
		for (int i = 0;i < n;i++) {
			int t = mp[i];
			int mini = sgt.query(0, t+1);
			if (mini == brr[i]) {
				sgt.modify(t, INF);
			}
			else {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "NO"<< "\n";
		}
		else cout << "YES" << "\n";
	}
	return 0;
}
