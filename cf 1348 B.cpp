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
#define MOD 1000000007
set<int> s;
int arr[10005];
vector<int> v;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		s.clear();
		v.clear();
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			s.insert(arr[i]);
		}
		int cnt;
		cnt = n* m;
		if (s.size() > m) cout << -1;
		else {
			cout << cnt << endl;
			for (int i =1 ;i <=n;i++) {
				if (s.count(i)) v.pb(i);
			}
			for (int i = 0;i < m - s.size();i++) v.pb(1);
			for (int i = 0;i < n;i++) {
				for (int j = 0;j < m;j++) cout<<v[j]<<" " ;
			}
		}
		cout << endl;
	}
	
