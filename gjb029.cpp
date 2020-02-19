#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int c[5]={2,5,10,20,25};
	int n;
	cin>>n;
	int w[n+1];
	for(int i=0;i<=n;i++){
		w[i]=0;
	}
	w[0]=1;
	for(int i=0;i<5;i++){
		for(int j=c[i];j<=n;j++){
			int a=w[j-c[i]];
			w[j]+=a;
		}
	}
	cout<<w[n];
	return 0;
}
