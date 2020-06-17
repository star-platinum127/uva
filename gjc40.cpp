#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int n,m;
int gcd(int a,int b){
	int r=a%b;
	cout<<a<<'%'<<b<<'='<<r<<endl;
	if(r==0) return b;
	else{
		return gcd(b,r);
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	cout<<"GCD("<<n<<','<<m<<")="<<gcd(n,m);
	return 0;
}
