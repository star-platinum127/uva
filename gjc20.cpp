#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	if(n<20) cout<<60;
	else if(n<50) cout<<80;
	else if(n<100) cout<<90;
	else cout<<100; 
	return 0;
}
