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
int arr[100005];
map<int, int> mp;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		mp.clear();
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			mp[arr[i]]++;
		}
		int maxi = 0,cnt=0;
		for (int i = 1;i <=n;i++) {
			if (mp[i] > maxi) {
				maxi = mp[i];
				cnt = 1;
			}
			else if (mp[i] == maxi) cnt++;
		}
		int ans = (n - maxi * cnt) / (maxi - 1) + cnt-1;
		cout << ans << endl;
	}
	return 0;
}
