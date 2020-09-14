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
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
vector<vector<int> > v;
int arr[100005];
int ans[100005];
int n;
void dfs(int pos, int fa) {
	for (auto e : v[pos]) {
		if (e == fa) continue;
		dfs(e, pos);
		arr[pos] += arr[e]+1;
		ans[pos] = max(arr[e]+1, ans[pos]);
	}
	ans[pos] = max(ans[pos], n - arr[pos]-1);
	return;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		v.resize(n + 1);
		for (int i = 1;i <= n;i++) v[i].clear();
		for (int i = 0;i < n-1;i++) {
			int x, y;
			cin >> x >> y;
			v[x].pb(y);
			v[y].pb(x);
		}
		mem(arr, 0);
		mem(ans, 0);
		dfs(1, 0);
		int maxi = 1e9,a=-1,b=-1;
		for (int i = 1;i <= n;i++) {
			if (ans[i]< maxi) {
				maxi = ans[i];
				a = i;
			}
		}
		for (int i = 1;i <= n;i++){
			if (i == a) continue;
			if (ans[i] == ans[a]) {
				b = i;
				break;
			}
		}
		if (b == -1) {
			cout << 1 << " " << v[1].front()<<endl;
			cout << 1 << " " << v[1].front()<<endl;
		}
		else {
			if (v[a].size()) {
				if (v[a].front() == b && v[a].size() > 1) {
					cout << a << " " << v[a][1] << endl;
					cout << b << " " << v[a][1] << endl;
				}
				else {
					cout << a << " " << v[a].front() << endl;
					cout << b << " " << v[a].front() << endl;
				}
				
			}
			else {
				if (v[b].front() == a && v[b].size()>1){
					cout << b << " " << v[b][1] << endl;
					cout << a <<" "<< v[b][1] << endl;
				}
				else {
					cout << b << " " << v[b].front() << endl;
					cout << a << v[b].front() << endl;
				}
				
			}
		}
	}
	return 0;
}
