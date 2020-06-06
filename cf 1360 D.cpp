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
		int c=0;
		int n,k;
		cin>>n>>k;
		int ans=1e9;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				if(i<=k) ans=min(ans,n/i);
				if(n/i<=k) ans=min(ans,i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
