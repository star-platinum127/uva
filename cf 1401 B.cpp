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
#define p push
#define pb push_back
int a[4];
int b[4];
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		for (int i = 0;i < 3;i++) cin >> a[i];
		for (int i = 0;i < 3;i++) cin >> b[i];
		ll sum1=0;
		ll tw = min(b[1], a[2]);
		sum1 += tw * 2;
		a[2] = max(0, a[2]-b[1]);
		b[2] -= a[0];
		b[2] = max(0, b[2]);
		b[2] =max(0,b[2]-a[2]);
		b[2] = min(b[2], a[1]);
		sum1 -= b[2] * 2;
		cout << sum1 << endl;

	}
	return 0;
}
