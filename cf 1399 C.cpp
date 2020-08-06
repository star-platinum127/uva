#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005];
int bct[105][105];
bool flag[105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];	
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				bct[i][j]=arr[i]+arr[j];
			}
		}
		int maxi=-1e9;
		int cnt=0;
		for(int k=100;k>=1;k--){
			cnt=0;
			memset(flag,0,sizeof(flag));
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(!flag[i] && !flag[j] && bct[i][j]==k){
						flag[i]=1;
						flag[j]=1;
						cnt++;
					}
				}
			}
			maxi=max(cnt,maxi);
		}
		
		cout<<maxi<<endl;
	}
	return 0;
}
