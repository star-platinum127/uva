#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	char a[101],b[101];
	cin>>a>>b;
	int s=0;
	for(int i=7;i>=0;i--){
		if(a[i]==b[i]) s++;
		else break;
	}
	if(s==3) cout<<200;
	else if(s==4) cout<<1000;
	else if(s==5) cout<<4000;
	else if(s==6) cout<<10000;
	else if(s==7) cout<<40000;
	else if(s==8) cout<<200000;
	return 0;
}
