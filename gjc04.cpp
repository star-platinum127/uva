#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	char a[8];
	cin>>a;
	ll sum1=0;
	for(int i=0;i<7;i++){
		sum1+=(int(a[i])-48)*(i+1);
	}
	int d=10-sum1%10;
	if(d==10) cout<<0;
	else cout<<d;
	return 0;
}
