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
ll arr[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int l = a-b, r = b + a;
		int l1 =c-d, r1 = d + c;
		if (r * n >= l1 && l * n <= r1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
