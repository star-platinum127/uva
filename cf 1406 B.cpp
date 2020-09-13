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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		ll maxi = -1e35;
		sort(arr, arr + n);
		maxi = max(maxi, arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5]);
		maxi = max(maxi, arr[0] * arr[1] * arr[n - 1] * arr[n - 2] * arr[n - 3]);
		maxi = max(maxi, arr[0] * arr[1] * arr[2] * arr[3] * arr[n - 1] );
		cout << maxi << endl;
	}
	return 0;
}
