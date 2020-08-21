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
int arr[1005];
int dp[1005][1005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int n,m;
	cin >> n>>m;
	for (int i = 1;i <=n ;i++) cin >> arr[i];
	arr[0] = 0;
	arr[n + 1] = m;
	for (int i = 0;i < n + 1;i++) dp[i][i + 1] = 0;
	for (int len = 2;len < n + 2;len++) {
		for (int i = 0;i + len < n + 2;i++) {
			int j = i + len, mini = 1e9;
			for (int k = i + 1;k < j;k++) {
				mini = min(mini, dp[i][k] + dp[k][j]);
			}
			dp[i][j] = mini + arr[j] - arr[i];
		}
	}
	cout << dp[0][n + 1] << endl;
	return 0;
}
