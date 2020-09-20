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
int arr[1005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,k,sum1=0,cnt=0;
		cin >> n>>k;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			sum1 += arr[i];
			cnt += (arr[i] == k);
		}
		if (cnt == n) cout << 0 << endl;
		else if (cnt || sum1 == n * k) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}
