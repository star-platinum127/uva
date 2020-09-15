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
int arr[105];
int flag[105];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		for (int i = 0;i < n;i++) {
			cin >> flag[i];
			if (!flag[i]) v.pb(arr[i]);
		}
		sort(v.begin(), v.end());
		for (int i = 0;i < n;i++) {
			if (!flag[i]) {
				arr[i] = v.back();
				v.pop_back();
			}
		}
		for (int i = 0;i < n;i++) cout << arr[i]<<" ";
		cout << endl;

	}
	return 0;
}
