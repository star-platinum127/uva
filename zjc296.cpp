#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ll n,m,k;
	while(cin>>n>>m>>k){
		ll ans=0;
		for(int i=n-k+1;i<=n;i++){
			ans=(ans+m)%i;
		}
		cout<<ans+1;
	}
	return 0;
}
