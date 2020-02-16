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

	for(i=0;i<strlen(r);i++){
		b.push_back(int(r[i])-48);
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<a.size()+b.size();i++){
		final1.push_back(0);
	}
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			final1[i+j]+=a[i]*b[j];
		}
	}
	for(int j=0;j<a.size()+b.size();j++){
		if(final1[j]>=10){
			final1[j+1]+=final1[j]/10;
			final1[j]=final1[j]%10;
		}
	}
	if(final1[a.size()+b.size()-1]!=0) cout<<final1[a.size()+b.size()-1];
	for(int i=a.size()+b.size()-2;i>=0;i--){
		cout<<final1[i];
	}
	
	
	return 0;
}
