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
#define lowbit(x) x&-x
const int MOD = 1000000009;
const int MAXN = 100005;
const int INF= 0x3F3F3F3F;
const long long LINF = 4611686018427387903;
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

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s, e, a;
	cin >> s >> e >> a;
		int i = 1;
		int tmp = 0;
		bool flag = 0;
		while (1) {
			if (!a) {
				cout << "unsalable" << "\n";
				break;
			}
			if (s>= e) {
				cout << i+(tmp*10)<< "\n";
				break;
			}
			if (i == 1 && flag){
				a--, i++;
				continue;
			}
			if (i > 8) {
				flag = 1;
				i++;
				if (i % 8 == 2) i = 1,tmp++;
				continue;
			}
			if (i % 3 ==0) s+= (s / 3);
			else s+= (s / 10);
			i++;
		}
	return 0;
}
