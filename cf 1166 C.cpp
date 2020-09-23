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
vector<int> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	v.clear();
	v.resize(n + 1);
	for (int i = 0;i < n;i++) {
		int tmp;
		cin >> tmp;
		v[i] = abs(tmp);
	}
	ll ans = 0;
	sort(v.begin(), v.end(),greater<int>());
	for (int i = n - 1;i>=0;i--) {
		int pos = lower_bound(v.begin(), v.begin() + i, 2 * v[i], greater<int>()) - v.begin();
		ans +=i - pos;
	}
	cout << ans << endl;
	return 0;
}
