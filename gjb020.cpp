#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cin>>a;
	char c[100][100],p[100];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
			if(strcmp(c[i],c[j])>0){
				strcpy(p,c[i]);
				strcpy(c[i],c[j]);
				strcpy(c[j],p);
			}
		}
	}
	for(int i=0;i<a;i++){
		cout<<c[i]<<endl;
	}
	return 0;
}
