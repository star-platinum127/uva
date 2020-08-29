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
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int r, b, g, w;
		cin >> r >> b >> g >> w;
		int cnt = (r % 2 == 1) + (g % 2 == 1) + (b % 2 == 1) + (w % 2 == 1);
		if ((r == 0 || b == 0 || g == 0) && cnt > 1) cout << "NO" << endl;
		else if (cnt == 2) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
