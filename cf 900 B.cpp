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
ll arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll a, b, n;
	cin >> a >> b >> n;
	bool flag = 0;
	ll ans;
	a *= 10;
	for (int i = 0;i < 1000;i++) {
		ll cnt = (a /b)%10;
		if (cnt == n) {
			flag = 1;
			ans = i+1;
			break;
		}
		a %= b;
		a *= 10;
		
	}
	if (flag) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}
