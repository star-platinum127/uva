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
ll arr[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) cin >> arr[i];
	ll ans;
	ll mini = 1e14;
	sort(arr, arr + n);
	bool flag = 0;
	for (int i=1;i <=sqrt(1e9)+1;i++) {
		ans = arr[0] - 1;
		ll cnt=1;
		for (int j = 1;j < n;j++) {
			cnt *= i;
			ans += abs(arr[j] - cnt);
			if (ans > mini) {
				flag = 1;
				break;
			}
		}
		mini = min(ans, mini);
		if(flag) break;
	}
	cout << mini<<endl;
	return 0;
}
