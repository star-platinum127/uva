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
ll arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) cin >> arr[i];
	sort(arr, arr + n);
	ll tmp = (n - 1) / 2;
	cout << tmp << endl;
	for (int i = 0;i <tmp;i++) {
		cout << arr[n-i-1]<<" "<<arr[i]<<" ";
	}
	if (n % 2 == 1) cout << arr[tmp] << endl;
	else cout << arr[n/2-1] << " " << arr[n/2] << endl;
	return 0;
}
