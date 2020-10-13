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
const ll MOD = 1000000007;
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
int n, m, a, b, d;
struct e {
	int st, en, val;
};
vector<vector<e> > arr;
vector<int> dp1;
vector<int> dp2;
map<int, int> mp;
void dijkstra(int s,vector<int>&dp,int da) {
	dp.resize(n + 1);
	dp = vector<int>(n + 1, INF);
	priority_queue<pii,vector<pii>,greater<pii> >pq;
	pq.push({ 0,s });
	mp.clear();
	dp[s] = 0;
	while (!pq.empty()) {
		auto pos = pq.top();
		pq.pop();
		int v = pos.S;
		if (mp[v]) continue;
		mp[v] = 1;
		for (auto i : arr[v]) {
			int xd = i.st,yd = i.en;
			if (dp[v] + xd+i.val*da < dp[yd]) {
				dp[yd] = dp[v] + xd+i.val*da;
				pq.push({ dp[yd], yd });
			}
		}
	}
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> a >> b >> d;
	arr.resize(n + 1);
	for (int i = 0;i < m;i++) {
		int x, y,c1,c2,n1,n2;
		cin >> x >> y>>c1>>n1>>c2>>n2;
		arr[x].pb({c1,y,n1});
		arr[y].pb({c2,x,n2});
	}
	dijkstra(a,dp1,0);
	int mini = dp1[b];
	dijkstra(b, dp2, 0);
	mini+=dp2[a];
	dijkstra(a, dp1, d-1);
	int tmp=dp1[b];
	dijkstra(b, dp2, d-1);
	tmp += dp2[a];
	mini = min(mini, tmp);
	cout << mini << "\n";
	return 0;
}
