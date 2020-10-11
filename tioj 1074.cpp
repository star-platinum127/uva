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

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n&&n!=0) {
		vector<int> arr(n + 2);
		ll sum1=0;
		map<int, int> mp;
		for (int i = 1;i <=n;i++) {
			cin >> arr[i];
			sum1 += arr[i];
		}
		if (sum1 == n) {
			cout << "NO" << "\n";
			continue;
		}
		vector<int> ans(n + 1);
		ans[0] = 0;
		for (int i = 1;i <= n;i++) {
			ans[i] = ans[i - 1] + arr[i];
			mp[ans[i]] = 1;
			for (int j = 1;j <= n;j++) {
				mp[ans[i] - ans[j]] = 1;
			}
		}
		bool flag=1;
		for (int i = 1;i <= sum1;i++) if (!mp[i]) flag = 0;
		if (flag) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	return 0;
}
