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
int n, m;
int arr[200005];
bool cal(int pos) {
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (cnt%2) {
			if (arr[i] <= pos) cnt++;
		}
		else cnt++;
	}
	if (cnt >= m) return 1;
	cnt = 0;
	for (int i = 0;i < n;i++) {
		if (!(cnt%2)) {
			if (arr[i] <= pos) cnt++;
		}
		else cnt++;
	}
	if (cnt >= m) return 1;
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n>>m;
	int maxi = -1e9;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		maxi = max(maxi, arr[i]);
	}
	int l = 0, r =maxi,mid;
	while (l + 1 < r) {
		mid = (l + r) / 2;
		if (cal(mid)) r = mid;
		else l = mid;
	}
	cout << r << endl;
	return 0;
}
