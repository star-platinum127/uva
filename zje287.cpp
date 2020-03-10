#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int d[101][101];
int a[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
int n,m;
bool check(int k,int w){
	if (0 <= k && k < n && 0 <= w && w < m) return true;
	else return false;
}
int main(int argc, char** argv) {
	int ni=0,nj=0;
	ll sum1=0;
	ll min1=1e9;
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>d[i][j];
				if(d[i][j]<min1){
					min1=d[i][j];
					ni=i;
					nj=j;
				}
			}
		}
		sum1+=d[ni][nj];
		d[ni][nj]=-1;
		while(true){
			int axs=-1;
			min1=1e9;
			for(int i=0;i<4;i++){
				if(d[ni+a[i][0]][nj+a[i][1]]!=-1 && d[ni+a[i][0]][nj+a[i][1]]<min1&& check(ni+a[i][0],nj+a[i][1])==true){
					min1=d[ni+a[i][0]][nj+a[i][1]];
					axs=i;
				}
			}
			if(axs==-1) break;
			ni+=a[axs][0];
			nj+=a[axs][1];
			sum1+=d[ni][nj];
			d[ni][nj]=-1;
		}
		cout<<sum1<<endl;
	}
	
	return 0;
}
