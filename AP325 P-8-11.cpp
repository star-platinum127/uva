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
#define MOD 1000000007
int arr[100005];
vector<int> v[100005];
int dp1[100005];
int dp2[100005];
void dfs(int pos) {
	dp1[pos] = arr[pos];
	dp2[pos] = 0;
	for (int e : v[pos]) {
		dfs(e);
		dp2[pos] += max(dp1[e], dp2[e]);
		dp1[pos] += dp2[e];
	}
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	cin >> arr[1];
	for (int i = 1;i <= n;i++) v[i].clear();
	for (int i = 2;i <=n;i++) {
		int tmp;
		cin >> tmp;
		v[tmp].pb(i);
		cin >> arr[i];
	}
	dfs(1);
	cout << max(dp1[1], dp2[1]) << endl;
	return 0;
}
