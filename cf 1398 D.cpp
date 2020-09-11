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
int dp[205][205][205];
int a1[205];
int b1[205], c1[205];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	mem(dp, 0);
	for (int i = 1;i <=a;i++) cin >> a1[i];
	for (int i = 1;i <=b;i++) cin >> b1[i];
	for (int i = 1;i <=c;i++) cin >> c1[i];
	sort(a1+1, a1 + a+1);
	sort(b1+1, b1 + b+1);
	sort(c1+1, c1 + c+1);
	for (int i = 0;i <=a;i++) {
		for (int j = 0;j <=b;j++) {
			for (int k = 0;k <=c;k++) {
				if (i && j) dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k] + a1[i]*b1[j]);
				if (j && k) dp[i][j][k] = max(dp[i][j][k], dp[i][j - 1][k - 1] + b1[j] * c1[k]);
				if (i && k) dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k - 1] + a1[i] * c1[k]);
			}
		}
	}
	cout << dp[a][b][c]<<endl;
	return 0;
}
