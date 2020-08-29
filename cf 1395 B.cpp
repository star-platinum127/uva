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
int arr[105][105];
bool flag[105][105];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int s, w;
	cin >> s >> w;
	mem(flag, 0);
	int pre = w;
	int dy;
	for (int i = 0;i < n;i++) {
		int dx = (s + i)%n;
		if (dx == 0) dx = n;
		for (int j = 0;j < m;j++) {
			dy = (pre + j) % m;
			if (dy == 0) dy = m;
			cout << dx << " " << dy << endl;
			
		}
		pre = dy;
	}
	
	return 0;
}
