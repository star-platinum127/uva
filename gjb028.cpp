#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int c[6]={1,5,10,12,16,20};
	int n;
	cin>>n;
	int w[n+1];
	for(int i=0;i<=n;i++){
		w[i]=0;
	}
	for(int i=0;i<6;i++){
		for(int j=c[i];j<=n;j++){
			int a=w[j-c[i]];
			if(a+1<w[j] || w[j]==0) w[j]=a+1; 
		}
	}
	cout<<w[n];
	return 0;
}
