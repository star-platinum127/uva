#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int cnt=1;
	while(n>=3){
		cnt++;
		if(n%3==0) n=n/3;
		else if(n%3==1) n=2*n+1;
		else if(n%3==2) n=2*n-1;
	}
	cout<<cnt;
	return 0;
}
