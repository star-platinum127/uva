#include <iostream>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
const ll P = 401;
ll hash1[10005], modp[10005];
ll hashp(string s, bool flag) {
	ll cnt = 0;
	int pos = 0;
	for (char c : s) {
		cnt = ((cnt * P) % MOD + c) % MOD;
		if (flag) hash1[pos] = cnt;
		pos++;
	}
	return cnt;
}
void qpow(int a,int b) {
	ll tmp = 1;
	modp[0] = 1;
	for (int i = 0;i < b;i++) {
		tmp = (tmp * a) % MOD;
		modp[i + 1] =tmp;
	}
}
ll subseq(int l,int r) {
	if (l == 0) return hash1[r];
	else return (((hash1[r] - hash1[l - 1] * modp[r - l + 1]) % MOD)+ MOD) % MOD;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	qpow(P, 10001);
	int n;
	string s1;
	for(int k=0;k<t;k++){
		cin >> s1;
		int ini = s1.size();
		cin >> n;
		ll build = hashp(s1, true);
		for (int i = 0;i < n;i++) {
			string nw;
			ll ans = 0;
			cin >> nw;
			ll h = hashp(nw, false);
			int len = nw.size();
			for (int j = 0;j <ini - len + 1;j++) {
				if (subseq(j, j + len - 1) == h) ans++;
			}
			cout << ans << "\n";
		}
	}
	return 0;
}
