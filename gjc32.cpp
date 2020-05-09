#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	int cnt=0;
	cin>>n>>m;
	int sc=(n+m)/2;
	if(n>=60) cnt++;
	else{
		if(sc>=60) cnt++;
	}
	if(m>=60) cnt++;
	else{
		if(sc>=60) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
