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
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
char s1[400005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		for (int i = 0;i < n;i++) cin >> s1[i];
		for (int i = 0;i < n;i++) s1[n + i] = s1[i];
		int pos = -1;
		for (int i = 0;i < n;i++) {
			if (s1[i] != s1[0]) {
				pos = i;
				break;
			}
		}
		ll ans = 0;
		if (pos == -1) {
			if (n == 3) ans = 1;
			else if (n <= 2) ans = 0;
			else ans = n / 3 + (n % 3 > 0);
			cout << ans << endl;
			continue;
		}
		int cnt = 0,tmp=pos;
		for (int i = pos;i < n + pos;i++) {
			if (s1[i] == s1[tmp]) cnt++;
			else {
				ans += cnt / 3;
				tmp = i;
				cnt = 1;
			}
		}
		ans += cnt / 3;
		cout << ans << endl;
	}
	return 0;
}
