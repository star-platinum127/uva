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
vector<int> v[2005],rt;
int maxi;
void dfs(int pos,int deep) {
	maxi = max(deep,maxi);
	for (int e : v[pos]) {
		dfs(e, deep + 1);
	}
	return;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	maxi = 0;
	for (int i = 0;i <= n;i++) v[i].clear();
	for (int i = 1;i <= n;i++) {
		int tmp;
		cin >> tmp;
		if (tmp != -1) v[tmp].pb(i);
		else rt.pb(i);
	}
	for (int e : rt) {
		dfs(e,1);
	}
	cout << maxi << endl;
	return 0;
}
