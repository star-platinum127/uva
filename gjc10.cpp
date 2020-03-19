#include <iostream>
#include<cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a1,a2,b1,b2;
	int c=0;
	cin>>a1>>a2>>b1>>b2;
	int a=a1*b2+a2*b1;
	int b=a2*b2;
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0 && b%i==0){
			c=i;
			break;
		}
	}
	int x1=a/b;
	a=a/c;
	b=b/c;
	a=a%b;
	cout<<x1<<"+"<<a<<"/"<<b;
	return 0;
}
