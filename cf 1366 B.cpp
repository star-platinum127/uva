#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m,x;
		cin>>n>>x>>m;
		int l=x,r=x;
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			if(a>r || b<l) continue;
			else{
				l=min(l,a);
				r=max(r,b);
			}
		}
		cout<<r-l+1<<endl;
		
	}
	return 0;
}
