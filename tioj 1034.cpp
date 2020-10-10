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
int n;
int hashp(int x,int y) {
	return x * n + y;
}
int ans[405][405];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<int> arr(n*n+1);
	for (int i = 0;i < n * n;i++) {
		for (int j = 0;j < n * n;j++) {
			if (i == j) ans[i][j] == 0;
			else ans[i][j] = INF;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> arr[hashp(i, j)];
			if (i != 0) {
				ans[hashp(i - 1, j)][hashp(i, j)] = arr[hashp(i,j)];
				ans[hashp(i, j)][hashp(i - 1, j)] = arr[hashp(i - 1, j)];
			}
			if (j != 0) {
				ans[hashp(i, j - 1)][hashp(i, j)] = arr[hashp(i, j)];
				ans[hashp(i, j)][hashp(i, j - 1)] = arr[hashp(i, j - 1)];
			}
		}
	}
	for (int k = 0;k < n*n;k++) {
			for (int i = 0;i < n*n;i++) {
				for (int j = 0;j < n*n;j++) {
					ans[i][j] = min(ans[i][j], ans[i][k] + ans[k][j]);
				}
			}
		}
	int q;
	cin >> q;
	while (q--) {
		int x1, y1, x2, y2;
		int mini = INF;
		cin >> x1 >> y1 >> x2 >> y2;
		x1--, y1--, x2--, y2--;
		int xd = hashp(x1, y1);
		int yd = hashp(x2, y2);
		for (int i = 0;i < n * n;i++) {
			mini = min(mini, ans[xd][i] + arr[xd] + ans[i][yd] - arr[i]);
		}
		cout << mini << "\n";
	}
	return 0;
}
