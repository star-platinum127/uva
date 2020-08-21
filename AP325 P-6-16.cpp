#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
typedef struct {
	int l, r, v;
} s1;
s1 s[200005];
int dp[200005];
bool cmp(s1 p1, s1 p2) {
	return p2.r > p1.r;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> s[i].l >> s[i].r >> s[i].v;
	}
	s[0].r = -1;
	sort(s, s + n + 1, cmp);
	dp[0] = 0;
	for (int i = 1;i <= n;i++) {
		int j = 0;
		for (int t = i / 2;t > 0;t >>= 1) {
			while (j + t < i && s[j + t].r < s[i].l) j += t;
		}
		dp[i] = dp[j] + s[i].v;
		if (dp[i] < dp[i - 1]) dp[i] = dp[i - 1];
	}
	cout << dp[n] << endl;
	return 0;
}
