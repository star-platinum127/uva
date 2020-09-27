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
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
template<typename _Size>
inline _Size
__lg(_Size __n)
{
	_Size __k;
	for (__k = 0; __n != 0; __n >>= 1)
		++__k;
	return __k - 1;
}
/*------------------------------------------*/
vector<int> arr,h;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	arr.clear();
	h.clear();
	bool flag = 0;
	arr.pb(1e9);
	h.pb(0);
	for (int i = 1;i <= n;i++) {
		int tmp;
		cin >> tmp;
		arr.pb(tmp);
	}
	for (int i = 1;i <= n;i++) { 
		int tmp;
		cin >> tmp;
		h.pb(tmp);
	}
	arr.pb(m);
	int maxi = 0;
	int ans = 0;
	while (1) {
		flag = 0;
		int len = arr.size();
		for (int i = 1;i <h.size();i++) {
			if (arr[i] + h[i] <= arr[i + 1] || arr[i] -h[i] >= arr[i - 1]) {
				flag = 1;
				maxi = max(maxi,h[i]);
				arr.erase(arr.begin() + i);
				h.erase(h.begin() + i);
				i--;
				ans++;
			}
		}
		if (!flag) break;
	}
	cout << ans << endl;
	cout << maxi << endl;
	return 0;
}
