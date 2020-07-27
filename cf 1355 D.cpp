#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,s;
	cin>>n>>s;
	if(s/n>1){
		cout<<"YES"<<endl;
		for(int i=0;i<n-1;i++) cout<<s/n<<' ';
		cout<<s/n+s%n<<endl;
		cout<<1<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}
