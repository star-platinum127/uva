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
int arr[1000005];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n>>k;
		ll ans = 0;
		for (int i = 0;i < n * k;i++) {
			cin >> arr[i];
		}
		if (n>2) {
			int s;
			if (n % 2 == 0) s = n / 2+1;
			else s = (n + 1) / 2;
			int i = n * k - s;
			for (int cnt=1;i >= 0&&cnt<=k;i -=s,cnt++) {
				ans += arr[i];
			}
		}
		else {
			for (int i =0,cnt=1;i < n * k && cnt<=k;i += n,cnt++) {
				ans += arr[i];
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
