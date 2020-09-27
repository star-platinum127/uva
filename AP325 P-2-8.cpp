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
const int MAX = 100005;
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
int arr[105];
int mod;
int fpow(int a,int b) {
	ll cnt = 1;
	while (b) {
		if (b & 1) cnt= (cnt * a) % mod;
		b >>=1;
		a =a*a % mod;
	}
	return cnt;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n>>m;
	for (int i = 0;i < n;i++) cin >> arr[i];
	 mod = m;
	for (int i = 0;i < n;i++) {
		cout << fpow(arr[i], m - 2)<<" ";
	}
	cout << endl;
	return 0;
}
