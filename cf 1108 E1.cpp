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
int arr[305];
int b[305];
vector<pii> v;
vector<int> ans;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	v.resize(m + 1);
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = 0;i < m;i++) {
		cin >> v[i].F;
		cin >> v[i].S;
	}
	int cnt = 0;
	ans.clear();
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			int tmp = 0;
			if (i == j) continue;
			int maxi = arr[j-1]-arr[i-1];
			for (int k = 0;k <m;k++) {
				if (i >= v[k].F && i <=v[k].S && (j<v[k].F || j>v[k].S)) {
					b[tmp++] = k;
					maxi++;
				}
			}
			if (cnt < maxi) {
				cnt = maxi;
				ans.clear();
				for (int i = 0;i < tmp ;i++) ans.pb(b[i]+1);
			}
		}
	}
	cout << cnt << endl;
	cout << ans.size() << endl;
	for (int i = 0;i < ans.size();i++) cout << ans[i]<<" ";
	cout << endl;
	return 0;
}
