#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int y2[11][101];
int x1[11][101];
int dist(int r,int c,int s,int t,int m,int n,int k){
	int tmp=0;
	for(int i=r;i<r+s;i++){
		for(int j=c;j<c+t;j++){
			if(x1[i][j]!=y2[i-r][j-c]){
				tmp+=1;
			}
		}
	}
	return tmp;
}
int mist(int r,int c,int s,int t,int m,int n,int k){
	int sum1=0;
	int sum2=0;
	int sum3=0;
	for(int i=r;i<r+s;i++){
		for(int j=c;j<c+t;j++){
			sum1+=x1[i][j];
			sum2+=y2[i-r][j-c];
		}
	}
	if(sum1>sum2) sum3=sum1-sum2;
	else sum3=sum2-sum1;
	return sum3;
} 
int main(int argc, char** argv) {
	int s,t,m,n,r;
	int final1=0;
	int final2=1e9;

	cin>>s>>t>>m>>n>>r;
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++) cin>>y2[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cin>>x1[i][j];
	}
	for(int i=0;i<=m-s;i++){
		for(int j=0;j<=n-t;j++){
			if(dist(i,j,s,t,m,n,r)<=r){
				final1++;
				final2=min(final2,mist(i,j,s,t,m,n,r));
			} 
		}
	}
	cout<<final1<<endl;
	if(final1==0) cout<<0;
	else cout<<final2;
	return 0;
}

