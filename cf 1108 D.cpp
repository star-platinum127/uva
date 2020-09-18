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
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int dp[200005][3];
char c[3] = { 'R','G','B' };
vector<char> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	v.clear();
	mem(dp, 200005);
	for (int i = 0;i < 3;i++) {
		dp[0][i] = 0;
		if (s1[0] == c[i]) continue;
		dp[0][i] = 1;
	}
	for (int i = 1;i < n;i++) {
		for (int j = 0;j < 3;j++) {
			for (int x = 0;x < 3;x++) {
				if (x == j) continue;
				if (s1[i] == c[j]) {
					dp[i][j] = min(dp[i][j], dp[i - 1][x]);
					continue;
				}
				dp[i][j] = min(dp[i][j], dp[i - 1][x]+1);
			}
		}
	}
	int ans = min(dp[n - 1][0], dp[n - 1][1]);
	ans = min(ans, dp[n - 1][2]);
	int pos;
	for (int i = 0;i < 3;i++) {
		if (dp[n - 1][i] == ans) {
			pos=i;
			break;
		}
	}
	cout << ans << endl;
	int pre = pos;
	for (int i = n-2;i >= 0;i--) {
		int mini = 1e9;
		v.pb(c[pos]);
		pre = pos;
		for (int j = 0;j < 3;j++) {
			if (pre == j) {
				continue;
			}
			mini = min(dp[i][j], mini);
		}
		for (int j = 0;j < 3;j++) {
			if (pre != j && mini == dp[i][j]) {
				pos = j;
			}
		}
	}
	v.pb(c[pos]);
	for (int i = n - 1;i >= 0;i--) {
		cout << v[i];
	}
	cout << endl;
	return 0;
}
