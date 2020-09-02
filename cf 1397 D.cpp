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
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		priority_queue<int> q;
		cin >> n;
		for (int i = 0;i < n;i++) {
			int tmp;
			cin >> tmp;
			q.push(tmp);
		}
		while (1) {
			int ans1 = q.top();
			q.pop();
			if (q.empty()) {
				cout << "T" << endl;
				break;
			}
			int ans2 = q.top();
			q.pop();
			if (ans1 > 1) q.push(ans1 - 1);
			if (q.empty()) {
				cout << "HL" << endl;
				break;
			}
			if (ans2 > 1) q.push(ans2 - 1);
		}
	}
	return 0;
}
