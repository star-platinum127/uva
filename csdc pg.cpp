#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int fir=1;
	int rou=1;
	while(n!=1){
		if(n%2!=0){
			fir=fir+2*rou;
		}
		rou=rou*2;
		n=n/2;
	}
	cout<<fir;
	return 0;
}
