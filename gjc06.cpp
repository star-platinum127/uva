#include <iostream>
#include<sstream>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stringstream r,l;
	int llen=a[0],rlen=a[1];
	l<<"1";
	r<<"2";
	for(int i=2;i<n;i++){
		if(llen<=rlen){
			l<<" "<<i+1;
			llen+=10+a[i];
		}else{
			r<<" "<<i+1;
			rlen+=10+a[i];
		}
	}
	string s1,s2;
	getline(l,s1);
	getline(r,s2);
	cout<<s1<<" "<<llen<<endl;
	cout<<s2<<" "<<rlen<<endl;
	return 0;
}
