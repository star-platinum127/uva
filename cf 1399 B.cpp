#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[1005];
int b[1005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int max1=1e9,max2=1e9;
		for(int i=0;i<n;i++){
			cin>>a[i];
			max1=min(max1,a[i]);
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			max2=min(max2,b[i]);
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			if(a[i]!=max1 && b[i]!=max2){
				if(a[i]-max1>b[i]-max2){
					ans+=b[i]-max2;
					ans+=a[i]-b[i]+max2-max1;
				}else{
					ans+=a[i]-max1;
					ans+=b[i]-a[i]+max1-max2;
				}
			}else{
				if(a[i]==max1) ans+=b[i]-max2;
				else if(b[i]==max2) ans+=a[i]-max1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
