#include <iostream>
#include<algorithm>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int l[n],s[n],final1[m+1];
	for(int i=1;i<=n;i++){
		cin>>l[i];
		cin>>s[i];
		
	}
	memset(final1,0,sizeof(final1));
	int most=0;
	for(int i=1;i<=n;i++){
		for(int j=l[i];j<=m;j++){
			if(final1[j-l[i]]+s[i]>final1[j]){
				final1[j]=final1[j-l[i]]+s[i];
				if(final1[j]>most)most=final1[j];
			}
		}
	}
	cout<<most;
	return 0;
}
