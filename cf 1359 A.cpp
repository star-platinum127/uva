#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int n,m,k;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		if(m==0){
			cout<<'0'<<endl;
			continue;
		}
		int buf=n/k;
		int max1=min(buf,m);
		m-=max1;
		k-=1;
		int y=(m-1+k)/k;
		cout<<max1-y<<endl;
	}
	return 0;
}
