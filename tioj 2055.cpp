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
int arr[N];
int seg[N << 1];
int n;
void build() {
	for (int i = 0;i < n;i++) seg[i + n] = arr[i]+1;
	for (int i = n - 1;i > 0;i--) seg[i] = min(seg[i<<1], seg[i << 1 | 1]);
}
int query(int l,int r) {
	int tmp = INF;
	for (l += n, r += n;r >l;r>>= 1, l >>= 1) {
		if (l & 1) tmp =min(seg[l++], tmp);
		if (r & 1) tmp = min(seg[--r], tmp);
	}
	return tmp;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++) cin >> arr[i];

	build();
	int m = n;
	while (m--) {
		int l, r;
		cin >> l >> r;
		l--;
		cout<<query(l, r)<<"\n";
	}
	return 0;
}
