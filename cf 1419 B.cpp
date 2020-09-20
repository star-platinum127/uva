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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll ans = 0;
		for (int i = 1;;i++) {
			ll tmp = ((ll)1 << i) - 1;
			ll cnt = (tmp +1) * tmp / 2;
			if (cnt <=n) {
				n -= cnt;
				ans++;
			}
			else break;
		}
		cout << ans << endl;
	}
	return 0;
}
