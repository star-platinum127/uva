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
const int LINF = 4611686018427387903;
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
/*-----------------------------------------------*/
vector<double> arr;
int n;
double m;
double cal1(double mid) {
	double pos = 0;
	double ans = 0;
	double spd= 1.0;
	for (int i = 0;i < n;i++) {
		if (arr[i] <= mid) {
			ans += (arr[i] - pos) / spd;
			pos = arr[i];
			spd += 1.0;
		}
		else break;
	}
	ans += (mid - pos) / spd;
	return ans;
}
double cal2(double mid) {
	double pos = m;
	double ans = 0;
	double spd = 1.0;
	for (int i = n-1;i >=0;i--) {
		if (arr[i] >= mid) {
			ans += (pos - arr[i]) / spd;
			pos = arr[i];
			spd += 1.0;
		}
		else break;
	}
	ans += (pos-mid) / spd;
	return ans;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		
		cin >> n >> m;
		arr.resize(n + 1);
		for (int i = 0;i < n;i++) cin >> arr[i];
		double l=0, r = m;
		while (l + 1e-6 < r) {
			double mid = (l + r) / 2;
			double pos1 = cal1(mid);
			double pos2 = cal2(mid);
			if (pos1 > pos2) r = mid;
			else l = mid;
		}
		cout << fixed << setprecision(15) << cal1(l) << endl;
	}
	return 0;
}
