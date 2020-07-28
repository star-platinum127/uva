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
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		ll ans=0;
		ans+=b;
		if(a<=b) ans=b;
		else if(d>=c) ans=-1;
		else{
			ans+=((a-b)/(c-d))*c+((a-b)%(c-d)!=0)*c;
		}
		cout<<ans<<endl;
	}
	return 0;
}
