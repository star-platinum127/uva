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
const ll MOD = 1000000007;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const int LINF = 4611686018427387903;
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
struct e {
	int x, y, u;
};
int n, m,k;
int f[100005];
int find(int a) {
	if (f[a] == a) return a;
	else {
		f[a]=find(f[a]);
		return f[a];
	}
}
bool cmp1(e a, e b) {
	return a.u < b.u;
}
bool cmp2(e a, e b) {
	return a. u > b.u;
}
vector<e>arr;
int mst() {
	for (int i = 0;i <= n;i++) f[i] = i;
	int cnt = 1, ans = 0;
	for (auto i : arr) {
		int xd = find(i.x), yd = find(i.y);
		if (xd == yd) continue;
		f[xd] = yd;
		ans += i.u;
		cnt++;
	}
	if (cnt == n) return ans;
	return -1;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	arr.clear();
	for (int i = 0;i < m;i++) {
		int x, y, c;
		cin >> x >> y >> c;
		arr.pb({ x, y, c });
	}
	sort(arr.begin(), arr.end(), cmp1);
	int mini = mst();
	sort(arr.begin(), arr.end(), cmp2);
	int maxi = mst();
	if (k <= maxi && k >= mini) cout << "TAK" << "\n";
	else cout << "NIE" << "\n";
	return 0;
}
