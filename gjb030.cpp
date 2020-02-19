#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int l[100],s[1001];
int d[100][1001];
int c(int *l,int*s,int n,int m){
	if(n<0 ||m<0)return d[n][m]=-1e6;
	if(n==0||m==0)return d[n][m]=0;
	if(d[n][m]) return d[n][m]; 
	if(m-l[n]<0) return d[n][m]=c(l,s,n-1,m);
	return d[n][m]=max(c(l,s,n-1,m),(c(l,s,n-1,m-l[n])+s[n]));
}
int main(int argc, char** argv) {
	
	int n,m;
	cin>>n>>m;
	int l[n+1];
	int s[n+1];
	int d[n+1][m+1];
	for(int i=1;i<=n;i++){
		cin>>l[i];
		cin>>s[i];
	}
	for(int i=0;i<=n;i++)for(int j=0;j<=m;j++) d[i][j]=0;
	cout<<c(l,s,n,m);
	return 0;
}



