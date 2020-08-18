#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,tmp;
	cin>>n;
	int maxi=-1e9;
	int mini=1e9;
	for(int i=0;i<n;i++){
		cin>>tmp;
		maxi=max(maxi,tmp-mini);
		mini=min(mini,tmp);
	}
	cout<<max(0,maxi)<<endl;
	return 0;
}
