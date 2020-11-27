#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define mikumywaifu ios_base::sync_with_stdio(0)
#define misakamywaifu cin.tie(0)
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int MOD = 1000000007;
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
const int N = 200005;
ll arr[N], pre[N];
signed main() {
	mikumywaifu;
	misakamywaifu;
	int n;
	cin >> n;
	pre[0] = 0;
	for (int i = 1;i <=n;i++) {
		cin >> arr[i];
		pre[i] = pre[i - 1] + arr[i];
	}
	set<pll> s;
	for (int i = 1;i <= n;i++) {
		for (int j = i + 2;j <= n&&pre[j-1]-pre[i]<=2*arr[i];j++) {
			if ((arr[i] ^ arr[j]) == pre[j - 1] - pre[i]) s.insert({ i,j });
		}
	}
	for (int i = n;i;i--) {
		for (int j = i - 2;j>=1&&pre[i - 1] - pre[j] <= 2*arr[i];j--) {
			if ((arr[i] ^ arr[j]) == pre[i - 1] - pre[j]) s.insert({ j,i });
		}
	}
	cout << s.size() << "\n";
	return 0;
}
