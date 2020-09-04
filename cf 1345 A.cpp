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
bool flag[200005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (n == 1 || m == 1) cout << "YES" << endl;
		else if (n == 2 && m == 2)  cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
