#include <algorithm>
#include<cstring>
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
#define p push
#define pb push_back
int arr[100005];
int p[100005];
bool flag[100005];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		int mini = 1e9;
		cin >> n;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			mini = min(mini, arr[i]);
		}
		memset(flag, 0, sizeof(flag));
		for (int i = 0;i < n;i++) {
			if (arr[i] % mini == 0) flag[i] = 1;
			p[i] = arr[i];
		}
		sort(p, p + n);
		bool ans = 0;
		for (int i = 0;i < n;i++) {
			if (arr[i] != p[i] && !flag[i]) ans = 1;
		}
		if (ans) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
