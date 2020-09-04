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
bool flag[200005];
int arr[200005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		bool tmp = 0;
		mem(flag,0);
		cin >> n;
		for (int i = 0;i <n;i++) cin >> arr[i];
		for (int i = 0;i <n;i++) {
			int cnt = (arr[i]+ i)%n;
			cnt = (cnt + n) % n;
			if (flag[cnt] == 1) {
				cout << "NO" << endl;
				tmp = 1;
				break;
			}
			else flag[cnt] = 1;
		}
		if (!tmp) cout << "YES" << endl;
	}
	return 0;
}
