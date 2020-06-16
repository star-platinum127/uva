#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	if(n>=90) cout<<'5'<<" ";
	else if(n>=70) cout<<'4'<<" ";
	else if(n>=50) cout<<'3'<<" ";
	else if(n>=30) cout<<'2'<<" ";
	else cout<<'1'<<" ";
	if(m>=350) cout<<'5'<<endl;
	else if(m>=250) cout<<'4'<<endl;
	else if(m>=150) cout<<'3'<<endl;
	else if(m>=50) cout<<'2'<<endl;
	else cout<<'1'<<endl;
	return 0;
}
