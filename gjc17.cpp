#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int sc[n+1];
	for(int i=0;i<n;i++) cin>>sc[i];
	int ch=sc[m-1];
	sort(sc,sc+n);
	reverse(sc,sc+n);
	for(int i=0;i<n;i++){
		if(sc[i]==ch){
			cout<<i+1;
			break;
		} 
	}
	return 0;
}
