#include <iostream>
#include<algorithm>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef double d;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	d c;
	d al=0;
	string s1;
	cin>>s1;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='S') c++;
		al++;
	}
	if(c/al>=0.1) cout<<"EUROPE"<<endl;
	else if(c/al<0.02)cout<<"AFRICA"<<endl;
	else cout<<"NORMAL"<<endl;
	return 0;
}
