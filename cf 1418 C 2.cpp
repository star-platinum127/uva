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
int arr[200005];
int dp[200005][2];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		mem(dp, INF);
		dp[0][0] = arr[0];
		dp[1][0] = arr[0] + arr[1];
		dp[1][1] = arr[0];
		for (int i = 2;i < n;i++) {
			dp[i][0] = min(dp[i][0], dp[i - 1][1] + arr[i]);
			dp[i][0] = min(dp[i][0], dp[i - 2][1] + arr[i] + arr[i -1]);
			dp[i][1] = min(dp[i][1], dp[i - 1][0]);
			dp[i][1] = min(dp[i][1], dp[i - 2][0]);
		}
		cout << min(dp[n-1][0], dp[n-1][1])<<endl;
	}
	return 0;
}
