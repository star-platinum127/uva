#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int s;
	cin>>s;
	int a=145-s;
	int c=102*12+8;
	c=c-a;
	if(c%12==0) cout<<c/12-1<<" "<<12;
	else	cout<<c/12<<" "<<c%12;
	
	return 0;
}
