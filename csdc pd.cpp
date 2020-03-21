#include <iostream>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	double a1,a2,a3;
	double b1,b2,b3;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	if(a3*b1-b3*a1==0 || a3*b2-b3*a2==0) cout<<"INFINITY ANS"<<endl;
	else if(b1*a2-b2*a1==0 || a1*b2-b1*a2==0) cout<<"NO ANS"<<endl;
	else{
		double y1=(a3*b1-b3*a1)/(b1*a2-b2*a1);
		double x1=(a3*b2-b3*a2)/(a1*b2-b1*a2);
		cout<<fixed<<setprecision(4)<<x1<<" "<<y1;
	}
	
	return 0;
}
