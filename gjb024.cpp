#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long int a[91]={1,2};
	int n;
	cin>>n;
	if(n==1 || n==2)cout<<n;
	else{
		for(int i=2;i<n;i++){
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n-1]<<" ";
	}
	long long int d;
	d=a[n-1]%n;
	cout<<a[d-1];
	
	return 0;
}
