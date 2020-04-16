#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	if(abs(m-n)>200) cout<<180*4+(abs(m-n)-200)*3;
	else if(abs(m-n)>20) cout<<(abs(m-n)-20)*4;
	else cout<<0; 
	return 0;
}
