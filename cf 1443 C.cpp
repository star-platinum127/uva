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
const int N = 200005;
struct P {
	ll a, b;
};
bool cmp(P x, P y) {
	return x.a < y.a;
}
P arr[N];
ll sum1[N];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1;i <=n;i++) cin >> arr[i].a;
		for (int i = 1;i <=n;i++) cin >> arr[i].b;
		sort(arr+1, arr + n+1, cmp);
		sum1[0] = 0;
		for (int i = 1;i <= n;i++) {
			sum1[i] = arr[i].b + sum1[i - 1];
		}
		ll ans = sum1[n];
		for (int i = 1;i <= n;i++) {
			ans = min(ans, max(arr[i].a, sum1[n] - sum1[i]));
		}
		cout << ans << "\n";
	}
	return 0;
}
