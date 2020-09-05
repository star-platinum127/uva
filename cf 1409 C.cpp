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
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n,x,y;
		cin >> n >> x>>y;
		ll ans = 1;
		ll maxi=1e9;
		for (int i = 1;i <n;i++) {
			ll cnt = (y - x) / i;
			if ((y - x) % i != 0) continue;
			ll todo = n-2-i+1;
			ll nw = x;
			while (todo>0) {
				nw -= cnt;
				if (nw <=0) {
					nw += cnt;
					break;
				}
				todo--;
			}
			if (y + todo * (cnt) < maxi) {
				ans = i;
			}
			maxi = min(maxi, y+ todo* (cnt));
		}
		for (int i = 0;i < n;i++) {
			cout << maxi - i * ((y - x) / ans) << " ";
		}
		cout << endl;
	}
	return 0;
}
