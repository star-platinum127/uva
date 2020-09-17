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
string s1[6] = {"RGB","GRB","GBR","RBG","BGR","BRG"};
string arr;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	cin >> arr;
	int cnt = 0, mini = 1e9,tmp;
	for (int j = 0;j < 6;j++) {
		cnt = 0;
		for (int i = 0;i < n;i++) {
			if (arr[i] != s1[j][i%3]) cnt++;
		}
		if (cnt < mini) {
			mini = cnt;
			tmp = j;
		}
	}
	cout <<mini<< endl;
	for (int i = 0;i < n;i++) {
		cout << s1[tmp][i % 3];
	}
	cout << endl;
	return 0;
}
