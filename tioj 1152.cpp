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
const ll MOD = 1000000007;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const int LINF = 4611686018427387903;
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
int n, root, maxi;
vector<int> arr[10010];
vector<int> dep;
void dfs(int pos,int fa,int deep) {
	dep[pos] = deep;
	for (auto e : arr[pos]) {
		if (e == fa) continue;
		dfs(e, pos,deep+1);
	}
	if (dep[pos] > maxi) root = pos,maxi=dep[pos];
}

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0;i <= n;i++) arr[i].clear();
	for (int i = 0;i < n;i++) {
		int a;
		while (cin >> a && a != -1) {
			arr[a].pb(i);
			arr[i].pb(a);
		}
	}
	dep.resize(n + 1);
	maxi = -1e9;
	root = 0;
	dfs(0,-1,0);
	dfs(root, -1, 0);
	cout << maxi << endl;
	return 0;
}
