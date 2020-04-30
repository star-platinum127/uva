#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	if(m>=10 && n/10>n-m) cout<<n-m<<" "<<(n-n/10)/100;
	else if(m<10) cout<<n<<m+n/100;
	else if(n/10<=n-m) cout<<n-n/10<<" "<<m-n/10+(n-m)/100; 
	return 0;
}
