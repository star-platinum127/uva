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
typedef unsigned int ui;
ui arr[100005];
ui seg[200010];
ui seg2[200010];
ui n;
void build() {
	for (int i = 0;i < n;i++) seg[i + n] = arr[i],seg2[i+n]=arr[i];
	for (int i = n - 1;i >0;i--) seg[i] = max(seg[i << 1], seg[i << 1 | 1]);
	for (int i = n - 1;i >0;i--) seg2[i] = min(seg2[i << 1], seg2[i << 1 | 1]);
}
int query(int l,int r) {
	ui tmp = -1e9;
	for (l += n, r += n;r >l;r >>= 1, l >>= 1) {
		if (l & 1) tmp = max(tmp, seg[l++]);
		if (r & 1) tmp = max(tmp, seg[--r]);
	}
	return tmp;
}
int query2(int l, int r) {
	 ui tmp = 1e9;
	for (l += n, r += n;r >l;r >>= 1, l >>= 1) {
		if (l & 1) tmp = min(tmp, seg2[l++]);
		if (r & 1) tmp = min(tmp, seg2[--r]);
	}
	return tmp;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) cin >> arr[i];
	build();
	while (m--) {
		int x, y;
		cin >> x >> y;
		if (x > y) swap(x, y);
		x--;
		ui ans = query(x, y)-query2(x,y);
		cout << ans << "\n";
	}
	return 0;
}
