#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> a,b,final1;
int main(int argc, char** argv) {
	final1.clear();
	a.clear();
	b.clear();
	char s[101],r[101];
	int i,j,size1=0;
	cin>>s>>r;
	for(i=0;i<strlen(s);i++){
		a.push_back(int(s[i])-48);
	}
//	cout << strlen(s) << endl;
	for(i=0;i<strlen(r);i++){
		b.push_back(int(r[i])-48);
	}
//	cout << strlen(r) << endl;
	
	if(b.size()>=a.size()){
		size1=b.size();
		reverse(a.begin(),a.end());
		int size2=a.size()-b.size();
		for(i=0;i<size2;i++){
			a.push_back(0);
		}	
		reverse(a.begin(),a.end());
	}else {
		size1=a.size();	
		reverse(b.begin(),b.end());
		int size2=a.size()-b.size();
		for(i=0;i<size2;i++){
			b.push_back(0);
		}
		reverse(b.begin(),b.end());
		
	}
	for(i=0;i<size1;i++){
		final1.push_back(0);
	}
	for(j=size1-1;j>0;j--){
		int test=a[j]+b[j];
		final1[j]+=test;
		if(final1[j]>=10){
			final1[j-1]++;
			final1[j]=final1[j]%10;
		}
	}
	int test=a[0]+b[0];
	final1[0]+=test;
	if(final1[0]>=10){
		final1[0]=final1[0]%10;
		cout<<1;
	}
	for(j=0;j<final1.size();j++){
		cout<<final1[j];
	}
	
	return 0;
}
