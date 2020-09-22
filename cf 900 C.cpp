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
int dp[MAX];
int arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int maxi =-INF, maxi1 =-INF;
	mem(dp, 0);
	for (int i = 0;i < n;i++) {
		int tmp;
		cin >> tmp;
		if (tmp> maxi)maxi1 = maxi, maxi = tmp,  dp[maxi] = 1;
		else if (tmp> maxi1) dp[maxi]--, maxi1 =tmp;
	}
	int ans = 1;
	for (int i = 1;i <=n;i++) {
		if (dp[i] < dp[ans]) ans = i;
	}
	cout << ans << endl;
	return 0;
}
