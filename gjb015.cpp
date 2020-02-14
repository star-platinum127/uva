#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;
	int r=0;
	while(getline(cin,s)){
		r++;
		int c=0;
		stringstream ss;
		
		string tmp;
		ss<<s;
		while(ss>>tmp){
			c++;
			if(tmp=="BILL"){
				cout<<r<<" "<<c;
				return 0;
			}	
		}
	}
	cout<<"NO";
}
