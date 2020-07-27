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
		double h,c,n;
		cin>>h>>c>>n;
		double cnt=1;
		double buf=h+c;
		if(buf/2>=n){
			cout<<2<<endl;
			continue;
		}
		ll l=0,r=1e9;
		while(r - l > 100){
			ll mid = l + r >> 1;
			double ans= ((mid + 1) * h + mid * c) / (2 * mid + 1);
			if (ans <= n) r = mid;
          	else l = mid;
		} 
		int cur=0;
		double mini=1e9;
		for(ll i=l;i<=r;i++){
			double buf=(((i + 1) * h + i * c) / (2 * i + 1)) - n;
			if(fabs(mini)>fabs(buf)){
				cur=i;
				mini=buf;
			}
		}
		cout<<cur*2+1;
		cout<<endl;
	}
	return 0;
}
