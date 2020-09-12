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
vector<int> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	v.clear();
	string s1,s2;
	cin >> s1>>s2;
	int tmp = 0, buf = 0;
	for (int i = 0;i < n;i++) {
		if (s1[i] =='1') tmp++;
		if (s2[i] == '1') buf++;
	}
	if (buf != tmp) {
		cout << -1 << endl;
	}
	else {
		for (int i = 0;i < n;i++) {
			if (s1[i] != s2[i]) v.pb(s1[i]);
		}
		int len = v.size();
		ll ans = 0;
		int cnt1=0, cnt0 = 0;
		for (int i = 0;i < len;i++) {
			if (v.back() == '1') {
				if (cnt1) {
					cnt1--;
					cnt0++;
				}
				else {
					ans++;
					cnt0++;
				}
			}
			else {
				if (cnt0) {
					cnt0--;
					cnt1++;
				}
				else {
					ans++;
					cnt1++;
				}
			}
			v.pop_back();
		}
		cout << ans << endl;
	}
	return 0;
}
