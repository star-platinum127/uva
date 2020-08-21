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
vector<int> v[50005];
ll cnt;
int n, m;
bool visit[50005] = { 0 };
int arr[50005];
int dfs(int pos) {
	int w = arr[pos];
	visit[pos] = 1;
	int len = v[pos].size();
	for (int i = 0;i < len;i++) {
		if (!visit[v[pos][i]]) w += dfs(v[pos][i]);
	}
	return w;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0;i < n;i++) cin >> arr[i];
	for (int i = 0;i < m;i++) {
		int x, y;
		cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	int maxi = -1e9;
	for (int i = 0;i < n;i++) {
		if (!visit[i]) maxi = max(maxi, dfs(i));
	}
	cout << maxi << endl;
	return 0;
}
