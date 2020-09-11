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
int ans[200005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		stack<int> a,b;
		int n;
		cin >> n;
		string s1;
		cin >> s1;
		int cnt = 0;
		for (int i = 0;i < n;i++) {
			if (s1[i] == '0') {
				if (a.size()) {
					int tmp = a.top();
					a.pop();
					b.push(tmp);
					ans[i] = tmp;
				}
				else {
					cnt++;
					ans[i] = cnt;
					b.push(cnt);
				}
			}
			else {
				if (b.size()) {
					int tmp = b.top();
					b.pop();
					a.push(tmp);
					ans[i] = tmp;
				}
				else {
					cnt++;
					ans[i] = cnt;
					a.push(cnt);
				}
			}
		}
		cout <<a.size()+b.size()<< endl;
		for (int i = 0;i < n;i++) cout << ans[i] <<" ";
		cout << endl;
	}
	return 0;
}
