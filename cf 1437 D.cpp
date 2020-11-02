#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000009;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
ll gcd(ll a, ll b) {
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
int arr[200005];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		int d = 1;
		int maxi = 0;
		map<int, int> mp;
		mp[0] = 1;
		for (int i = 1;i < n;i++) {
			if (arr[i]< arr[i - 1]) {
				mp[d - 1]--;
			}
			if (!mp[d - 1]) {
				d++;
			}
			mp[d]++;
			
		}
		cout << d << "\n";
	}
	return 0;
}
