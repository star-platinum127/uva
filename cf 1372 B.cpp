#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool flag=1;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				int ans=n/i;
				cout<<ans<<" "<<n-ans<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1) cout<<1<<" "<<n-1<<endl;
	}
	return 0;
}
