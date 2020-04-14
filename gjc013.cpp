#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	int c1=0,c2=0,c3=0;
	cin>>n;
	string s;
	string s1;
	string s2;
	int mi=0;
	int m;
	for(int i=0;i<n;i++){
		cin>>s;
		cin>>m;
		c3++;
		if(m==2) c1++;
		else if(m==1){
			c2++;
			s1=s;
		} 
		s2=s;
	}
	if(c3-c1-c2!=0){
		if(c1==0 && c2==0) cout<<c3<<" people like this.";
		else{
		
		if(c1>0){
			mi++;
			cout<<"You";
		} 
		if(c1>0 && c2>0 && c3>0) cout<<", ";
		if(c2>0){
			cout<<s1;
			mi++;
		} 
		cout<<" and ";
		cout<<c3-1<<" others like this.";
		}	
	}else{
		if(c1>0 && c2>0) cout<<"You and "<<s1<<" like this.";
		else if(c1>0) cout<<"You like this.";
		else cout<<s1<<" like this."; 
	}
	return 0;
}
