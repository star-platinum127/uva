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
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}

int dp[300005];
int arr[300005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<int> s1, s2;
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) dp[i] = 1e9;
	s1.push(1);
	s2.push(1);
	bool flag;
	for (int i = 1;i <= n;i++) cin >> arr[i];
	dp[1] = 0;
	for (int i = 2;i <= n;i++) {
		flag = 0;
		while (!s1.empty() && arr[s1.top()] >= arr[i]) {
			if (arr[i] == arr[s1.top()]) flag = 1;
			dp[i] = min(dp[s1.top()] + 1, dp[i]);
			s1.pop();
		}
		if (!flag && s1.size()) dp[i] = min(dp[s1.top()] + 1, dp[i]);
		flag = 0;
		while (!s2.empty() && arr[s2.top()] <= arr[i]) {
			if (arr[i] == arr[s2.top()]) flag = 1;
			dp[i] = min(dp[i], dp[s2.top()] + 1);
			s2.pop();
		}
		if (!flag && s2.size()) dp[i] = min(dp[s2.top()] + 1, dp[i]);
		s1.push(i);
		s2.push(i);
	}
	cout << dp[n] << endl;
	return 0;
}
