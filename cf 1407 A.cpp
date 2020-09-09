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
int arr[1005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt = 0;
		bool flag = 0;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			if (arr[i] == 0) cnt++;
		}
		if (cnt >= n / 2) {
			cout << cnt << endl;
			for (int i = 0;i < cnt;i++) cout << 0 << " ";
			cout << endl;
		}
		else{
			int tmp = n - cnt;
			if (tmp % 2) tmp--;
			cout << tmp << endl;
			for (int i = 0;i < tmp;i++) cout << 1 << " ";
			cout << endl;
		}
	}
	return 0;
}
