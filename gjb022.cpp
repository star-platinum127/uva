#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int c=0;
int fay(int a){
	c+=1;
	if(a==0 || a==1)return a;
	else return fay(a-1)+fay(a-2);
}
int main(int argc, char** argv) {
	
	int s;
	cin>>s;
	cout<<fay(s)<<endl;
	cout<<c;
	return 0;
}
