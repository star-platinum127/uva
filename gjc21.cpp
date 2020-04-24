#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cin>>a>>b>>c;
	int a1=1*a+3*b+5*c;
	int b1=3*a+2*b+4*c;
	int c1=3*a+3*b+3*c;
	if(a1<=b1&& a1<=c1) cout<<"A"<<" "<<a1;
	else if(b1<a1 && b1<=c1) cout<<"B"<<" "<<b1;
	else cout<<"C"<<" "<<c1; 
	return 0;
}
