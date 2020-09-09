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
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0;i < n;i++) cin >> arr[i];
		int pos = 0;
		while (arr.size()) {
			int len = arr.size();
			int maxi = 0, tmp = 0;
			for (int i = 0;i < len;i++) {
				int ans = gcd( arr[i],pos);
				if (ans > maxi) {
					maxi = ans;
					tmp = i;
				}
			}
			pos = maxi;
			cout << arr[tmp] << " ";
			arr.erase(arr.begin() + tmp);
			
		}
		cout << endl;
	}
	return 0;
}
