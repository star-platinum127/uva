#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll sc=0,com=0,tom=0;
ll max1=-1e9;
int main(int argc, char** argv) {
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='-') continue;
		if(s1[i]==s2[i]){
			com++;
			tom++;
			sc+=com*100;
			
		}else{
			com=0;
			if(tom>3) tom-=3;
			else tom=0;
			
		}
		if(com>max1) max1=com;
	}
	cout<<sc<<" "<<max1<<" "<<tom;
	return 0;
}
