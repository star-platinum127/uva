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
ll arr[100005];
int n;
ll maxi;
void solve(int pos, int tmp) {
	if (pos && pos < n) {
		maxi -= max(0ll,arr[pos]);
	}
	arr[pos] += tmp;
	if (pos && pos < n) {
		maxi += max(0ll,arr[pos]);
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	maxi = 0;
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = n - 1;i >= 1;i--) {
		arr[i] -= arr[i - 1];
		maxi += max(0ll, arr[i]);
	}
	cout << (maxi + arr[0]) / 2 + max(0ll, (arr[0] + maxi) % 2)<<endl;
	int m;
	cin >> m;
	while (m--) {
		int a, b, c;
		cin >> a >>b >> c;
		solve(a - 1, c);
		solve(b, -c);
		cout << (maxi + arr[0]) / 2 + max((arr[0] + maxi) % 2, 0ll)<<endl;
	}
	return 0;
}
