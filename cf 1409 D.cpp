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
ll cal(ll n) {
	ll re = 0;
	while (n) {
		re += n % 10;
		n /= 10;
	}
	return re;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n,m;
		cin >> n>>m;
		ll ans = 0;
		int i = 0;
		ll tmp = n;
		ll cnt = 1;
		while (cal(tmp)>m) {
			i =(10 - tmp % 10) % 10;
			ans += i * cnt;
			tmp /= 10;
			if(i) tmp++;
			cnt *= 10;
		}
		cout << ans << endl;
	}

	return 0;
}
