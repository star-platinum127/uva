#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
int dfs(vector<int> v,int d) {
	if (v.size() <= 2) return v.size();
	vector<int> v1, v2;
	for (auto e : v) {
		if (e & (1 << d)) v1.push_back(e);
		else v2.push_back(e);
	}
	int a = dfs(v1, d - 1);
	int b = dfs(v2, d - 1);
	int tmp = max(a, b);
	if (min(a, b)) tmp++;
	return tmp;
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0;i < n;i++) {
		int t;
		cin >> t;
		arr.push_back(t);
	}
	int ans = dfs(arr, 30);
	cout << n - ans << "\n";
	return 0;
}

