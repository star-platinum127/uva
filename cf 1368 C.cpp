#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	cout<<4+3*n<<endl;
	for(int i=0;i<2+n;i++){
		cout<<i<<" "<<i<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<i+1<<endl;
		cout<<i<<" "<<i-1<<endl;
	}
	cout<<0<<" "<<1<<endl;
	cout<<n+1<<" "<<n<<endl;
	return 0;
}
