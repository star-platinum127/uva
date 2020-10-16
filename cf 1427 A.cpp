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
int arr[105];
int sum1[105];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		sum1[0] = 0;
		for (int i = 1;i <=n;i++) {
			cin >> arr[i];
			sum1[i] = sum1[i - 1] + arr[i];
		}
		if (sum1[n] == 0) {
			cout << "NO" << "\n";
			continue;
		}
		cout << "YES" << "\n";
		sort(arr + 1, arr + 1 + n);
		if (sum1[n] > 0) {
			for (int i = n;i >= 1;i--) cout << arr[i] << " ";
		}
		else for (int i = 1;i <= n;i++) cout << arr[i] << " ";
		cout << "\n";
	}
	return 0;
}
