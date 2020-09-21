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
ll arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v;
	v.resize(n + 1);
	for (int i = 0;i < n;i++) cin >> arr[i];
	int cnt=1,nw=0;
	sort(arr, arr + n);
	while (cnt < n) {
		v[cnt] = arr[nw];
		cnt+=2;
		nw ++;
	}
	cnt = 0;
	while (cnt < n) {
		v[cnt] = arr[nw];
		nw++;
		cnt += 2;
	}
	ll ans = 0;
	for (int i = 1;i < n-1;i++) {
		if (v[i - 1] > v[i] && v[i + 1] > v[i]) ans++;
	}
	cout << ans << endl;
	for (int i = 0;i < n;i++) cout << v[i] << " ";
	cout << endl;
	return 0;
}
