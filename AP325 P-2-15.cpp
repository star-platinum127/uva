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
int arr[200005];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = 0;i < 2 * n;i++) {
		arr[n + i] = arr[i];
	}
	for (int i = 1;i < 2 * n;i++) {
		arr[i] += arr[i - 1];
	}
	int pos = 0;
	for (int i = 0;i < m;i++) {
		int q;
		cin >> q;
		if (pos != 0) q+= arr[pos - 1];
		pos = lower_bound(arr + pos, arr + 2 * n, q) - arr;
		pos = (pos + 1) % n;
	}
	cout << pos << endl;
	return 0;
}
