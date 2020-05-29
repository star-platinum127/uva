#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[205][205];
int dp[205][205];
int max1=-1e9;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m){
	 int max1=-1e9;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) if(arr[i][j]!=0 && j!=0){
				arr[i][j]=arr[i][j-1]+1;
			} 
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int min1=1e9;
				for(int k=0;i-k>=0 && arr[i-k][j];k++){
					min1=min(min1,arr[i-k][j]);
					int sum1=min1*(k+1);
					max1=max(sum1,max1);
				}
			}
		}
		cout<<max1<<endl;	
	}
	
	return 0;
}
