#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	int c;
	cin>>n>>m>>c;
	if((n-7)*31+m+c<=61) cout<<"YES"<<endl;
	else cout<<"NO";
	return 0;
}
