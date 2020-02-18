#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i;
	int most=0;
	cin>>n;
	int a[n],r[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	r[0]=a[0];
	for(i=1;i<n;i++){
		r[i]=a[i];
		if(r[i-1]>0)r[i]+=r[i-1];
		if(r[i]>most) most=r[i];
	}
	cout<<most;
	return 0;
}
