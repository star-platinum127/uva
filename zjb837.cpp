#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> fai;
int main(int argc, char** argv) {
	int t;
	cin>>t;

	for(int k=0;k<t;k++){
		int n,m;
		int tmp;
		cin>>n>>m;
		if(n>m){
			tmp=n;
			n=m;
			m=tmp;
		}
		fai.clear();
		fai.push_back(0);
		fai.push_back(1);
		fai.push_back(1);	
		int i=3;
		int c=0;
		if(n==0){
			cout<<0<<endl;
			c++;
		} 
		if(n<=1 && m>=1){
			cout<<1<<endl;
			cout<<1<<endl;
			c++;
			c++;
		} 
		while(fai[i-1]<=m){
			fai.push_back(0);
			fai[i]+=fai[i-1]+fai[i-2];
			if(fai[i]>=n && fai[i]<=m){
				cout<<fai[i]<<endl;
				c++;
			} 
			i++;	
		}
		cout<<c<<endl;
		if(k!=t-1) cout<<"------"<<endl;
	}
	return 0;
}
