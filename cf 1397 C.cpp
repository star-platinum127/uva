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
ll arr[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	ll n;
	cin >> n;
	for (int i = 1;i <=n;i++) cin >> arr[i];
	if (n == 1) {
		for (int i = 0;i < 3;i++) {
			cout << 1 << " " << 1 << endl;
			if (i % 2 == 0) cout << -arr[1] << " ";
			else cout << arr[1] << " ";
			cout << endl;
		}
	}
	else {
		cout << 1 << " " << n - 1 << endl;
		for (int i = 1;i < n;i++) {
			ll cnt = arr[i] % n;
			ll tmp = cnt * (n - 1);
			cout << tmp << " ";
			arr[i] += tmp;
		}
		cout << endl;
		cout << 2 << " " << n << endl;
		for (int i = 2;i <= n;i++) {
			ll cnt = arr[i] % n;
			ll tmp = cnt * (n - 1);
			cout << tmp << " ";
			arr[i] += tmp;
		}
		cout << endl;
		cout << 1 << " " << n << endl;
		for (int i = 1;i <= n;i++) {
			cout << -arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
