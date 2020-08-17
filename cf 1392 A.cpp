#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywiafu

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> s;
		int tmp;
		for(int i=0;i<n;i++){
			cin>>tmp;
			s.insert(tmp);
		}
		if(s.size()==1) cout<<n<<endl;
		else cout<<1<<endl;
	} 
	return 0;
}
