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
vector<int> a, b;
int cal(int pos) {
	int it1 = lower_bound(b.begin(), b.end(), pos) - b.begin();
	int it2 = upper_bound(b.begin(), b.end(), pos) - b.begin();
	return it2 - it1;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n>>m>>k;
	a.resize(n + 1);
	b.resize(m + 1);
	for (int i = 0;i < n;i++) cin >> a[i];
	for (int i = 0;i < m;i++) cin >> b[i];
	sort(b.begin(),b.end());
	ll ans = 0;
	for (int i = 0;i < n;i++) {
		ans+=cal(k-a[i]);
	}
	cout << ans << endl;
	return 0;
}
