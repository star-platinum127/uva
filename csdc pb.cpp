#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	ll sc[200000];
	ll se[m];
	memset(se,0,sizeof(se));
	ll c=0;
	ll cou;
	for(int i=0;i<n;i++){
		cin>>sc[i];
		sc[i]=sc[i]%m;
		se[sc[i]]++;
	}
	for(int i=0;i<m;i++){
		c+=(se[i]-1)*se[i]/2;
	}
	cout<<c;
	return 0;
}
