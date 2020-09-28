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
vector<int> arr;
map<int, int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		arr.resize(n + 1);
		mp.clear();
		for (int i = 0;i < n;i++) cin >> arr[i];
		for (int i = 0;i < n;i++) {
			if (m - arr[i] == arr[i]) {
				cout << mp[arr[i]] << " ";
				mp[arr[i]] ^= 1;
				continue;
			}
			if (mp[arr[i]] == 0) {
				cout << 1 << " ";
				mp[m - arr[i]] = 1;
			}
			else {
				cout << 0<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}
