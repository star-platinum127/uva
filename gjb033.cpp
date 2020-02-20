#include <iostream>
#include<vector>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[101],b[101];
	int most=0;
	cin>>a>>b;
	int final1[strlen(a)][strlen(b)];
	memset(final1,0,sizeof(final1));
	for(int j=0;j<strlen(b);j++){
		for(int i=0;i<strlen(a);i++){
			if(a[i]==b[j]){
				final1[i][j]=1;
				for(int k=0;k<i;k++){
					for(int s=0;s<j;s++){
						if(final1[k][s]>=final1[i][j])final1[i][j]=final1[k][s]+1;
						if(final1[i][j]>most) most=final1[i][j];
					}
				}
			}
		}
	}
	cout<<most;
	return 0;
}
