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
		int n,sum1=0;
		cin >> n;
		vector<int>arr(n+1);
		for (int i = 1;i <=n;i++) {
			cin >> arr[i];
			sum1 += arr[i];
		}
		if (sum1 % n) {
			cout << -1 << endl;
			continue;
		}
		cout << 3 * (n - 1) << endl;
		for (int i = 2;i <=n;i++) {
			int tmp = (i - (arr[i] % i)) % i;
			cout << 1 << " " << i << " " << (i - (arr[i] % i)) % i<<endl;
			cout << i<< " " << 1 << " " << (arr[i]+tmp) / i << endl;
			
		}
		for (int i = 2;i <=n;i++) {
			cout << 1 << " " << i << " " << sum1 / n << endl;
		}

	}

	return 0;
}
