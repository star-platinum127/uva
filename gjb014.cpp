#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char a[3][101];
	int sum[3]={0,0,0};
	int sum1=0;
	for(int i=0;i<3;i++){
		cin.getline(a[i],101);
	}
	for(int i=0;i<3;i++){
		int k=0,j=0;
		while(a[i][j]!='\0'){
			if(a[i][j]==' '){
				sum[i]+=k;
				k=0;
			}else{
				k=k*10+(int(a[i][j])-48);
			}
			j++;		
		}
		sum[i]+=k;
	}
	int most=0;
	for(int i=0;i<3;i++){
		if(sum[i]>sum[most])most=i;
	}
	cout<<most+1<<" "<<sum[most];
	return 0;
}
