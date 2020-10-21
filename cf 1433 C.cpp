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
int arr[300005];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int maxi = -INF;
		bool flag = 0;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			maxi = max(maxi, arr[i]);
			if (i != 0 && arr[i] != arr[i - 1]) flag = 1;
		}
		if (!flag) {
			cout << -1 << "\n";
			continue;
		}
		int ans=0;
		if (arr[0] == maxi && arr[1] != maxi) ans = 1;
		if (arr[n - 1] == maxi && arr[n - 2] != maxi) ans = n;
		for (int i = 1;i < n - 1;i++) {
			if (arr[i] == maxi && !(arr[i - 1] == arr[i] && arr[i] == arr[i+1])) ans = i+1;
		}
		cout << ans << "\n";
	}
	return 0;
}
