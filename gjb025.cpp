#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y;
	cin>>x>>y;
	long long int a[x+1][y+1];
	for(int i=0;i<=x;i++){
		a[i][0]=1;
	}
	for(int i=0;i<=y;i++){
		a[0][i]=1;
	}
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
		
	}
	cout<<a[x][y];
	return 0;
}
