#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(m==1){
			for(int i=0;i<n-2;i++) cout<<'a';
			for(int i=0;i<2;i++) cout<<'b';
			cout<<endl;
			continue;
		}
		int c=1;
		int k=1;
		int last;
		while(m>c){
			k++;
			last=c;
			c=c+k;
		} 
		for(int i=0;i<n;i++){
			if(i==n-m+last || i== n-k-1) cout<<'b';
			else cout<<'a';
		}
		cout<<endl;
	}
	return 0;
}
