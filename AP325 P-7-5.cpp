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
int arr[1000005];
int dp[1000005];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,p,l,r;
	cin >> n>>p>>l>>r;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		if (arr[i] >= n || arr[i] < 0) arr[i] = n;
	}
	queue<int>q;
	q.push(0);
	mem(dp, -1);
	dp[0] = 0;
	while (!q.empty()) {
		auto pos = q.front();
		q.pop();
		int nw = pos - l;
		if (nw >= 0  && arr[nw] != n&& dp[arr[nw]] == -1) {
			dp[arr[nw]] = dp[pos] + 1;
			q.push(arr[nw]);
		}
		nw = pos + r;
		if (nw < n  && arr[nw] != n&& dp[arr[nw]] == -1 ) {
			dp[arr[nw]] = dp[pos] + 1;
			q.push(arr[nw]);
		}
	}
	cout << dp[p] << "\n";
	return 0;
}
