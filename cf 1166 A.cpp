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
	v.clear();
	for (int i = 0;i < n;i++) {
		string s1;
		cin >> s1;
		if(mp[s1[0]]==0) v.pb(s1[0]);
		mp[s1[0]]++;
	}
	int len = v.size();
	int ans = 0;
	for (int i = 0;i < len;i++) {
		if (mp[v[i]] >= 3) {
			int a = mp[v[i]] / 2;
			int b = mp[v[i]] - a;
			ans += (a * (a - 1)) / 2;
			ans += (b * (b - 1)) / 2;
		}
	}
	cout << ans << endl;
	return 0;
}
