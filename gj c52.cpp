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
const int MAX = 100005;
const int INF= 0x3F3F3F3F;
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
map<char, int> mp;
char c[5] = { 'H','A','P','Y' };
int arr[MAX];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	cin >> s1;
	for (int i = 0;i < s1.length();i++) mp[s1[i]]++;
	int mini = INF;
	for (int i = 0;i < 4;i++) {
		if (c[i] == 'P') mini = min(mp[c[i]] / 2, mini);
		mini = min(mini, mp[s1[i]]);
	}
	cout << mini << endl;
	return 0;
}
