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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, tmp;
		cin >> n;
		string s1;
		cin >> s1;
		bool odd = 0, even = 0;
		for (int i = 0;i < n;i++) {
			if ((i+1) % 2 &&s1[i] % 2) odd = 1;
			if (!((i + 1) % 2 || s1[i] % 2)) even = 1;
		}
		if (n % 2) {
			if (odd) cout << 1 << endl;
			else cout << 2 << endl;
		}
		else {
			if (even) cout << 2 << endl;
			else cout << 1 << endl;
		}
	}
	return 0;
}
