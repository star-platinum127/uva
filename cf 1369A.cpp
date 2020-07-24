#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n<4){
			cout<<"NO"<<endl;
			continue;
		}
		if((n-4)%4==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
