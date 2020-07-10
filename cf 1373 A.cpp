#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	ll a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b>>c;
		if(a>=c) cout<<-1<<" ";
		else cout<<1<<" ";
		if(a*b<=c) cout<<-1<<" ";
		else cout<<b<<" ";
		cout<<endl;
	}
	
	return 0;
}
