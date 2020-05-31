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
		int c=0;
		if(n%m==0){
			cout<<0<<endl;
			continue;
		}
		int nw=(n/m+1)*m-n;
		cout<<nw<<endl;
	}
	return 0;
}
