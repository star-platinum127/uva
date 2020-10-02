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
		map<int, int> mp;
		
		int x = 0, y = 0;
		for (int i = 0;i < n;i++) {
			int tmp;
			cin >> tmp;
			if (!mp[tmp]) x++,mp[tmp]++;
			else {
				mp[tmp]++;
				y = max(y, mp[tmp]);
			}
		}
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}
		if (y == 0) {
			cout << 1 << endl;
			continue;
		}
		cout << max(min(y-1, x),min(y,x-1))<<endl;
	}

	return 0;
}
