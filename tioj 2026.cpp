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
	int q;
	priority_queue<int> mx;
	priority_queue<int,vector<int>,greater<int> > mn;
	cin >> q;
	int n,x;
	cin >> n >> x;
	mx.push(x);
	while (--q) {
		cin >> n;
		if (n == 1) {
			cin>>x;
			if (x > mx.top()) mn.push(x);
			else mx.push(x);
			if (mx.size() > mn.size() + 1) mn.push(mx.top()), mx.pop();
			if (mn.size() > mx.size()) mx.push(mn.top()), mn.pop();
		}
		else {
			cout << mx.top()<<"\n";
		}
	}
	return 0;
}
