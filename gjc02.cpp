#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	ll final1,final2;
	final1=h1*60+m1;
	final2=h2*60+m2;
	ll final3=final2-final1;
	ll pay=120;
	if(final3<=30) cout<<0;
	else if(final3<=60) cout<<30;
	else if(final3<=120) cout<<60;
	else{
		pay+=(final3-120)/60*30;
		if(pay>=210) cout<<210;
		else cout<<pay;
	}
	return 0;
}
