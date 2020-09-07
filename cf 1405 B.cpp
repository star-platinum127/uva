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
ll arr[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		ll cnt = 0;
		ll fre = 0, pay = 0;
		cin >> n;
		for (int i = 0;i < n;i++) cin >> arr[i];
		for(int i=0;i<n;i++){
			if (arr[i] >=0) {
				fre += arr[i];
			}
			else {
				cnt = min(-arr[i], fre);
				arr[i] += cnt;
				fre -= cnt;
			}
		}
		ll ans = 0;
		for (int i = 0;i < n;i++) if (arr[i] <0) ans -= arr[i];
		cout << ans << endl;
	}
	return 0;
}
