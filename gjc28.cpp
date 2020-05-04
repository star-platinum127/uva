#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	ll wh=0;
	ll nw=0;
	ll cnt=1;
	cin>>n;
	int i=1;
	while(1){
		if(i!=1) wh=wh*2-i*3;
		else wh=10;
		nw=nw+wh;
		if(nw>n){
			cout<<i<<" "<<nw-n;
			break;
		}
		i++;
	}
	return 0;
}
