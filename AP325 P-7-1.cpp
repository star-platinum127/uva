
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
int arr[105][105];
int dis[105];
ll cnt;
int n, m;
void bfs(int pos) {
	bool visit[105] = { 0 };
	int sum1 = 0;
	queue<int> q;
	q.push(pos);
	visit[pos] = 1;
	dis[0] = 0;
	while (!q.empty()) {
		int nw = q.front();
		q.pop();
		for (int i = 0;i < n;i++) {
			if (arr[nw][i] && !visit[i]) {
				dis[i] = dis[nw] + 1;
				q.p(i);
				visit[i] = 1;
				cnt++;
				sum1 += dis[i];
			}
		}
	}
	cout << cnt <<" "<< sum1 << endl;
}
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cnt = 0;
	cin >> n >> m;
	int s;
	cin >> s;
	memset(arr, 0, sizeof(arr));
	for (int i = 0;i < m;i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
	}
	bfs(s);

	return 0;
}
