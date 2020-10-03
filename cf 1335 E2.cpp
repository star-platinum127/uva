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
int cnt[200005][205];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n + 1);
		vector<int> pos[205];
		for (int i = 0;i <= n;i++) {
			for (int j = 0;j <= 200;j++) cnt[i][j] = 0;
		}
		for (int i = 1;i <= n;i++) {
			cin >> arr[i];
			memcpy(cnt[i], cnt[i - 1], sizeof(cnt[i - 1]));
			cnt[i][arr[i]]++;
			pos[arr[i]].pb(i);
		}
		int ans = 0;
		for (int i = 1;i <=200;i++) {
			int sz = pos[i].size();
			ans = max(ans, sz);
			for (int j = 0;j < sz / 2; j++) {
				int l = pos[i][j], r = pos[i][sz - j - 1] - 1;
				for (int k = 1;k <= 200;k++) {
					int mid = cnt[r][k] - cnt[l][k];
					ans = max(ans, (j+1)*2+mid);
				}
			}
			
		}
		cout << ans << endl;
	}
	return 0;
}
