#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ll s;
	cin>>s;
	if(s*4/5+30>=100) cout<<100;
	else cout<<s*4/5+30;
	return 0;
}
