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
/*-----------------------------------------------*/
vector<string> v;
int ans[10] = { 1,4,7,2,5,8,3,6,9 };
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s1;
		v.clear();
		for (int i = 0;i < 9;i++) {
			cin >> s1;
			v.pb(s1);
		}
		for (int i = 0;i < 9;i++) {
			if (v[i][ans[i]-1] == '1') v[i][ans[i]-1]++;
			else v[i][ans[i]-1]--;
		}
		for (int i = 0;i < 9;i++) cout << v[i] << endl;
	}

	return 0;
}
