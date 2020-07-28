#include <bits/stdc++.h>
using namespace std;
const double PI = 3.1415926535898;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		double n;
		cin>>n;
		n*=2;
		double r=0.5/tan(PI/n);
		cout<<fixed<<setprecision(9)<<2*r<<endl;
	}
	return 0;
}
