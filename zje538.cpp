#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[10005];
int b[10005];
int n,m,r;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m>>r){
		if(n==0) break;
		ll ans=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]+b[i]>m) ans+=r*(a[i]+b[i]-m);
		}
		cout<<ans<<endl;
	}
	return 0;
}
