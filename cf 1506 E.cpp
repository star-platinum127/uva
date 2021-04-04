#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define mikumywaifu ios_base::sync_with_stdio(0)
#define misakamywaifu cin.tie(0)
#define pb push_back
#define S second
#define F first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long long,long long>
#define lowbit(x) x&-x
const ll mod = 1000000007;
const int INF = 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
void debug() {
	cout << "DEBUG :";
}
/*-----------------------------------------------*/

signed main() {
	mikumywaifu;
	misakamywaifu;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n + 1);
		int pre = 0;
		int c = 1;
		vector<bool> f(n + 1,0);
		vector<int>mn(n + 1), mx(n + 1);
		vector<bool>f2(n + 1, 0);
		set<int> s;
		for (int i = 1;i <= n;i++) s.insert(i);
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			if (arr[i] != pre) mn[i] = arr[i], mx[i] = arr[i], pre = arr[i], f[arr[i]] = 1,f2[arr[i]]=1,s.erase(arr[i]);
			else {
				while (f[c]) c++;
				mn[i] = c;
				f[c] = 1;
			}
		}
		for (int i = 0;i < n;i++) {
			if (mx[i]) {
				continue;
			}
			else {
				auto e = *prev(s.lower_bound(arr[i]));
				mx[i] = e;
				s.erase(*prev(s.lower_bound(arr[i])));
			}
		}
		for (int i = 0;i < n;i++) cout << mn[i] << " ";
		cout << "\n";
		for (int i = 0;i < n;i++)cout<<mx[i] << " ";
		cout << "\n";
		

	}
	return 0;
}
