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
/*------------------------------------------*/

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n+1);
		vector<int> ans(n+1),pre(n+1);
		vector<int> buf(n+3,INF);
		arr.resize(n + 1);
		ans.resize(n + 1);
		for (int i = 1;i <=n;i++) {
			cin >> arr[i];
			ans[arr[i]] = max(ans[arr[i]], i - pre[arr[i]]);
			pre[arr[i]] = i;
		}
		for (int i = 1;i <= n;i++) {
			ans[i] = max(ans[i], n + 1 - pre[i]);
			buf[ans[i]] = min(buf[ans[i]], i);
		}
		int pos = INF;
		for (int i = 1;i <= n;i++) {
			pos = min(pos, buf[i]);
			if (pos == INF) cout << -1<<" ";
			else cout << pos<<" " ;
		}
		cout << endl;
	}

	return 0;
}
