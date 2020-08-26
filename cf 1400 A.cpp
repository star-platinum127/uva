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
		cin >> n;
		string s1;
		cin >> s1;
		if (s1[n - 1] == '1') for (int i = 0;i < n;i++) cout << 1;
		else for (int i = 0;i < n;i++) cout << 0;
		cout << endl;
	}
	return 0;
}
