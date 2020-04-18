#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int c=0;
	for(int i=n;i<=m;i++){
		if(i%2!=0 && i%3!=0 && i%5!=0) c++;
	}
	cout<<c;
	return 0;
}
