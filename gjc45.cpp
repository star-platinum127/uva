#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[3];
int b[3];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int c;
	cin>>a[0]>>a[1]>>c>>b[0]>>b[1];
	int min1=min(a[0]+a[1],b[0]+b[1]);
	int min2=min(a[0]+c+b[1],b[0]+c+a[1]);
	cout<<min(min1,min2)<<endl;
	return 0;
}
