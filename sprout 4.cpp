#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int gcd(int a,int b){
	if(a==0 || b==0){
		cout<<"one zero"<<endl;
		if(a!=0) return a;
		else return b;
	}
	else if(a%2==0 && b%2==0){
		cout<<"both even"<<endl;
		return 2*gcd(a/2,b/2);
	}
	else if(a%2!=0 && b%2!=0){
		cout<<"both odd"<<endl;
		if(a>=b) return gcd(a-b,b);
		else return gcd(b-a,a);
	}
	else{
		cout<<"one odd"<<endl;
		if(a%2!=0) return gcd(a,b/2);
		else return gcd(a/2,b);
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	return 0;
}
