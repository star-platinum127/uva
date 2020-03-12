#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	ll sum1=0;
	sum1+=n*12+m;
	if(sum1<90*12+8 || sum1>101*12+8) cout<<0;
	else cout<<sum1-(90*12+8)+1;
	
	return 0;
}
