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
int arr[200005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		arr[n] = 0;
		for (int i = 0;i < n;i++) cin >> arr[i];
		int ans = 0;
		if (arr[0] == 1) ans++;
		int tmp = 0;
		for (int i = 1;i < n;i++) {
			if (arr[i] == 1) tmp++;
			else tmp = 0;
			if (tmp == 3) {
				tmp = 0;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
