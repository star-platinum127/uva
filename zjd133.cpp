#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ll n;
	while(cin>>n){
		int chan[]={1,5,10,25,50};
		ll ans[n+1];
		for(int i=0;i<=n;i++){
			ans[i]=0;
		}
		ans[0]=1;
		for(int i=0;i<5;i++){
			for(int j=chan[i];j<=n;j++){
				ans[j]+=ans[j-chan[i]];
			}
		}
		if(ans[n]!=1) cout<<"There are "<<ans[n]<<" ways to produce "<<n<<" cents change."<<endl;
		else cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;	
	}
	return 0;
}
