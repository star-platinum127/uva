#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	int cnt=1e9;
	cnt=min(a+b+c,1500);
	cnt=min(cnt,min(a+b,1100)+min(c,800));
	cnt=min(cnt,min(a,600)+min(b,600)+min(c,800));
	cout<<cnt<<endl;
	return 0;
}
