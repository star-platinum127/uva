#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	ll c=1;
	ll m,s;
	for(int i=0;i<n;i++){
		c=c*13;
		m=c%100/10;
		c=c%100;
	}
	cout<<m;
	return 0;
}
