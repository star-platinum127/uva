#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int c,i,j,d;
	cin>>c;
	int no,max1;
	int a[c][6],sum1[c],num[c];
	for(i=0;i<c;i++){
		sum1[i]=0;
		cin>>no;
		for(j=0;j<5;j++){
			cin>>d;
			a[i][j]=d;
			sum1[i]+=d;
		}	
	}
	for(j=0;j<c;j++){
		num[0]=0;
		int tmp=-1;
		for(i=0;i<c;i++){	
			if(sum1[i]>tmp){
				tmp=sum1[i];
				num[0]=i;
			}else if(sum1[i]==tmp){
				if(a[i][2]>a[num[0]][2]){
					tmp=sum1[i];
					num[0]=i;
				}
			}
		}	
		sum1[num[0]]=0;		
		cout<<num[0]+1<<endl;
	}
	return 0;
}
