#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int> a,b,final1;
	final1.clear();
	a.clear();
	b.clear();
	char d[101],r[101];
	int i,j,s=0;
	cin>>s;
	a.push_back(1);
	for(i=2;i<=s;i++){
		for(j=0;j<a.size();j++)a[j]*=i;
		for(int r=0;r<a.size();r++){
			if(a[r]>=10){
				if(r!=a.size()-1) a[r+1]+=a[r]/10;
				else a.push_back(a[r]/10);
				a[r]=a[r]%10;
			}
			
		}
	}
	for(int i=a.size()-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
