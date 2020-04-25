#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;

int dp[31];
int ladder(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 4;
	else return ladder(n-1)+ladder(n-2)+ladder(n-3);
	return dp[n];
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << ladder(n) << '\n';
	return 0;
}
