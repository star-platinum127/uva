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
int arr[105][105];
void out(int x1, int y1, int x2, int y2, int x3,int y3) {
	cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << "\n";
}
signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for (int i = 1;i <=n;i++) {
			string s1;
			cin >> s1;
			for (int j = 0;j < m;j++) {
				arr[i][j+1] = s1[j] - '0';
				if (arr[i][j+1] == 1) cnt++;
			}
		}
		cout << cnt * 3 << "\n";
		for (int i = 1;i <=n;i++) {
			for (int j = 1;j <=m;j++) {
				if (arr[i][j] == 1) {
					int dx = 1, dy = 1;
					if (i == n) dx = -1;
					if (j == m) dy = -1;
					out(i, j, i + dx, j, i, j + dy);
					out(i, j, i + dx, j + dy, i, j + dy);
					out(i, j, i + dx, j + dy, i+dx, j);
				}
			}
		}
	}
	return 0;
}
