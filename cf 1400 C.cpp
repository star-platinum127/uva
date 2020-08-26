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
bool flag[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s1;
		
		cin >> s1;
		int n;
		cin >> n;
		int m = s1.length();
		for (int i = 0;i < m;i++) flag[i] = 1;
		for (int i = 0;i < m;i++) {
			int x = i + n;
			int y = i - n;
			if (y >= 0 ) {
				if (s1[i] == '0') flag[y] = 0;
				
			}
			if (x < m) {
				if (s1[i] == '0') flag[x] = 0;

				
			}
			
		}
		bool a = 0;
		for (int i = 0;i < m;i++) {
			int x = i + n;
			int y = i - n;
			if (s1[i] == '1' && ((i + n < m && flag[i + n] == 0) && (i - n >= 0 && flag[i - n] == 0))) {
				cout << -1 << endl;
				a = 1;
				break;
			}
			else if (s1[i] == '1' && (i + n >= m) && flag[i - n] == 0) {
				cout << -1 << endl;
				a = 1;
				break;
			}
			else if (s1[i] == '1' && i - n < 0 && flag[i + n] == 0) {
				cout << -1 << endl;
				a = 1;
				break;
			}
		}
		if (a == 1) continue;
		for (int i = 0;i < m;i++) cout << flag[i];
		cout << endl;
	}
	return 0;
}
