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
vector<int> arr;
map<int,int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	arr.resize(n + 1);
	int m=0;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		if (!mp[arr[i]]) m++;
		mp[arr[i]]++;
	}
	mp.clear();
	int r = 0, l = 0;
	int mini = 1e9;
	int cnt = 0;
	while (r<n) {
		l = r;
		cnt = 0;
		while (r<n) {
			if (cnt == m) break;
			if (!mp[arr[r]]) cnt++;
			mp[arr[r]] ++;
			r++;
		}
		while (l<r) {
			if (mp[arr[l]] > 1) { 
				mp[arr[l]]--;
				l++; 
			}
			else break;
		}
		if(cnt==m) mini = min(r - l, mini);
	}
	cout << mini << endl;
	return 0;
}
