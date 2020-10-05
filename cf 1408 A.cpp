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
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n + 1);
		vector<int> b(n + 1);
		vector<int> c(n + 1);
		for (int i = 0;i < n;i++) cin >> a[i];
		for (int i = 0;i < n;i++) cin >> b[i];
		for (int i = 0;i < n;i++) cin >> c[i];
		int pos = INF;
		int tmp;
		for (int i = 0;i < n-1;i++) {
			if (a[i] != pos) cout << a[i] << " ", pos = a[i];
			else if (b[i] != pos) cout << b[i] << " ", pos = b[i];
			else cout << c[i] << " ", pos = c[i];
			if (i == 0) tmp = pos;
		}
		if (a[n - 1] != pos && a[n - 1] != tmp) cout << a[n - 1] << endl;
		else if (b[n - 1] != pos && b[n - 1] != tmp) cout << b[n-1] << endl;
		else cout << c[n - 1] << endl;
	}
	return 0;
}
