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
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int arr[10005];
int solve(int a, int b) {
	cout << "?" << " " << a+1 << " " << b+1 << endl;
	int tmp;
	cin >> tmp;
	return tmp;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	int maxi = 0;
	for (int i = 1;i < n;i++) {
		int a = solve(maxi, i);
		int b = solve(i, maxi);
		if (a > b) {
			arr[maxi] = a;
			maxi = i;
		}
		else arr[i] = b;
	}
	arr[maxi] = n;
	cout << "!" << " ";
	for (int i = 0;i < n;i++) cout << arr[i]<<" ";
	cout << endl;
	return 0;
}
