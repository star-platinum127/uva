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
#define MOD 1000000007
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int arr[100005];
map<int, int> mp;
set<int> s1;
multiset<int> mst;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n>>m;
	for (int i = 0;i< n;i++) {
		cin >> arr[i];
		mp[arr[i]]++;
		s1.insert(arr[i]);
	}
	sort(arr, arr + n);
	for (int i = 1;i < n;i++) {
		mst.insert(arr[i] - arr[i - 1]);
	}
	
	if (mst.size() <= 1) cout << 0 << endl;
	else {
		int maxi = *(--mst.end());
		cout << arr[n - 1] - arr[0] - maxi << endl;
	}
	for (int i = 0;i < m;i++) {
		int a, b,nw=0,lw=0;
		cin >> a >> b;
		if (a == 1) {
			if (mp[b] == 0) {
				auto pos = s1.lower_bound(b);
				if (pos != s1.end()) {
					nw = *pos;
					mst.insert(nw - b);
				}
				if (pos != s1.begin()) {
					lw = *(--pos);
					mst.insert(b - lw);
				}
				if (lw && nw) {
					mst.erase(mst.find(nw - lw));
				}
				s1.insert(b);
			}
			mp[b]++;
		}
		else {
			if (mp[b] == 1) {
				auto pos = s1.find(b);
				int nw = 0, lw = 0;
				if (++pos != s1.end()) {
					nw = *pos;
					mst.erase(mst.find(nw - b));
				}
				pos--;
				if (pos != s1.begin()) {
					lw = *(--pos);
					mst.erase(mst.find(b-lw));
				}
				if (lw && nw) {
					mst.insert(nw - lw);
				}
				s1.erase(s1.find(b));
			}
			mp[b]--;
		}
		if (s1.size() <= 1) {
			cout << 0 << endl;
			continue;
		}
		int maxi = *(--mst.end());
			cout << *(--s1.end()) - *(s1.begin()) - maxi << endl;
		}
	return 0;
}
