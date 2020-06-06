#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(m>n){
			int t=m;
			m=n;
			n=t;
		}
		m*=2;
		if(n>m) cout<<n*n<<endl;
		else cout<<m*m<<endl;
	}
	return 0;
}
