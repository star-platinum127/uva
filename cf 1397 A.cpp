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
map<char, int> mp;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		mp.clear();
		cin >> n;
		string s1;
		for (int i = 0;i < n;i++) {
			cin >> s1;
			int len = s1.length();
			for (int j = 0;j < len;j++) mp[s1[j]]++;
		}
		bool flag = 0;
		for (char i = 'a';i <= 'z';i++) if (mp[i] % n != 0) flag = 1;
		if (flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
