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
		int n;
		cin>>n;
		int tmp=n/4;
		if(n%4!=0) tmp++;
		for(int i=0;i<n-tmp;i++) cout<<9;
		for(int i=0;i<tmp;i++) cout<<8;
		cout<<endl;
	}
	return 0;
}
