#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath> 
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<char>mon,true1;
int main(int argc, char** argv) {
	char c[50],b[50];
	int counter=0,con2=0;
	cin>>c;
	for(int i=0;i<strlen(c);i++){
		true1.push_back(c[i]);
	}	
	cin>>b;
	for(int j=0;j<strlen(b);j++){
		mon.push_back(b[j]);
	}
	for(int k=0;k<strlen(c);k++){
		for(int i=con2;i<strlen(b);i++){
			if(c[k]==b[i]){
				con2=i+1;
				counter++;
				break;
			}
		}
	}
	if(counter==strlen(c)){
		cout<<"YES";
	}else{cout<<"NO";}
	
	return 0;
}
