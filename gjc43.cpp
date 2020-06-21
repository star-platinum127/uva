#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[105][105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j]=abs(j-i)*100;
		}
	}
	for(int i=0;i<m;i++){
		int t,p,c;
		cin>>t>>p>>c;
		if(arr[t][p]>c){
			arr[t][p]=c;
			arr[p][t]=c;
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
			}
		}
	}
	cout<<arr[1][n]<<endl;
	return 0;
}
