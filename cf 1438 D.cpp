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
void out(int n) {
	for (int i = 3;i <= n;i += 2) cout << i - 2 << " " << i - 1 << " " << i<<"\n";
	for (int i = n - 4;i>0;i -= 2) cout << i << " " << i + 1 << " " << i + 2<<"\n";
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	int n;
	cin >> n;
	ll sum1 = 0;
	for (int i = 0;i < n;i++) {
		int tmp;
		cin >> tmp;
		sum1 ^= tmp;
	}
	if (n & 1) {
		cout << "YES\n";
		cout << n - 2 << "\n";
		out(n);
	}
	else {
		if (!sum1) {
			cout << "YES\n";
			cout << n - 3 << "\n";
			out(n - 1);
		}
		else cout << "NO\n";
	}
	return 0;
}
