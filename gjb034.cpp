#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s[9]={10000,5000,1000,500,100,50,10,5,1};
	int c;
	cin>>c;
	int a;
	for(int i=0;i<9;i++){
		a+=(c-c%s[i])/s[i];
		c=c%s[i];
	}
	cout<<a;
	return 0;
}
