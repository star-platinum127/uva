#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll; 
int main(int argc, char** argv) {
	bool ba[3]={0,0,0};
	int ru=0;
	int sc=0;
	int n;
	int o1;
	int o2=0;
	string re[9][5];
	for(int i=0;i<9;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>re[i][j];
		}
	}
	cin>>o1;
	int i=0;
	int j=0;
	int o3=0;
	while(o3!=o1){
		if(o2%3==0 && o2/3>=1){
			ru=0;
			o2=0;
			for(int k=0;k<3;k++){
				ba[k]=0;
			}
		}
		if(i>=9){
			i=0;
			j++;
		}
		if(re[i][j]=="FO" || re[i][j]=="GO" || re[i][j]=="SO"){
			o2++;
			o3++;
		}
		else if(re[i][j]=="1B"){
			ru++;
			if(ba[2]==1){
				ru--;
				ba[2]=0;
				sc++;
			}
			for(int k=1;k>=0;k--){
				if(ba[k]==1){
					ba[k]=0;
					ba[k+1]=1;
				}
			}
			ba[0]=1;	
		}
		else if(re[i][j]=="2B"){
			ru++;
			if(ba[2]==1){
				ru--;
				ba[2]=0;
				sc++;
			}
			if(ba[1]==1){
				ru--;
				ba[1]=0;
				sc++;
			}
			if(ba[0]==1){
				ba[0]=0;
				ba[2]=1;
			}
			ba[1]=1;
		}
		else if(re[i][j]=="3B"){
			for(int k=0;k<3;k++){
				if(ba[k]==1){
					sc++;
				}
			}
			ba[2]=1;
			ru=1;
		}
		else if(re[i][j]=="HR"){
			sc=sc+ru+1;
			ru=0;
			for(int k=0;k<3;k++){
				ba[k]=0;
			} 
		}
		i++;
	}
	cout<<sc;
	return 0;
}
