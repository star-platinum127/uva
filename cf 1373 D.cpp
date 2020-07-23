#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll a[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll ans=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i%2==0) ans+=a[i];
		}
		ll maxi=0;
		ll buf=0;
		for(int i=1;i<n;i+=2){
			maxi=max((ll)0,a[i]-a[i-1]+maxi);
			buf=max(maxi,buf);
		}
		ll maxi2=0;
		for(int i=2;i<n;i+=2){
			maxi2=max((ll)0,a[i-1]-a[i]+maxi2);
			buf=max(maxi2,buf);
		}
		cout<<ans+buf<<endl;
	}
	return 0;
}
