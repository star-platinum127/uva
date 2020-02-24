#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int c;
	while(cin>>c){
		if(c==0) break;
		ll maxi=0;
		ll a[c]={0};
		ll dp[c]={0};
		for(int i=0;i<c;i++) cin>>a[i];
		for(int j=0;j<c;j++){
			for(int i=j;i<c;i++){
				dp[j]+=a[i];
				if(dp[j]>maxi) maxi=dp[j];
			}
		}
		if(maxi==0) cout<<"Losing streak."<<endl;
		else cout<<"The maximum winning streak is "<<maxi<<"."<<endl;
	}
	return 0;
}
