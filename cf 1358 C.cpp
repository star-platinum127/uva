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
		ll x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(ll)(x2-x1)*(y2-y1)+1<<endl;
	}
	return 0;
}
