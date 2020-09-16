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
int arr[150];
int bct[10005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	mem(bct, 0);
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = 0;i < n;i++) bct[arr[i]]++;
	ll x=1, y = 1;
	sort(arr, arr + n);
	x = arr[n - 1];
	for (int i = n - 1;i >= 0;i--) {
		if (bct[arr[i]] == 2) {
			y =arr[i];
			break;
		}
		else if (x % arr[i] != 0) {
			y = arr[i];
			break;
		}
	}
	cout << x << " " << y << endl;
	return 0;
}
