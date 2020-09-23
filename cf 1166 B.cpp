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
map<char, int> mp;
vector<char> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s1 = "aeiou";
	for (int i = 5;i *i <= n;i++) {
		if (n % i) continue;
		for (int j = 0;j < n / i;j++) {
			for (int k = 0;k < i;k++) {
				cout << s1[(j + k) % 5];
			}
		}
		cout << endl;
		return 0;
	}
	cout << -1 << endl;
}
