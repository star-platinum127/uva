#include<bits/stdc++.h>
using namespace std;
#define miku mywaifu
#define misaka mywaifu
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int r,l;
		cin>>l>>r;
		if(l==1) cout<<1<<" "<<r<<endl;
		else{
			if(l==r-r%l) cout<<-1<<" "<<-1<<endl;
			else cout<<l<<" "<<r-r%l<<endl;
			
		}
	}
	return 0;
}
