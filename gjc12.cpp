#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n;
	ll a1[n];
	int c=0;
	for(int i=0;i<n;i++) cin>>a1[i];
	cin>>m;
	ll a2[m];
	for(int j=0;j<m;j++) cin>>a2[j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a1[i]==a2[j]) c++;
		}
	}
	cout<<c;
	
	return 0;
}
