#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int a[5];
	int c1=0,c2=0;
	int maxn=-1e9;
	for(int i=0;i<4;i++) cin>>a[i];
	sort(a,a+4);
	if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) cout<<1000;
	else if(a[1]==a[2] && a[0]==a[1]) cout<<100;
	else if(a[0]==a[1] && a[2]==a[3]) cout<<50;
	else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3]) cout<<10;
	else cout<<0;
	return 0;
}
