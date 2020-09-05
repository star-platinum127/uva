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
ll mini(ll a, ll b, ll x, ll y, ll n) {
	int tmp = min(a-x,n);
	a -= tmp;
	n -= tmp;
	return a * max(b-n,y);
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll a, b, y, x, n;
		cin >> a >> b >> x >> y >> n;
		cout << min(mini(a, b, x, y, n), mini(b, a, y, x, n))<<endl;
	}
	return 0;
}
