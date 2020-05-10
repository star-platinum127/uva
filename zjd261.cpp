#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	while(cin>>n){
		if(n==-1) break;
		ll f=1;
		ll m=0;
		for(int i=0;i<n;i++){
			ll tmp=m;
			m+=f;
			f=tmp+1;
		}
		cout<<m<<" "<<m+f<<endl;
	}
	return 0;
}
