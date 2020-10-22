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
const int N = 1e6 + 5;
int arr[N];
void motify(int x,int y) {
	for (;x < N;x += lowbit(x)) {
		arr[x] += y;
	}
}
int query(int x) {
	int cnt = 0;
	for (;x;x -= lowbit(x)) {
		cnt += arr[x];
	}
	return cnt;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		int tmp;
		cin >> tmp;
		motify(tmp,1);
	}
	while (m--) {
		int tmp;
		cin >> tmp;
		if (tmp > 0) motify(tmp, 1);
		else {
			tmp=abs(tmp);
			int l = 1, r = 1e6;
			while (l< r) {
				int mid = l + r>>1;
				if (query(mid) < tmp) l = mid + 1;
				else r = mid;
			}
			motify(r, -1);
		}
	}
	if (query(N-1)) {
		for (int i = 1;i <= n;i++) {
			if (arr[i]) {
				cout << i << "\n";
				break;
			}
		}
	}
	else cout << 0 << "\n";
	return 0;
}
