#include <bits/stdc++.h>
using namespace std;
#define miku mywaifu
#define misaka mywaifu
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int h,n,m;
		cin>>h>>n>>m;
		while(n!=0 && h>h/2+10){
			n--;
			h/=2;
			h+=10;
		}
		h-=10*m;
		if(h>0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
