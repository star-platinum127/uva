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
int n;

bool cal(int a,int b,int x,int y) {
	if ((x >= a && y > b) || (x > a && y >= b)) return true;
	return false;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<pii> arr(n+1);
	vector<int> ans(n+1);
	for (int i = 0;i < n;i++) {
		cin >> arr[i].F>> arr[i].S;
	}
	for (int i = 0;i < n;i++) ans[i] = 0;
	stack<int> s;
	for (int i = 0;i < n;i++) {
		while (s.size() && cal(arr[s.top()].F, arr[s.top()].S, arr[i].F, arr[i].S)) {
			s.pop();
		}
		if (s.empty()) ans[i] += i;
		else ans[i] += i-s.top()-1;
		s.push(i);
	}
	stack<int>s2;
	for (int i = n-1;i>=0;i--) {
		while (s2.size() && cal(arr[s2.top()].F, arr[s2.top()].S, arr[i].F, arr[i].S)) {
			s2.pop();
		}
		if (s2.empty()) ans[i] += n - i - 1;
		else ans[i] += s2.top() - i -1;
		s2.push(i);
	}
	cout << *max_element(ans.begin(), ans.end());
	return 0;
}
