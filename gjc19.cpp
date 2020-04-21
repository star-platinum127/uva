#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	char c[101];
	cin>>c;
	int l=strlen(c);
	for(int i=3;i<=6;i++){
		if(l<i*2){
			cout<<0;
			break;
		}
		bool r=true;
		for(int j=i;j<l;j++){
			if(c[j]!=c[j-i]){
				r=false;
				break;
			}
		}
		if(r==true){
			cout<<i;
			break;
		} 
		if(i==6) cout<<0;
	}
	return 0;
}
