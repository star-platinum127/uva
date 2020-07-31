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
		int n;
		cin>>n;
		if(n<31) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			if(n-30==10) cout<<"6 15 10 9"<<endl;
			else if(n-30==6) cout<<"6 15 14 1"<<endl;
			else if(n-30==14) cout<<"6 10 21 7"<<endl;
			else{
				cout<<"6 10 14 "<<n-30<<endl;
			}
		}
	}
	return 0;
}
