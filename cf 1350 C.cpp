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
ll gcd(ll a,ll b){
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	ll n,tmp;
	cin >> n>>tmp;
	ll cnt = tmp;
	ll ans=0;
	for (int i = 0;i < n - 1;i++) {
		cin >> tmp;
		ll buf = (tmp*cnt)/gcd(tmp, cnt);
		cnt = gcd(tmp,cnt);
		ans = gcd(ans, buf);
	}
	cout << ans << endl;
	return 0;
}
