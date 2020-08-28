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
bool flag[100005];
vector<int> v[100005];
int dfs(int pos) {
	int cnt = 0;
	for (int e : v[pos]) {
		cnt += dfs(e);
	}
	if (!flag[pos]) {
		flag[arr[pos]] = 1;
		return cnt + 1;
	}
	return cnt;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) v[i].clear();
	for (int i = 1;i < n;i++) cin >> arr[i];
	for (int i = 1;i < n;i++) {
		v[arr[i]].pb(i);
	}
	mem(flag, 0);
	cout << dfs(0) << endl;
	return 0;
}
