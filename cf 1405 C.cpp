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
int arr[300005];
int flag[300005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n>>k;
		bool x1 = 0;
		for (int i = 0;i < n;i++) flag[i] = -1;
		string s1;
		cin >> s1;
		for (int i = 0;i < n;i++) {
			int pos = i % k;
			if (s1[i] == '?') continue;
			if (flag[pos] == -1) flag[pos] = s1[i]-'0';
			if (flag[pos] != s1[i] - '0') {
				x1 = 1;
				break;
			}
		}
		if (x1) {
			cout << "NO" << endl;
			continue;
		}
		int a = 0, b = 0;
		for (int i = 0;i < k;i++) {
			if (flag[i] == 1) a++;
			else if (flag[i] == 0) b++;
		}
		if (a <= k / 2 && b <= k / 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
