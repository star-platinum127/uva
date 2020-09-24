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
int arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int mini = INF;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		mini = min(mini, arr[i]);
	}
	sort(arr, arr + n);
	while (m--) {
		int tmp;
		cin >> tmp;
		if (tmp < mini) {
			cout << 0 << endl;
			continue;
		}
		int pos = upper_bound(arr, arr + n, tmp)-arr;
		cout << pos << endl;
	}
	return 0;
}
