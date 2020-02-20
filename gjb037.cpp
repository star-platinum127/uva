#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void p(int n,int m,int *d,int l){
	if(n==l){
		for(int i=0;i<=m;i++){
			d[l-1]=i;
			for(int j=0;j<n;j++) cout<<d[j];
			cout<<endl;
		}
	}else{
		for(int i=0;i<=m;i++){
			d[l-1]=i;
			p(n,m,d,l+1);
		}
	}


}
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int d[n];
	p(n,m,d,1);
	return 0;
}
