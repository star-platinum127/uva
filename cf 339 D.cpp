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
int n, m;
const int MAX_N = 220025;
ll arr[MAX_N];
ll seg[MAXN<<2];
void build() {
	bool flag = 0;
	int cnt = 0;
	int todo = (2<<n) >> 1;
	for (int i = 0;i < 2 << n;i++) seg[i +(2<<n)] = arr[i];
	for (int i = (2 << n)- 1;i > 0;i--) {
		cnt++;
		if (!flag) seg[i] = seg[i << 1] | seg[i<<1|1];
		else seg[i] = seg[i << 1] ^ seg[i << 1 | 1];
		if (cnt == todo) flag ^= 1, cnt = 0,todo>>1;
	}
	//for (int i = 0;i < 2 << n;i++) cout << seg[i + 2 << n];
	
}
void modify(int p, int x) {
	bool flag = 0;
	p--;
	for (seg[p +=(2<<n)] = x;p > 1;p >>= 1) {
		if (!flag) seg[p >> 1] = seg[p] | seg[p ^ 1];
		else seg[p >> 1] = seg[p] ^ seg[p ^ 1];
		flag ^= 1;
	}
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	n--;
	for (int i = 0;i < 2 << n;i++) cin >> arr[i];
	build();
	//for (int i = 0;i < 2 << (n+1);i++) cout << seg[i]<<" ";
	while (m--) {
		int x, y;
		cin >> x >> y;
		modify(x, y);
		cout << seg[1] << "\n";
	}
	return 0;
}
