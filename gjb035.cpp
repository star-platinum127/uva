#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	long int su;
	long int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;n>0;i++){
		n--;
		su+=a[i]*100*n;
	}
	cout<<su;
	return 0;
}
