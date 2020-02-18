#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> final1;
int main(int argc, char** argv) {
	int h,w,i,c,big1=0;
	cin>>h>>w;
	int a[500][500]={},new1[500][500]={};
	for(i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[i][j]==0){
				new1[i][j]=min(min(new1[i-1][j],new1[i][j-1]),new1[i-1][j-1])+1;
			}
			if(new1[i][j]>big1){
				big1=new1[i][j];
			} 
		}
	}
	cout<<big1*big1;
	return 0;
}
