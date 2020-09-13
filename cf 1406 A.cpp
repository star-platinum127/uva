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
int bct[105];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		mem(bct, 0);
		for (int i = 0;i < n;i++) {
			int tmp;
			cin >> tmp;
			bct[tmp]++;
		}
		bool flag = 0;
		int ans = 0;
		for (int i = 0;i <= 100;i++) {
			if (bct[i] == 0 && !flag) {
				ans += i*2;
				break;
			}
			else if (bct[i]==0 && flag) {
				ans += i;
				break;
			}
			else if (bct[i] == 1 && !flag) {
				ans += i;
				flag = 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
