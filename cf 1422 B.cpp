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
#define MOD 1000000007
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
ll arr[105][105];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) cin >> arr[i][j];
		}
		vector<int> ans;
		ll cnt = 0;
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				ans.clear();
				ans.pb(arr[i][j]);
				ans.pb(arr[i][m - j - 1]);
				ans.pb(arr[n - i - 1][j]);
				sort(ans.begin(), ans.end());
				arr[i][j] = ans[1];
				arr[i][m - j - 1] = ans[1];
				arr[n - i - 1][j] = ans[1];
				cnt += ans[2] - ans[1] + ans[1] - ans[0];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
